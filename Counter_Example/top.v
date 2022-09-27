module cnt
    (
        input clk,
        input rstn,
        output reg[7:0] out
    );

    always @(posedge clk, negedge rstn) begin
        if(!rstn) begin
            out<=0;
        end
        else begin
            if(out<250)
                out<=out+1;
            else
                out<=0;
        end
    end

endmodule
