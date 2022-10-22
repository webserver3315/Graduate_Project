// `timescale 10ns/10ns
// `define DEBUG_TX_96

module fp32_uart_tx_96
    (
        input RSTL_I,
        input CLK_I, // Assume 50MHz
        input TX_VALID_I,
        input [95:0] TX_DATA_I, // 8'h55
        output reg TX_DATA_O,
        output TX_READY_O
    );

    /*
        원하는 것: TX_VALID가 HIGH 일 때 출력, TX_VALID는 LED로 확인
    */
    localparam MAX_CLK_CNT = 5208 - 1;

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
    localparam    IDLE4_ST   =   44;
    localparam    START4_ST   =   45;
    localparam    D32_ST   =   46;
    localparam    D33_ST   =   47;
    localparam    D34_ST   =   48;
    localparam    D35_ST   =   49;
    localparam    D36_ST   =   50;
    localparam    D37_ST   =   51;
    localparam    D38_ST   =   52;
    localparam    D39_ST   =   53;
    localparam    STOP4_ST   =   54;
    localparam    IDLE5_ST   =   55;
    localparam    START5_ST   =   56;
    localparam    D40_ST   =   57;
    localparam    D41_ST   =   58;
    localparam    D42_ST   =   59;
    localparam    D43_ST   =   60;
    localparam    D44_ST   =   61;
    localparam    D45_ST   =   62;
    localparam    D46_ST   =   63;
    localparam    D47_ST   =   64;
    localparam    STOP5_ST   =   65;
    localparam    IDLE6_ST   =   66;
    localparam    START6_ST   =   67;
    localparam    D48_ST   =   68;
    localparam    D49_ST   =   69;
    localparam    D50_ST   =   70;
    localparam    D51_ST   =   71;
    localparam    D52_ST   =   72;
    localparam    D53_ST   =   73;
    localparam    D54_ST   =   74;
    localparam    D55_ST   =   75;
    localparam    STOP6_ST   =   76;
    localparam    IDLE7_ST   =   77;
    localparam    START7_ST   =   78;
    localparam    D56_ST   =   79;
    localparam    D57_ST   =   80;
    localparam    D58_ST   =   81;
    localparam    D59_ST   =   82;
    localparam    D60_ST   =   83;
    localparam    D61_ST   =   84;
    localparam    D62_ST   =   85;
    localparam    D63_ST   =   86;
    localparam    STOP7_ST   =   87;
    localparam    IDLE8_ST   =   88;
    localparam    START8_ST   =   89;
    localparam    D64_ST   =   90;
    localparam    D65_ST   =   91;
    localparam    D66_ST   =   92;
    localparam    D67_ST   =   93;
    localparam    D68_ST   =   94;
    localparam    D69_ST   =   95;
    localparam    D70_ST   =   96;
    localparam    D71_ST   =   97;
    localparam    STOP8_ST   =   98;
    localparam    IDLE9_ST   =   99;
    localparam    START9_ST   =   100;
    localparam    D72_ST   =   101;
    localparam    D73_ST   =   102;
    localparam    D74_ST   =   103;
    localparam    D75_ST   =   104;
    localparam    D76_ST   =   105;
    localparam    D77_ST   =   106;
    localparam    D78_ST   =   107;
    localparam    D79_ST   =   108;
    localparam    STOP9_ST   =   109;
    localparam    IDLE10_ST   =   110;
    localparam    START10_ST   =   111;
    localparam    D80_ST   =   112;
    localparam    D81_ST   =   113;
    localparam    D82_ST   =   114;
    localparam    D83_ST   =   115;
    localparam    D84_ST   =   116;
    localparam    D85_ST   =   117;
    localparam    D86_ST   =   118;
    localparam    D87_ST   =   119;
    localparam    STOP10_ST   =   120;
    localparam    IDLE11_ST   =   121;
    localparam    START11_ST   =   122;
    localparam    D88_ST   =   123;
    localparam    D89_ST   =   124;
    localparam    D90_ST   =   125;
    localparam    D91_ST   =   126;
    localparam    D92_ST   =   127;
    localparam    D93_ST   =   128;
    localparam    D94_ST   =   129;
    localparam    D95_ST   =   130;
    localparam    STOP11_ST   =   131;

    reg [7:0] tx_state = IDLE0_ST;
	reg [95:0] tx_data = 32'h0000_0000; // 8'h55
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
            tx_state <= IDLE0_ST;
            clk_cnt <= 0;
            // tx_data <= tx_data + 1;
            `ifdef DEBUG_TX_96
            `else
            tx_data <= 32'h0000_0000;
            `endif
        end
        else begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            case(tx_state)
                IDLE0_ST   :   begin
                    if(tx_valid_i_posedge) begin // BTN1 PRESSED(==LOW)
                        clk_cnt <= 0;
                        `ifdef DEBUG_TX_96
                        tx_data <= 96'h0123_4567_89AB_CDEF_1122_3344;
                        `else
                        tx_data <= TX_DATA_I;
                        `endif
                        tx_state <= START0_ST;
                    end
                    else begin
                        // clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE0_ST;
                    end
                end
                START0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D0_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START0_ST;
                    end
                end
                D0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D1_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D0_ST;
                    end
                end
                D1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D2_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D1_ST;
                    end
                end
                D2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D3_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D2_ST;
                    end
                end
                D3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D4_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D3_ST;
                    end
                end
                D4_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D5_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D4_ST;
                    end
                end
                D5_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D6_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D5_ST;
                    end
                end
                D6_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D7_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D6_ST;
                    end
                end
                D7_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP0_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D7_ST;
                    end
                end
                STOP0_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE1_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP0_ST;
                    end
                end
                IDLE1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START1_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE1_ST;
                    end
                end
                START1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D8_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START1_ST;
                    end
                end
                D8_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D9_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D8_ST;
                    end
                end
                D9_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D10_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D9_ST;
                    end
                end
                D10_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D11_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D10_ST;
                    end
                end
                D11_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D12_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D11_ST;
                    end
                end
                D12_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D13_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D12_ST;
                    end
                end
                D13_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D14_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D13_ST;
                    end
                end
                D14_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D15_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D14_ST;
                    end
                end
                D15_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP1_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D15_ST;
                    end
                end
                STOP1_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE2_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP1_ST;
                    end
                end
                IDLE2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START2_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE2_ST;
                    end
                end
                START2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D16_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START2_ST;
                    end
                end
                D16_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D17_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D16_ST;
                    end
                end
                D17_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D18_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D17_ST;
                    end
                end
                D18_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D19_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D18_ST;
                    end
                end
                D19_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D20_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D19_ST;
                    end
                end
                D20_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D21_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D20_ST;
                    end
                end
                D21_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D22_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D21_ST;
                    end
                end
                D22_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D23_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D22_ST;
                    end
                end
                D23_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP2_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D23_ST;
                    end
                end
                STOP2_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE3_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP2_ST;
                    end
                end
                IDLE3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START3_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE3_ST;
                    end
                end
                START3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D24_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START3_ST;
                    end
                end
                D24_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D25_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D24_ST;
                    end
                end
                D25_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D26_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D25_ST;
                    end
                end
                D26_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D27_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D26_ST;
                    end
                end
                D27_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D28_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D27_ST;
                    end
                end
                D28_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D29_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D28_ST;
                    end
                end
                D29_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D30_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D29_ST;
                    end
                end
                D30_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D31_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D30_ST;
                    end
                end
                D31_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP3_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D31_ST;
                    end
                end
                STOP3_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE4_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP3_ST;
                    end
                end
                IDLE4_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START4_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE4_ST;
                    end
                end
                START4_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D32_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START4_ST;
                    end
                end
                D32_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D33_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D32_ST;
                    end
                end
                D33_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D34_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D33_ST;
                    end
                end
                D34_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D35_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D34_ST;
                    end
                end
                D35_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D36_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D35_ST;
                    end
                end
                D36_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D37_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D36_ST;
                    end
                end
                D37_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D38_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D37_ST;
                    end
                end
                D38_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D39_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D38_ST;
                    end
                end
                D39_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP4_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D39_ST;
                    end
                end
                STOP4_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE5_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP4_ST;
                    end
                end
                IDLE5_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START5_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE5_ST;
                    end
                end
                START5_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D40_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START5_ST;
                    end
                end
                D40_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D41_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D40_ST;
                    end
                end
                D41_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D42_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D41_ST;
                    end
                end
                D42_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D43_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D42_ST;
                    end
                end
                D43_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D44_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D43_ST;
                    end
                end
                D44_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D45_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D44_ST;
                    end
                end
                D45_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D46_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D45_ST;
                    end
                end
                D46_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D47_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D46_ST;
                    end
                end
                D47_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP5_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D47_ST;
                    end
                end
                STOP5_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE6_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP5_ST;
                    end
                end
                IDLE6_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START6_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE6_ST;
                    end
                end
                START6_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D48_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START6_ST;
                    end
                end
                D48_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D49_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D48_ST;
                    end
                end
                D49_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D50_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D49_ST;
                    end
                end
                D50_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D51_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D50_ST;
                    end
                end
                D51_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D52_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D51_ST;
                    end
                end
                D52_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D53_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D52_ST;
                    end
                end
                D53_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D54_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D53_ST;
                    end
                end
                D54_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D55_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D54_ST;
                    end
                end
                D55_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP6_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D55_ST;
                    end
                end
                STOP6_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE7_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP6_ST;
                    end
                end
                IDLE7_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START7_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE7_ST;
                    end
                end
                START7_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D56_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START7_ST;
                    end
                end
                D56_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D57_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D56_ST;
                    end
                end
                D57_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D58_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D57_ST;
                    end
                end
                D58_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D59_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D58_ST;
                    end
                end
                D59_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D60_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D59_ST;
                    end
                end
                D60_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D61_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D60_ST;
                    end
                end
                D61_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D62_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D61_ST;
                    end
                end
                D62_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D63_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D62_ST;
                    end
                end
                D63_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP7_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D63_ST;
                    end
                end
                STOP7_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE8_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP7_ST;
                    end
                end
                IDLE8_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START8_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE8_ST;
                    end
                end
                START8_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D64_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START8_ST;
                    end
                end
                D64_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D65_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D64_ST;
                    end
                end
                D65_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D66_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D65_ST;
                    end
                end
                D66_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D67_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D66_ST;
                    end
                end
                D67_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D68_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D67_ST;
                    end
                end
                D68_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D69_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D68_ST;
                    end
                end
                D69_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D70_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D69_ST;
                    end
                end
                D70_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D71_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D70_ST;
                    end
                end
                D71_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP8_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D71_ST;
                    end
                end
                STOP8_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE9_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP8_ST;
                    end
                end
                IDLE9_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START9_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE9_ST;
                    end
                end
                START9_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D72_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START9_ST;
                    end
                end
                D72_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D73_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D72_ST;
                    end
                end
                D73_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D74_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D73_ST;
                    end
                end
                D74_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D75_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D74_ST;
                    end
                end
                D75_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D76_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D75_ST;
                    end
                end
                D76_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D77_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D76_ST;
                    end
                end
                D77_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D78_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D77_ST;
                    end
                end
                D78_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D79_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D78_ST;
                    end
                end
                D79_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP9_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D79_ST;
                    end
                end
                STOP9_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE10_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP9_ST;
                    end
                end
                IDLE10_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START10_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE10_ST;
                    end
                end
                START10_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D80_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START10_ST;
                    end
                end
                D80_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D81_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D80_ST;
                    end
                end
                D81_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D82_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D81_ST;
                    end
                end
                D82_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D83_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D82_ST;
                    end
                end
                D83_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D84_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D83_ST;
                    end
                end
                D84_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D85_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D84_ST;
                    end
                end
                D85_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D86_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D85_ST;
                    end
                end
                D86_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D87_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D86_ST;
                    end
                end
                D87_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP10_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D87_ST;
                    end
                end
                STOP10_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE11_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP10_ST;
                    end
                end
                IDLE11_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= START11_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= IDLE11_ST;
                    end
                end
                START11_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D88_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= START11_ST;
                    end
                end
                D88_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D89_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D88_ST;
                    end
                end
                D89_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D90_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D89_ST;
                    end
                end
                D90_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D91_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D90_ST;
                    end
                end
                D91_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D92_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D91_ST;
                    end
                end
                D92_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D93_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D92_ST;
                    end
                end
                D93_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D94_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D93_ST;
                    end
                end
                D94_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= D95_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D94_ST;
                    end
                end
                D95_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= STOP11_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= D95_ST;
                    end
                end
                STOP11_ST   :   begin
                    if(clk_cnt == MAX_CLK_CNT) begin
                        clk_cnt <= 0;
                        tx_state <= IDLE0_ST;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1;
                        tx_state <= STOP11_ST;
                    end
                end
                default: begin
                end
            endcase
        end
    end

    always_comb begin // 순수조합회로
        case(tx_state)
            IDLE0_ST   :   TX_DATA_O <= 1;
            START0_ST   :   TX_DATA_O <= 0;
            D0_ST   :   TX_DATA_O <= tx_data[0];
            D1_ST   :   TX_DATA_O <= tx_data[1];
            D2_ST   :   TX_DATA_O <= tx_data[2];
            D3_ST   :   TX_DATA_O <= tx_data[3];
            D4_ST   :   TX_DATA_O <= tx_data[4];
            D5_ST   :   TX_DATA_O <= tx_data[5];
            D6_ST   :   TX_DATA_O <= tx_data[6];
            D7_ST   :   TX_DATA_O <= tx_data[7];
            STOP0_ST   :   TX_DATA_O <= 1;
            IDLE1_ST   :   TX_DATA_O <= 1;
            START1_ST   :   TX_DATA_O <= 0;
            D8_ST   :   TX_DATA_O <= tx_data[8];
            D9_ST   :   TX_DATA_O <= tx_data[9];
            D10_ST   :   TX_DATA_O <= tx_data[10];
            D11_ST   :   TX_DATA_O <= tx_data[11];
            D12_ST   :   TX_DATA_O <= tx_data[12];
            D13_ST   :   TX_DATA_O <= tx_data[13];
            D14_ST   :   TX_DATA_O <= tx_data[14];
            D15_ST   :   TX_DATA_O <= tx_data[15];
            STOP1_ST   :   TX_DATA_O <= 1;
            IDLE2_ST   :   TX_DATA_O <= 1;
            START2_ST   :   TX_DATA_O <= 0;
            D16_ST   :   TX_DATA_O <= tx_data[16];
            D17_ST   :   TX_DATA_O <= tx_data[17];
            D18_ST   :   TX_DATA_O <= tx_data[18];
            D19_ST   :   TX_DATA_O <= tx_data[19];
            D20_ST   :   TX_DATA_O <= tx_data[20];
            D21_ST   :   TX_DATA_O <= tx_data[21];
            D22_ST   :   TX_DATA_O <= tx_data[22];
            D23_ST   :   TX_DATA_O <= tx_data[23];
            STOP2_ST   :   TX_DATA_O <= 1;
            IDLE3_ST   :   TX_DATA_O <= 1;
            START3_ST   :   TX_DATA_O <= 0;
            D24_ST   :   TX_DATA_O <= tx_data[24];
            D25_ST   :   TX_DATA_O <= tx_data[25];
            D26_ST   :   TX_DATA_O <= tx_data[26];
            D27_ST   :   TX_DATA_O <= tx_data[27];
            D28_ST   :   TX_DATA_O <= tx_data[28];
            D29_ST   :   TX_DATA_O <= tx_data[29];
            D30_ST   :   TX_DATA_O <= tx_data[30];
            D31_ST   :   TX_DATA_O <= tx_data[31];
            STOP3_ST   :   TX_DATA_O <= 1;
            IDLE4_ST   :   TX_DATA_O <= 1;
            START4_ST   :   TX_DATA_O <= 0;
            D32_ST   :   TX_DATA_O <= tx_data[32];
            D33_ST   :   TX_DATA_O <= tx_data[33];
            D34_ST   :   TX_DATA_O <= tx_data[34];
            D35_ST   :   TX_DATA_O <= tx_data[35];
            D36_ST   :   TX_DATA_O <= tx_data[36];
            D37_ST   :   TX_DATA_O <= tx_data[37];
            D38_ST   :   TX_DATA_O <= tx_data[38];
            D39_ST   :   TX_DATA_O <= tx_data[39];
            STOP4_ST   :   TX_DATA_O <= 1;
            IDLE5_ST   :   TX_DATA_O <= 1;
            START5_ST   :   TX_DATA_O <= 0;
            D40_ST   :   TX_DATA_O <= tx_data[40];
            D41_ST   :   TX_DATA_O <= tx_data[41];
            D42_ST   :   TX_DATA_O <= tx_data[42];
            D43_ST   :   TX_DATA_O <= tx_data[43];
            D44_ST   :   TX_DATA_O <= tx_data[44];
            D45_ST   :   TX_DATA_O <= tx_data[45];
            D46_ST   :   TX_DATA_O <= tx_data[46];
            D47_ST   :   TX_DATA_O <= tx_data[47];
            STOP5_ST   :   TX_DATA_O <= 1;
            IDLE6_ST   :   TX_DATA_O <= 1;
            START6_ST   :   TX_DATA_O <= 0;
            D48_ST   :   TX_DATA_O <= tx_data[48];
            D49_ST   :   TX_DATA_O <= tx_data[49];
            D50_ST   :   TX_DATA_O <= tx_data[50];
            D51_ST   :   TX_DATA_O <= tx_data[51];
            D52_ST   :   TX_DATA_O <= tx_data[52];
            D53_ST   :   TX_DATA_O <= tx_data[53];
            D54_ST   :   TX_DATA_O <= tx_data[54];
            D55_ST   :   TX_DATA_O <= tx_data[55];
            STOP6_ST   :   TX_DATA_O <= 1;
            IDLE7_ST   :   TX_DATA_O <= 1;
            START7_ST   :   TX_DATA_O <= 0;
            D56_ST   :   TX_DATA_O <= tx_data[56];
            D57_ST   :   TX_DATA_O <= tx_data[57];
            D58_ST   :   TX_DATA_O <= tx_data[58];
            D59_ST   :   TX_DATA_O <= tx_data[59];
            D60_ST   :   TX_DATA_O <= tx_data[60];
            D61_ST   :   TX_DATA_O <= tx_data[61];
            D62_ST   :   TX_DATA_O <= tx_data[62];
            D63_ST   :   TX_DATA_O <= tx_data[63];
            STOP7_ST   :   TX_DATA_O <= 1;
            IDLE8_ST   :   TX_DATA_O <= 1;
            START8_ST   :   TX_DATA_O <= 0;
            D64_ST   :   TX_DATA_O <= tx_data[64];
            D65_ST   :   TX_DATA_O <= tx_data[65];
            D66_ST   :   TX_DATA_O <= tx_data[66];
            D67_ST   :   TX_DATA_O <= tx_data[67];
            D68_ST   :   TX_DATA_O <= tx_data[68];
            D69_ST   :   TX_DATA_O <= tx_data[69];
            D70_ST   :   TX_DATA_O <= tx_data[70];
            D71_ST   :   TX_DATA_O <= tx_data[71];
            STOP8_ST   :   TX_DATA_O <= 1;
            IDLE9_ST   :   TX_DATA_O <= 1;
            START9_ST   :   TX_DATA_O <= 0;
            D72_ST   :   TX_DATA_O <= tx_data[72];
            D73_ST   :   TX_DATA_O <= tx_data[73];
            D74_ST   :   TX_DATA_O <= tx_data[74];
            D75_ST   :   TX_DATA_O <= tx_data[75];
            D76_ST   :   TX_DATA_O <= tx_data[76];
            D77_ST   :   TX_DATA_O <= tx_data[77];
            D78_ST   :   TX_DATA_O <= tx_data[78];
            D79_ST   :   TX_DATA_O <= tx_data[79];
            STOP9_ST   :   TX_DATA_O <= 1;
            IDLE10_ST   :   TX_DATA_O <= 1;
            START10_ST   :   TX_DATA_O <= 0;
            D80_ST   :   TX_DATA_O <= tx_data[80];
            D81_ST   :   TX_DATA_O <= tx_data[81];
            D82_ST   :   TX_DATA_O <= tx_data[82];
            D83_ST   :   TX_DATA_O <= tx_data[83];
            D84_ST   :   TX_DATA_O <= tx_data[84];
            D85_ST   :   TX_DATA_O <= tx_data[85];
            D86_ST   :   TX_DATA_O <= tx_data[86];
            D87_ST   :   TX_DATA_O <= tx_data[87];
            STOP10_ST   :   TX_DATA_O <= 1;
            IDLE11_ST   :   TX_DATA_O <= 1;
            START11_ST   :   TX_DATA_O <= 0;
            D88_ST   :   TX_DATA_O <= tx_data[88];
            D89_ST   :   TX_DATA_O <= tx_data[89];
            D90_ST   :   TX_DATA_O <= tx_data[90];
            D91_ST   :   TX_DATA_O <= tx_data[91];
            D92_ST   :   TX_DATA_O <= tx_data[92];
            D93_ST   :   TX_DATA_O <= tx_data[93];
            D94_ST   :   TX_DATA_O <= tx_data[94];
            D95_ST   :   TX_DATA_O <= tx_data[95];
            STOP11_ST:   TX_DATA_O <= 1;
            default: TX_DATA_O <= 1;
        endcase
    end
endmodule