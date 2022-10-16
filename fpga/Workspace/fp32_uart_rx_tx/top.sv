

module fp32_uart_rx
    (
    input            RSTL_I,
    input            CLK_I,
    input            UART_RX_I,
    input            Mac_READY_I,
    output reg       RX_VALID_O,
    output reg [95:0] RX_DATA_O // TYPE "AAAA BBBB CCCC"
    );
    
    localparam IDLE         = 3'b000;
    localparam START = 3'b001;
    localparam DATA = 3'b010;
    localparam STOP  = 3'b011;
    localparam MORE      = 3'b100;
    
    reg [31:0] clk_cnt;
    reg [2:0] rx_state;

    // we should receive 4 * 3, total 12 Byte
    // we get 1 Byte per iteration THUS need 12 ITERATION
    // total_index = received_byte * 8 + idx
    reg [7:0] received_byte;
    reg [7:0] received_bit;
    wire [7:0] total_index;
    assign total_index = received_byte * 8 + received_bit;

    // Purpose: Control RX state machine
    always @(posedge CLK_I or negedge RSTL_I) begin
    if (~RSTL_I) begin
        rx_state       = 3'b000;
        RX_VALID_O      = 1'b0;
        received_byte   = 8'b0;
        received_bit = 8'b0;
    end
    else begin
        case (rx_state)
        IDLE :
            begin
                RX_VALID_O  = 1'b1; // 내가 수정함
                clk_cnt     = 0;
                received_bit     = 0;
                if (UART_RX_I == 1'b0) begin // UART 가 0이면 즉시 START 로 이동
                    rx_state    = START;
                    RX_VALID_O  = 1'b0;
                end
                else begin
                    rx_state = IDLE;
                end
            end

        START :
            begin
                RX_VALID_O = 1'b0;
                if (clk_cnt == (443 / 2)) begin
                    if (UART_RX_I == 1'b0) begin
                        clk_cnt  = 0;  // START 진입 후 절반시점에, 여전히 UART 가 0이어야 DATA 로 진입
                        rx_state = DATA;
                        RX_VALID_O = 1'b0;
                    end
                    else begin
                        rx_state = IDLE; // ROLLBACK
                        RX_VALID_O = 1'b1; // 롤백이긴한데, 올려야겠지?
                    end
                end
                else begin
                    clk_cnt      = clk_cnt + 1;
                    rx_state     = START;
                end
            end
        DATA :
            begin
                RX_VALID_O = 1'b0;
                if (clk_cnt < 443) begin
                    clk_cnt     = clk_cnt + 1;
                    rx_state    = DATA;
                end
                else begin
                    clk_cnt                 = 0;
                    RX_DATA_O[total_index]  = UART_RX_I;
                    // Check if we have received all bits
                    if (received_bit < 7) begin // bit FULL
                        received_bit    = received_bit + 1;
                        rx_state   = DATA;
                    end
                    else begin // 자릿수 올리기
                        received_bit = 0;
                        if(received_byte < 11) begin
                            received_byte = received_byte + 1;
                            rx_state   = STOP;
                        end
                        else begin
                            received_byte = 0;
                            rx_state   = STOP;
                        end
                    end
                end
            end // case: DATA

        // Receive Stop bit.  Stop bit = 1
        STOP :
            begin
            RX_VALID_O = 1'b0;
            if (clk_cnt < 443)
            begin
                clk_cnt      = clk_cnt + 1;
                rx_state     = STOP;
                RX_VALID_O  = 1'b0;
            end
            else
            begin
                clk_cnt          = 0;
                rx_state         = MORE;
                RX_VALID_O       = 1'b1;
            end
            end // case: STOP

        // Stay here 1 clock
        MORE :
            begin
            RX_VALID_O  = 1'b0;
            rx_state    = IDLE;
            end
        default :
            begin
            rx_state = IDLE;   
            RX_VALID_O  = 1'b0;
            end 
        endcase
    end 
end
endmodule

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
        input RSTL_I,
        input CLK_I, // Assume 50MHz
        input TX_VALID_I,
        input [31:0] TX_DATA_I, // 8'h55
        output reg TX_DATA_O
    );

    /*
        원하는 것: TX_VALID가 HIGH 일 때 출력, TX_VALID는 LED로 확인
    */

    reg [7:0] tx_state = IDLE0_ST;
	reg [31:0] tx_data = 32'h4443_4241; // 8'h55
    reg [31:0] clk_cnt;

    reg tx_valid_before = 0;

    always @(posedge CLK_I or negedge RSTL_I) begin
        if(~RSTL_I) begin
            tx_state = IDLE0_ST;
            clk_cnt = 0;
            // tx_data = tx_data + 1;
            tx_data = 32'h4443_4241;
            tx_valid_before = 0;
        end
        else begin // 50MHz(20ns) to 115200 BR(8.68us)=>div_434
            case(tx_state)
                IDLE0_ST   :   begin // 천이조건이 유일하게 TX_VALID_I. 즉, clk_div sensitive 가 아니다.
                    if(TX_VALID_I & (~tx_valid_before)) begin // BTN1 PRESSED(==LOW)
                        clk_cnt = 0;
                        tx_state = START0_ST;
                    end
                    else begin
                        // clk_cnt = clk_cnt + 1;
                        tx_state = IDLE0_ST;
                    end
                end
                START0_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D0_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START0_ST;
                    end
                end
                D0_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D0_ST;
                    end
                end
                D1_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D1_ST;
                    end
                end
                D2_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D2_ST;
                    end
                end
                D3_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D4_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D3_ST;
                    end
                end
                D4_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D5_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D4_ST;
                    end
                end
                D5_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D6_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D5_ST;
                    end
                end
                D6_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D7_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D6_ST;
                    end
                end
                D7_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = STOP0_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D7_ST;
                    end
                end
                STOP0_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = IDLE1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP0_ST;
                    end
                end
                IDLE1_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = START1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE1_ST;
                    end
                end
                START1_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D8_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START1_ST;
                    end
                end
                D8_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D9_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D8_ST;
                    end
                end
                D9_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D10_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D9_ST;
                    end
                end
                D10_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D11_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D10_ST;
                    end
                end
                D11_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D12_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D11_ST;
                    end
                end
                D12_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D13_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D12_ST;
                    end
                end
                D13_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D14_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D13_ST;
                    end
                end
                D14_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D15_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D14_ST;
                    end
                end
                D15_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = STOP1_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D15_ST;
                    end
                end
                STOP1_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = IDLE2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP1_ST;
                    end
                end
                IDLE2_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = START2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE2_ST;
                    end
                end
                START2_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D16_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START2_ST;
                    end
                end
                D16_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D17_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D16_ST;
                    end
                end
                D17_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D18_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D17_ST;
                    end
                end
                D18_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D19_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D18_ST;
                    end
                end
                D19_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D20_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D19_ST;
                    end
                end
                D20_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D21_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D20_ST;
                    end
                end
                D21_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D22_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D21_ST;
                    end
                end
                D22_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D23_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D22_ST;
                    end
                end
                D23_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = STOP2_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D23_ST;
                    end
                end
                STOP2_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = IDLE3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = STOP2_ST;
                    end
                end
                IDLE3_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = START3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = IDLE3_ST;
                    end
                end
                START3_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D24_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = START3_ST;
                    end
                end
                D24_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D25_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D24_ST;
                    end
                end
                D25_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D26_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D25_ST;
                    end
                end
                D26_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D27_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D26_ST;
                    end
                end
                D27_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D28_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D27_ST;
                    end
                end
                D28_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D29_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D28_ST;
                    end
                end
                D29_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D30_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D29_ST;
                    end
                end
                D30_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = D31_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D30_ST;
                    end
                end
                D31_ST   :   begin
                    if(clk_cnt == 443) begin
                        clk_cnt = 0;
                        tx_state = STOP3_ST;
                    end
                    else begin
                        clk_cnt = clk_cnt + 1;
                        tx_state = D31_ST;
                    end
                end
                STOP3_ST   :   begin
                    if(clk_cnt == 443) begin
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
            tx_valid_before = TX_VALID_I;
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

module fp32_uart_rx_tx
    (
        input CLK_I,
        input RSTL_I,
        input UART_RX_I,
        output TX_DATA_O
    );
    
    wire RX_VALID_O;
    reg [95:0] data;

    fp32_uart_rx My_UART_Rx
    (
        .CLK_I(CLK_I),
        .RSTL_I(RSTL_I),
        .UART_RX_I(UART_RX_I),
        .Mac_READY_I(1'b1),
        .RX_VALID_O(RX_VALID_O),
        .RX_DATA_O(data)
    );

    fp32_uart_tx My_UART_Tx
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .TX_VALID_I(RX_VALID_O),
        .TX_DATA_I(data[31:0]),
        .TX_DATA_O(TX_DATA_O)
    );

endmodule