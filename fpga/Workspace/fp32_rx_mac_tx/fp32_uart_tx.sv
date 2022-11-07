// `timescale 10ns/10ns

module fp32_uart_tx
    (
        input RSTL_I,
        input CLK_I, // Assume 50MHz
        input TX_VALID_I,
        input [31:0] TX_DATA_I, // 8'h55
        output reg TX_DATA_O,
        output TX_READY_O
    );

    /*
        원하는 것: TX_VALID가 HIGH 일 때 출력, TX_VALID는 LED로 확인
    */
    localparam MAX_CLK_CNT = 5208 - 1;

    localparam   BAUD_RATE = 32'd115_200;
    localparam    IDLE0_ST   =   0;
    localparam    START0_ST   =   1;
    localparam    D0_ST   =   2;
    localparam    D1_ST   =   3;
    localparam    D2_ST   =   4;
    localparam    D3_ST   =   5;
    localparam    D4_ST   =   6;
    localparam    D5_ST   =   7;
    localparam    D6_ST   =   8;
    localparam    D7_ST   =   9;
    localparam    STOP0_ST   =   10;
    localparam    IDLE1_ST   =   11;
    localparam    START1_ST   =   12;
    localparam    D8_ST   =   13;
    localparam    D9_ST   =   14;
    localparam    D10_ST   =   15;
    localparam    D11_ST   =   16;
    localparam    D12_ST   =   17;
    localparam    D13_ST   =   18;
    localparam    D14_ST   =   19;
    localparam    D15_ST   =   20;
    localparam    STOP1_ST   =   21;
    localparam    IDLE2_ST   =   22;
    localparam    START2_ST   =   23;
    localparam    D16_ST   =   24;
    localparam    D17_ST   =   25;
    localparam    D18_ST   =   26;
    localparam    D19_ST   =   27;
    localparam    D20_ST   =   28;
    localparam    D21_ST   =   29;
    localparam    D22_ST   =   30;
    localparam    D23_ST   =   31;
    localparam    STOP2_ST   =   32;
    localparam    IDLE3_ST   =   33;
    localparam    START3_ST   =   34;
    localparam    D24_ST   =   35;
    localparam    D25_ST   =   36;
    localparam    D26_ST   =   37;
    localparam    D27_ST   =   38;
    localparam    D28_ST   =   39;
    localparam    D29_ST   =   40;
    localparam    D30_ST   =   41;
    localparam    D31_ST   =   42;
    localparam    STOP3_ST   =   43;

    reg [7:0] tx_state = IDLE0_ST;
	reg [31:0] tx_data = 32'h0000_0000; // 8'h55
    reg [31:0] clk_cnt;

    wire tx_valid_i_posedge;
    posedge_detector My_posedge_detector
    (
        .clk(CLK_I),
        .sig(TX_VALID_I),
        .pulse(tx_valid_i_posedge)
    );

    always @(posedge CLK_I or negedge RSTL_I) begin
        if(~RSTL_I) begin
            tx_state = IDLE0_ST;
            clk_cnt = 0;
            // tx_data = tx_data + 1;
            tx_data = 32'h0000_0000;
        end
        else begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            case(tx_state)
                IDLE0_ST   :   begin // 천이조건이 유일하게 TX_VALID_I. 즉, clk_div sensitive 가 아니다.
                    if(tx_valid_i_posedge) begin // BTN1 PRESSED(==LOW)
                        clk_cnt = 0;
                        tx_data = TX_DATA_I;
                        tx_state = START0_ST;
                    end
                    else begin
                        // clk_cnt = clk_cnt + 1;
                        tx_state = IDLE0_ST;
                    end
                end
                START0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D0_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START0_ST;
                    end
                end
                D0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D0_ST;
                    end
                end
                D1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D1_ST;
                    end
                end
                D2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D2_ST;
                    end
                end
                D3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D4_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D3_ST;
                    end
                end
                D4_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D5_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D4_ST;
                    end
                end
                D5_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D6_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D5_ST;
                    end
                end
                D6_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D7_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D6_ST;
                    end
                end
                D7_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = STOP0_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D7_ST;
                    end
                end
                STOP0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = IDLE1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP0_ST;
                    end
                end
                IDLE1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = START1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE1_ST;
                    end
                end
                START1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D8_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START1_ST;
                    end
                end
                D8_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D9_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D8_ST;
                    end
                end
                D9_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D10_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D9_ST;
                    end
                end
                D10_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D11_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D10_ST;
                    end
                end
                D11_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D12_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D11_ST;
                    end
                end
                D12_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D13_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D12_ST;
                    end
                end
                D13_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D14_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D13_ST;
                    end
                end
                D14_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D15_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D14_ST;
                    end
                end
                D15_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = STOP1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D15_ST;
                    end
                end
                STOP1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = IDLE2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP1_ST;
                    end
                end
                IDLE2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = START2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE2_ST;
                    end
                end
                START2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D16_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START2_ST;
                    end
                end
                D16_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D17_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D16_ST;
                    end
                end
                D17_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D18_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D17_ST;
                    end
                end
                D18_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D19_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D18_ST;
                    end
                end
                D19_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D20_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D19_ST;
                    end
                end
                D20_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D21_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D20_ST;
                    end
                end
                D21_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D22_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D21_ST;
                    end
                end
                D22_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D23_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D22_ST;
                    end
                end
                D23_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = STOP2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D23_ST;
                    end
                end
                STOP2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = IDLE3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP2_ST;
                    end
                end
                IDLE3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = START3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE3_ST;
                    end
                end
                START3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D24_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START3_ST;
                    end
                end
                D24_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D25_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D24_ST;
                    end
                end
                D25_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D26_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D25_ST;
                    end
                end
                D26_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D27_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D26_ST;
                    end
                end
                D27_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D28_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D27_ST;
                    end
                end
                D28_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D29_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D28_ST;
                    end
                end
                D29_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D30_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D29_ST;
                    end
                end
                D30_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = D31_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D30_ST;
                    end
                end
                D31_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = STOP3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D31_ST;
                    end
                end
                STOP3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt = 0;
                        tx_state = IDLE0_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP3_ST;
                    end
                end
                default: begin
                end
            endcase
        end
    end

    always_comb begin // 순수조합회로
        case(tx_state)
            IDLE0_ST   :   TX_DATA_O = 1;
            START0_ST   :   TX_DATA_O = 0;
            D0_ST   :   TX_DATA_O = tx_data[0];
            D1_ST   :   TX_DATA_O = tx_data[1];
            D2_ST   :   TX_DATA_O = tx_data[2];
            D3_ST   :   TX_DATA_O = tx_data[3];
            D4_ST   :   TX_DATA_O = tx_data[4];
            D5_ST   :   TX_DATA_O = tx_data[5];
            D6_ST   :   TX_DATA_O = tx_data[6];
            D7_ST   :   TX_DATA_O = tx_data[7];
            STOP0_ST   :   TX_DATA_O = 1;
            IDLE1_ST   :   TX_DATA_O = 1;
            START1_ST   :   TX_DATA_O = 0;
            D8_ST   :   TX_DATA_O = tx_data[8];
            D9_ST   :   TX_DATA_O = tx_data[9];
            D10_ST   :   TX_DATA_O = tx_data[10];
            D11_ST   :   TX_DATA_O = tx_data[11];
            D12_ST   :   TX_DATA_O = tx_data[12];
            D13_ST   :   TX_DATA_O = tx_data[13];
            D14_ST   :   TX_DATA_O = tx_data[14];
            D15_ST   :   TX_DATA_O = tx_data[15];
            STOP1_ST   :   TX_DATA_O = 1;
            IDLE2_ST   :   TX_DATA_O = 1;
            START2_ST   :   TX_DATA_O = 0;
            D16_ST   :   TX_DATA_O = tx_data[16];
            D17_ST   :   TX_DATA_O = tx_data[17];
            D18_ST   :   TX_DATA_O = tx_data[18];
            D19_ST   :   TX_DATA_O = tx_data[19];
            D20_ST   :   TX_DATA_O = tx_data[20];
            D21_ST   :   TX_DATA_O = tx_data[21];
            D22_ST   :   TX_DATA_O = tx_data[22];
            D23_ST   :   TX_DATA_O = tx_data[23];
            STOP2_ST   :   TX_DATA_O = 1;
            IDLE3_ST   :   TX_DATA_O = 1;
            START3_ST   :   TX_DATA_O = 0;
            D24_ST   :   TX_DATA_O = tx_data[24];
            D25_ST   :   TX_DATA_O = tx_data[25];
            D26_ST   :   TX_DATA_O = tx_data[26];
            D27_ST   :   TX_DATA_O = tx_data[27];
            D28_ST   :   TX_DATA_O = tx_data[28];
            D29_ST   :   TX_DATA_O = tx_data[29];
            D30_ST   :   TX_DATA_O = tx_data[30];
            D31_ST   :   TX_DATA_O = tx_data[31];
            STOP3_ST   :   TX_DATA_O = 1;
            default :   TX_DATA_O = 1;
        endcase
    end
endmodule