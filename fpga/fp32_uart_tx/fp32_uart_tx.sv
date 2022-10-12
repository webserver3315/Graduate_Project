module fp32_uart_tx
    #(
        parameter   BAUD_RATE = 32'd115_200,
        parameter    IDLE0_ST   =   0,
        parameter    START0_ST   =   1,
        parameter    D0_ST   =   2,
        parameter    D1_ST   =   3,
        parameter    D2_ST   =   4,
        parameter    D3_ST   =   5,
        parameter    D4_ST   =   6,
        parameter    D5_ST   =   7,
        parameter    D6_ST   =   8,
        parameter    D7_ST   =   9,
        parameter    STOP0_ST   =   10,
        parameter    IDLE1_ST   =   11,
        parameter    START1_ST   =   12,
        parameter    D8_ST   =   13,
        parameter    D9_ST   =   14,
        parameter    D10_ST   =   15,
        parameter    D11_ST   =   16,
        parameter    D12_ST   =   17,
        parameter    D13_ST   =   18,
        parameter    D14_ST   =   19,
        parameter    D15_ST   =   20,
        parameter    STOP1_ST   =   21,
        parameter    IDLE2_ST   =   22,
        parameter    START2_ST   =   23,
        parameter    D16_ST   =   24,
        parameter    D17_ST   =   25,
        parameter    D18_ST   =   26,
        parameter    D19_ST   =   27,
        parameter    D20_ST   =   28,
        parameter    D21_ST   =   29,
        parameter    D22_ST   =   30,
        parameter    D23_ST   =   31,
        parameter    STOP2_ST   =   32,
        parameter    IDLE3_ST   =   33,
        parameter    START3_ST   =   34,
        parameter    D24_ST   =   35,
        parameter    D25_ST   =   36,
        parameter    D26_ST   =   37,
        parameter    D27_ST   =   38,
        parameter    D28_ST   =   39,
        parameter    D29_ST   =   40,
        parameter    D30_ST   =   41,
        parameter    D31_ST   =   42,
        parameter    STOP3_ST   =   43
    )
    (
        input clk_i, // Assume 50MHz
        input btn1_i,
        output reg uart_tx_o,
        output reg led1_o, led2_o
    );

//	reg [31:0] full_precision_i = 32'h3332_3130;
	reg [31:0] full_precision_i = 32'h44434241;
		
    reg [7:0] tx_state = IDLE0_ST;
	wire [31:0] tx_data = full_precision_i; // 8'h55
    reg [31:0] clk_count;

    reg [7:0] repeat_cnt = 8'd5;

    always @(posedge clk_i) begin
        if(clk_count == 32'd433) begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            clk_count = 0;
            case(tx_state)                
                IDLE0_ST   :   tx_state = START0_ST;
                START0_ST   :   tx_state = D0_ST;
                D0_ST   :   tx_state = D1_ST;
                D1_ST   :   tx_state = D2_ST;
                D2_ST   :   tx_state = D3_ST;
                D3_ST   :   tx_state = D4_ST;
                D4_ST   :   tx_state = D5_ST;
                D5_ST   :   tx_state = D6_ST;
                D6_ST   :   tx_state = D7_ST;
                D7_ST   :   tx_state = STOP0_ST;
                STOP0_ST   :   tx_state = IDLE1_ST;
                IDLE1_ST   :   tx_state = START1_ST;
                START1_ST   :   tx_state = D8_ST;
                D8_ST   :   tx_state = D9_ST;
                D9_ST   :   tx_state = D10_ST;
                D10_ST   :   tx_state = D11_ST;
                D11_ST   :   tx_state = D12_ST;
                D12_ST   :   tx_state = D13_ST;
                D13_ST   :   tx_state = D14_ST;
                D14_ST   :   tx_state = D15_ST;
                D15_ST   :   tx_state = STOP1_ST;
                STOP1_ST   :   tx_state = IDLE2_ST;
                IDLE2_ST   :   tx_state = START2_ST;
                START2_ST   :   tx_state = D16_ST;
                D16_ST   :   tx_state = D17_ST;
                D17_ST   :   tx_state = D18_ST;
                D18_ST   :   tx_state = D19_ST;
                D19_ST   :   tx_state = D20_ST;
                D20_ST   :   tx_state = D21_ST;
                D21_ST   :   tx_state = D22_ST;
                D22_ST   :   tx_state = D23_ST;
                D23_ST   :   tx_state = STOP2_ST;
                STOP2_ST   :   tx_state = IDLE3_ST;
                IDLE3_ST   :   tx_state = START3_ST;
                START3_ST   :   tx_state = D24_ST;
                D24_ST   :   tx_state = D25_ST;
                D25_ST   :   tx_state = D26_ST;
                D26_ST   :   tx_state = D27_ST;
                D27_ST   :   tx_state = D28_ST;
                D28_ST   :   tx_state = D29_ST;
                D29_ST   :   tx_state = D30_ST;
                D30_ST   :   tx_state = D31_ST;
                D31_ST   :   tx_state = STOP3_ST;
                STOP3_ST	:	 tx_state = IDLE0_ST;
                default :   tx_state = START0_ST;
            endcase
        end
        else begin
            clk_count = clk_count + 1;
        end
    end

    always_comb begin
        case(tx_state)
            IDLE0_ST   :   uart_tx_o = 1;
            START0_ST   :   uart_tx_o = 0;
            D0_ST   :   uart_tx_o = tx_data[0];
            D1_ST   :   uart_tx_o = tx_data[1];
            D2_ST   :   uart_tx_o = tx_data[2];
            D3_ST   :   uart_tx_o = tx_data[3];
            D4_ST   :   uart_tx_o = tx_data[4];
            D5_ST   :   uart_tx_o = tx_data[5];
            D6_ST   :   uart_tx_o = tx_data[6];
            D7_ST   :   uart_tx_o = tx_data[7];
            STOP0_ST   :   uart_tx_o = 1;
            IDLE1_ST   :   uart_tx_o = 1;
            START1_ST   :   uart_tx_o = 0;
            D8_ST   :   uart_tx_o = tx_data[8];
            D9_ST   :   uart_tx_o = tx_data[9];
            D10_ST   :   uart_tx_o = tx_data[10];
            D11_ST   :   uart_tx_o = tx_data[11];
            D12_ST   :   uart_tx_o = tx_data[12];
            D13_ST   :   uart_tx_o = tx_data[13];
            D14_ST   :   uart_tx_o = tx_data[14];
            D15_ST   :   uart_tx_o = tx_data[15];
            STOP1_ST   :   uart_tx_o = 1;
            IDLE2_ST   :   uart_tx_o = 1;
            START2_ST   :   uart_tx_o = 0;
            D16_ST   :   uart_tx_o = tx_data[16];
            D17_ST   :   uart_tx_o = tx_data[17];
            D18_ST   :   uart_tx_o = tx_data[18];
            D19_ST   :   uart_tx_o = tx_data[19];
            D20_ST   :   uart_tx_o = tx_data[20];
            D21_ST   :   uart_tx_o = tx_data[21];
            D22_ST   :   uart_tx_o = tx_data[22];
            D23_ST   :   uart_tx_o = tx_data[23];
            STOP2_ST   :   uart_tx_o = 1;
            IDLE3_ST   :   uart_tx_o = 1;
            START3_ST   :   uart_tx_o = 0;
            D24_ST   :   uart_tx_o = tx_data[24];
            D25_ST   :   uart_tx_o = tx_data[25];
            D26_ST   :   uart_tx_o = tx_data[26];
            D27_ST   :   uart_tx_o = tx_data[27];
            D28_ST   :   uart_tx_o = tx_data[28];
            D29_ST   :   uart_tx_o = tx_data[29];
            D30_ST   :   uart_tx_o = tx_data[30];
            D31_ST   :   uart_tx_o = tx_data[31];
            STOP3_ST   :   uart_tx_o = 1;
            default :   uart_tx_o = 1;
        endcase
    end



endmodule