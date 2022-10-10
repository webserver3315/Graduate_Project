module fp32_uart_tx
    #(
        parameter   BAUD_RATE = 32'd115_200,
        parameter   IDLE_ST = 0,
        parameter   START_ST = 1,
        parameter   D0_ST = 2,
        parameter   D1_ST = 3,
        parameter   D2_ST = 4,
        parameter   D3_ST = 5,
        parameter   D4_ST = 6,
        parameter   D5_ST = 7,
        parameter   D6_ST = 8,
        parameter   D7_ST = 9,
        parameter   STOP_ST = 10
    )
    (
        input clk_i, // Assume 50MHz
        input btn1_i,
        output reg uart_tx_o,
        output reg led1_o, led2_o
    );

    reg [3:0] tx_state;
	reg [7:0] tx_data; // 8'h55
    reg [31:0] clk_count;

    reg [7:0] repeat_cnt = 8'd5;

    /*
        문제가 뭔가?
            w가 자꾸 중간에 발생한다.
        원인이 뭔가?
            1) 연속출력되는와중 uart_tx_o = txdata[3] 할때즈음 txdata[7:0] 이 바뀐다. 일종의 RaW가 발생한다.
            2) 물리적인 노이즈로써, parity bit 을 둬야한다. => dksla.
        어떻게 증명할건가?
            1-1) 
            2-1) 

    */
    always @(posedge clk_i) begin
        if(clk_count == 32'd433) begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            clk_count = 0;
            case(tx_state)
                IDLE_ST :   begin
                    tx_state = START_ST;
                    tx_data = (tx_data == "U") ? "4" : "U"; // "3" == 8'b0011_0011 == 8'h33
                end
                START_ST :   tx_state = D0_ST;
                D0_ST   :   tx_state = D1_ST;   
                D1_ST   :   tx_state = D2_ST;
                D2_ST   :   tx_state = D3_ST;
                D3_ST   :   tx_state = D4_ST;
                D4_ST   :   tx_state = D5_ST;
                D5_ST   :   tx_state = D6_ST;
                D6_ST   :   tx_state = D7_ST;
                D7_ST   :   tx_state = STOP_ST;
                STOP_ST :   tx_state = IDLE_ST;
                default :   tx_state = START_ST;
            endcase
        end
        else begin
            clk_count = clk_count + 1;
        end
    end

    always_comb begin
        case(tx_state)
            IDLE_ST :   uart_tx_o = 1; 
            START_ST :   uart_tx_o = 0;
            D0_ST   :   uart_tx_o = tx_data[0];
            D1_ST   :   uart_tx_o = tx_data[1];
            D2_ST   :   uart_tx_o = tx_data[2];
            D3_ST   :   uart_tx_o = tx_data[3];
            D4_ST   :   uart_tx_o = tx_data[4];
            D5_ST   :   uart_tx_o = tx_data[5];
            D6_ST   :   uart_tx_o = tx_data[6];
            D7_ST   :   uart_tx_o = tx_data[7];
            STOP_ST   :   uart_tx_o = 1;
            default :   uart_tx_o = 1;
        endcase
    end



endmodule