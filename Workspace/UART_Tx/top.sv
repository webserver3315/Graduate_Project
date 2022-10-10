`define DEBUG
/*
    UART_Tx
*/
module uart_tx
    #(
        parameter   BAUD_RATE = 32'd115_200,
        parameter   IDLE_ST = 4'd0,
        parameter   START_ST = 4'd1,
        parameter   D0_ST = 4'd2,
        parameter   D1_ST = 4'd3,
        parameter   D2_ST = 4'd4,
        parameter   D3_ST = 4'd5,
        parameter   D4_ST = 4'd6,
        parameter   D5_ST = 4'd7,
        parameter   D6_ST = 4'd8,
        parameter   D7_ST = 4'd9,
		parameter   PARITY_ST = 4'd10,
        parameter   STOP_ST = 4'd11
    )
    (
        input clk_i, // Assume 50MHz
        input btn1_i,
        output reg uart_tx_o,
        output reg led1_o, led2_o
    );

    reg [3:0] state, next_state;
    reg [7:0] tx_data = 8'h55; // ASCII 8'b1010_1010 == U
    reg [31:0] clk_count;
    reg clk_div;
    
    wire even_parity = tx_data[0] ^ tx_data[1] ^ tx_data[2] ^ tx_data[3] ^ tx_data[4] ^ tx_data[5] ^ tx_data[6] ^ tx_data[7];

    // BTN1 CHECKER
    always_comb begin
		led1_o = btn1_i; // LED ON when 0
        led2_o = clk_div;
		// BTN 0 when PRESSED
    end

    // CLOCK_DIV GENERATOR
    always @(posedge clk_i) begin
		  // 2400BR(416.6666us) == 20ns * (20834/2)*2, 		  
        if(clk_count == 32'd217) begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            clk_count <= 0;
            clk_div <= ~clk_div;
        end
        else begin
            clk_count <= clk_count + 1;
        end
    end
    
    // TRANSMITTOR
    always @(posedge clk_i) begin // for each clock
        case(state)
            IDLE_ST :       uart_tx_o <= 1; 
            START_ST :      uart_tx_o <= 0;
            D0_ST   :       uart_tx_o <= tx_data[0];
            D1_ST   :       uart_tx_o <= tx_data[1];
            D2_ST   :       uart_tx_o <= tx_data[2];
            D3_ST   :       uart_tx_o <= tx_data[3];
            D4_ST   :       uart_tx_o <= tx_data[4];
            D5_ST   :       uart_tx_o <= tx_data[5];
            D6_ST   :       uart_tx_o <= tx_data[6];
            D7_ST   :       uart_tx_o <= tx_data[7];
            PARITY_ST:      uart_tx_o <= even_parity;
            STOP_ST :   begin
					        uart_tx_o <= 1;			        
			            end
            default :       uart_tx_o <= 1;
        endcase
    end
    
    // COMMAND QUEUE BUFFER
    reg queueing = 1'd0;
    always @(negedge btn1_i) begin
        queueing = queueing;
        if((state == IDLE_ST) && (btn1_i == 1'b0)) begin
            queueing = 1'd1;
        end
        else begin  
        end
    end

    // STATE TRANSPOSER
    always @(posedge clk_div) begin
		case(state)
                IDLE_ST :   begin
						if(queueing) begin // PUSHED
							state <= START_ST;
						end
						else begin // NOT PUSHED
							state <= IDLE_ST;
						end
                        end
                START_ST :  state <= D0_ST;
                D0_ST   :   state <= D1_ST;   
                D1_ST   :   state <= D2_ST;
                D2_ST   :   state <= D3_ST;
                D3_ST   :   state <= D4_ST;
                D4_ST   :   state <= D5_ST;
                D5_ST   :   state <= D6_ST;
                D6_ST   :   state <= D7_ST;
                D7_ST   :   state <= START_ST;
                // D7_ST   :   state <= PARITY_ST;
                // PARITY_ST : state <= STOP_ST;
                // STOP_ST :   state <= IDLE_ST;
                default :   state <= IDLE_ST;
            endcase
    end
    


endmodule