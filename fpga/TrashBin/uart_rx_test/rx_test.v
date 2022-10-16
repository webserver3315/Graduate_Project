module uart_rx
    #(
        parameter   IDLE_ST     = 3'b000,
        parameter   START_ST     = 3'b001,
        parameter   DATA_ST     = 3'b010,
        parameter   STOP_ST     = 3'b011
    )
    (
        input clk,
        input rx_input_data,
        output reg rx_loopback
    );

    reg [3:0]   rx_state = 0;
    reg [8:0]   clk_count = 0;
    reg         rx_data = 1'b1;
    reg [7:0]   rx_result_data = 0;
    reg [2:0]   rx_index = 0;

    always @(*) begin
        rx_data <=  rx_input_data;
    end

    always @(posedge clk) begin
        case(rx_state)
            IDLE_ST: begin
                rx_loopback <=  1;
                clk_count   <=  0;
                if(rx_data == 1'b0) begin
                    rx_state <= START_ST;                    
                end
                else begin
                    rx_state <= IDLE_ST;
                end
            end
            START_ST: begin
                rx_loopback <= 0;
                if(clk_count== 434) begin
                    clk_count <= 0;
                    rx_state <= DATA_ST;
                end
                else begin
                    clk_count <= clk_count + 1;
                end
            end
            DATA_ST: begin
                rx_loopback <= rx_data;
                if(clk_count == 434) begin
                    clk_count <= 0;
                    rx_result_data[rx_index] <= rx_data;
                    if(rx_index < 7) begin
                        rx_index <= rx_index + 1;                       
                    end
                    else begin
                        rx_index <= 0;
                        rx_state <= STOP_ST;
                    end
                end
                else begin
                    clk_count <= clk_count + 1;
                end
            end
            STOP_ST: begin
                rx_loopback <= 1'b1;
                if(clk_count == 434) begin
                    clk_count <= 0;
                    rx_state <= IDLE_ST;
                end
                else begin
                    clk_count <= clk_count + 1;
                end
            end
            default: begin
                rx_state <= IDLE_ST;
            end
        endcase
    end
    
endmodule