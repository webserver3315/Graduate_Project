module clock_divider
    #(
        parameter ONE_SECOND = 32'd25_000_000 //50MHZ==1sec
    )
    (
        input clk_arg,
        output reg clk_out
    );

    reg [31:0] cnt;
    always @(posedge clk_arg) begin
        if(cnt==ONE_SECOND) begin
            cnt <= 0;
            clk_out <= ~clk_out;
        end
        else begin
            cnt <= cnt+1;
        end
    end
endmodule

module make_edge_sensitive
    (
        input clk, button_in, // 0 == Pushed, 1 == Popped
        output reg aPressed // 0 == Pushed, 1 == Popped
    );
    reg [1:0] aPrev;
    always @(posedge clk) begin
        aPrev <= {aPrev[1],button_in};
        aPressed <= aPrev[0] & (~aPrev[1]);
    end
endmodule 

module seven_seg_test
    #(  // DECODE => 0 == Blink, 1 == OFF
        // SELECT => 0 == ON, 1 == OFF
        parameter   DECODE_0 = 8'b11000000,
                    DECODE_1 = 8'b11111001,
                    DECODE_2 = 8'b10100100,
                    DECODE_3 = 8'b10110000,
                    DECODE_4 = 8'b10011001,
                    DECODE_5 = 8'b10010010,
                    DECODE_6 = 8'b10000010,
                    DECODE_7 = 8'b11011000,
                    DECODE_8 = 8'b10000000,
                    DECODE_9 = 8'b10010000,
                    DECODE_10 = 8'b10001001,
                    SELECT_0 = 4'b1110, // Rightmost
                    SELECT_1 = 4'b1101,
                    SELECT_2 = 4'b1011,
                    SELECT_3 = 4'b0111
    )
    (
        input                   clk, rstn, btn1, btn2, btn3, btn4, 
        output  reg     [7:0]   seg,
        output  reg     [3:0]   dig,
        output  reg             led1
    );

    reg [3:0] count = 4'd0;
    reg [3:0] next_count = 4'd0;
    reg [1:0] pos = 2'd0;
    reg [1:0] next_pos = 2'd0;

    wire sec_clk;
    wire btn1_edge, btn2_edge, btn3_edge, btn4_edge;
    clock_divider clk_div
        (
        .clk_arg(clk),
        .clk_out(sec_clk)
        );

    always @(posedge clk) begin
        count = next_count;
        if(count == 4'd0)       seg = DECODE_0;
        else if(count == 4'd1)  seg = DECODE_1;
        else if(count == 4'd2)  seg = DECODE_2;
        else if(count == 4'd3)  seg = DECODE_3;
        else if(count == 4'd4)  seg = DECODE_4;
        else if(count == 4'd5)  seg = DECODE_5;
        else if(count == 4'd6)  seg = DECODE_6;
        else if(count == 4'd7)  seg = DECODE_7;
        else if(count == 4'd8)  seg = DECODE_8;
        else if(count == 4'd9)  seg = DECODE_9;
        else                    seg = DECODE_10;
    end

    always @(posedge clk) begin
        pos = next_pos;
        if(pos == 2'd0)         dig = SELECT_0;
        else if(pos == 2'd1)    dig = SELECT_1;
        else if(pos == 2'd2)    dig = SELECT_2;
        else                    dig = SELECT_3;
    end

    make_edge_sensitive btn1_edge_maker
        (
            .button_in(btn1),
            .clk(clk),
            .aPressed(btn1_edge)
        );
    make_edge_sensitive btn2_edge_maker
        (
            .button_in(btn2),
            .clk(clk),
            .aPressed(btn2_edge)
        );
    make_edge_sensitive btn3_edge_maker
        (
            .button_in(btn3),
            .clk(clk),
            .aPressed(btn3_edge)
        );
    make_edge_sensitive btn4_edge_maker
        (
            .button_in(btn4),
            .clk(clk),
            .aPressed(btn4_edge)
        );

    always @(negedge rstn or negedge btn1_edge or negedge btn2_edge) begin
        if (rstn==0)  begin          
            next_count = 0;
        end
        else if(btn1_edge==0) begin
            if(next_count != 4'd9) next_count = next_count+1;
            else begin 
                next_count = 4'd9;
            end
        end
        else if(btn2_edge==0) begin
            if(next_count != 4'd0) next_count = next_count-1;
            else begin 
                next_count = 4'd0;
            end
        end
        else begin
        end
    end
    // always @(posedge sec_clk or negedge rstn or negedge btn3 or negedge btn4) begin
    always @(negedge rstn or negedge btn3_edge or negedge btn4_edge) begin
        if(rstn == 0) begin
            next_pos = 0;
        end
        else if(btn3_edge==0) begin
            if(next_pos!=2'd3) next_pos = next_pos+1;
            else begin
                next_pos = 2'd3;
            end
        end
        else if(btn4_edge==0) begin
            if(next_pos!=0) next_pos = next_pos-1;
            else begin        
                next_pos = 0;        
            end
        end
        else begin            
        end
    end

    always @(posedge sec_clk) begin
        led1 = ~led1;
    end

    // always @(posedge rstn or posedge sec_clk) begin
    //     if(rstn)
    //         led1 <= ~led1;
    //     else
    //         led1 <= 1;
    // end

endmodule