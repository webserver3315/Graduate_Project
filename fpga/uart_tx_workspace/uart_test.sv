`define DEBUG
/*
    UART_Tx
*/
module uart_tx
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
        input tx_clk, // Assume 200MHz
        output reg tx_output
    );

    reg [3:0] tx_state;
//    reg [31:0] shift_buffer = 32'h4142_4344; // ASCII "ABCD"
	 reg [31:0] shift_buffer = 32'h4141_4141; // ASCII "ABCD"
	 reg [7:0] tx_data; // ASCII 'T'
    reg [31:0] clk_count;

	 always_comb begin
			tx_data = shift_buffer[7:0];
	 end
	 
    always @(*) begin
        case(tx_state)
            IDLE_ST :   tx_output <= 1; 
            START_ST :   tx_output <= 0;
            D0_ST   :   tx_output <= tx_data[0];
            D1_ST   :   tx_output <= tx_data[1];
            D2_ST   :   tx_output <= tx_data[2];
            D3_ST   :   tx_output <= tx_data[3];
            D4_ST   :   tx_output <= tx_data[4];
            D5_ST   :   tx_output <= tx_data[5];
            D6_ST   :   tx_output <= tx_data[6];
            D7_ST   :   tx_output <= tx_data[7];
            STOP_ST :   begin
					shift_buffer <= {shift_buffer[7:0], shift_buffer[31:8]};
					tx_output <= 1;
				end
            default :   tx_output <= 1;
        endcase
    end

    always @(posedge tx_clk) begin
        if(clk_count == 434) begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            clk_count <= 0;
            case(tx_state)
                IDLE_ST :   tx_state <= START_ST;
                START_ST :   tx_state <= D0_ST;
                D0_ST   :   tx_state <= D1_ST;   
                D1_ST   :   tx_state <= D2_ST;
                D2_ST   :   tx_state <= D3_ST;
                D3_ST   :   tx_state <= D4_ST;
                D4_ST   :   tx_state <= D5_ST;
                D5_ST   :   tx_state <= D6_ST;
                D6_ST   :   tx_state <= D7_ST;
                D7_ST   :   tx_state <= STOP_ST;
                STOP_ST :   tx_state <= IDLE_ST;
                default :   tx_state <= START_ST;
            endcase
        end
        else begin
            clk_count <= clk_count + 1;
        end
    end


endmodule