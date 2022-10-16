`define DEBUG
/*
    FP32_MAC
*/
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
        input [31:0] full_precision_i, // 8'h55
        output reg uart_tx_o
    );
		
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

`define DEBUG
/*
    FP32_MAC
*/
module leading_1_detector_48bit
    (
        input wire  [47:0]  tmp,
        output reg  [7:0]   ret
    );
    always_comb begin
        if(tmp[47]) begin
            ret = 8'd47;
        end
        else if(tmp[46]) begin
        ret = 8'd46;
        end
        else if(tmp[45]) begin
        ret = 8'd45;
        end
        else if(tmp[44]) begin
        ret = 8'd44;
        end
        else if(tmp[43]) begin
        ret = 8'd43;
        end
        else if(tmp[42]) begin
        ret = 8'd42;
        end
        else if(tmp[41]) begin
        ret = 8'd41;
        end
        else if(tmp[40]) begin
        ret = 8'd40;
        end
        else if(tmp[39]) begin
        ret = 8'd39;
        end
        else if(tmp[38]) begin
        ret = 8'd38;
        end
        else if(tmp[37]) begin
        ret = 8'd37;
        end
        else if(tmp[36]) begin
        ret = 8'd36;
        end
        else if(tmp[35]) begin
        ret = 8'd35;
        end
        else if(tmp[34]) begin
        ret = 8'd34;
        end
        else if(tmp[33]) begin
        ret = 8'd33;
        end
        else if(tmp[32]) begin
        ret = 8'd32;
        end
        else if(tmp[31]) begin
        ret = 8'd31;
        end
        else if(tmp[30]) begin
        ret = 8'd30;
        end
        else if(tmp[29]) begin
        ret = 8'd29;
        end
        else if(tmp[28]) begin
        ret = 8'd28;
        end
        else if(tmp[27]) begin
        ret = 8'd27;
        end
        else if(tmp[26]) begin
        ret = 8'd26;
        end
        else if(tmp[25]) begin
        ret = 8'd25;
        end
        else if(tmp[24]) begin
        ret = 8'd24;
        end
        else if(tmp[23]) begin
        ret = 8'd23;
        end
        else if(tmp[22]) begin
        ret = 8'd22;
        end
        else if(tmp[21]) begin
        ret = 8'd21;
        end
        else if(tmp[20]) begin
        ret = 8'd20;
        end
        else if(tmp[19]) begin
        ret = 8'd19;
        end
        else if(tmp[18]) begin
        ret = 8'd18;
        end
        else if(tmp[17]) begin
        ret = 8'd17;
        end
        else if(tmp[16]) begin
        ret = 8'd16;
        end
        else if(tmp[15]) begin
        ret = 8'd15;
        end
        else if(tmp[14]) begin
        ret = 8'd14;
        end
        else if(tmp[13]) begin
        ret = 8'd13;
        end
        else if(tmp[12]) begin
        ret = 8'd12;
        end
        else if(tmp[11]) begin
        ret = 8'd11;
        end
        else if(tmp[10]) begin
        ret = 8'd10;
        end
        else if(tmp[9]) begin
        ret = 8'd9;
        end
        else if(tmp[8]) begin
        ret = 8'd8;
        end
        else if(tmp[7]) begin
        ret = 8'd7;
        end
        else if(tmp[6]) begin
        ret = 8'd6;
        end
        else if(tmp[5]) begin
        ret = 8'd5;
        end
        else if(tmp[4]) begin
        ret = 8'd4;
        end
        else if(tmp[3]) begin
        ret = 8'd3;
        end
        else if(tmp[2]) begin
        ret = 8'd2;
        end
        else if(tmp[1]) begin
        ret = 8'd1;
        end
        else if(tmp[0]) begin
        ret = 8'd0;
        end
        else begin
        ret = 8'd0;
        end
    end
endmodule

module FP32_Multiplier_Combinatorial
    (
        input wire [31:0] alpha,
        input wire [31:0] bravo,
        output reg [31:0] delta
        // VALID, READY handshake 는 어떻게 구현?
    );

    /*
        IEEE 754 Floating Point
        1 Bit | 8 Bit | 23 Bit
    */

    /**************** Get Larger Exponent ***************/
    // 기본적으로, EA 및 EB는 unsigned 취급.
    wire [7:0]   EA_Original, EB_Original, EA, EB, Larger_E;
    wire [7:0]   EA_minus_EB, EB_minus_EA, Right_Shift; // Minus Doesn't make OVFL
    wire [8:0]   EA_plus_EB, EA_plus_EB_minus_254; // plus make OVFL
    wire         EA0, EB0, EA1, EB1, E_LeftBig, E_RightBig, E_Equal;

    assign EA_Original = alpha[30:23];
    assign EB_Original = bravo[30:23];

    assign EA0 = ((EA_Original == 8'd0) ? 1'b1 : 1'b0);
    assign EB0 = ((EB_Original == 8'd0) ? 1'b1 : 1'b0);
    assign EA1 = ((EA_Original == 8'hFF) ? 1'b1 : 1'b0);
    assign EB1 = ((EB_Original == 8'hFF) ? 1'b1 : 1'b0);

    assign EA_minus_EB = EA_Original - EB_Original;
    assign EB_minus_EA = EB_Original - EA_Original;

    assign E_RightBig = ((EA_Original < EB_Original) ? 1'b1 : 1'b0);
    assign E_LeftBig = ((EA_Original > EB_Original) ? 1'b1 : 1'b0);
    assign E_Equal = !(E_RightBig | E_LeftBig);

    assign Larger_E = ((E_LeftBig) ? EA_Original : EB_Original);
    assign Right_Shift = ((E_LeftBig) ? EA_minus_EB : EB_minus_EA) - {7'd0 , (EA0 ^ EB0)};

    assign EA = EA_Original + {7'd0 ,EA0};
    assign EB = EB_Original + {7'd0, EB0};

    assign EA_plus_EB = EA + EB;

    /********************** Get Sign ************************/
    wire SA, SB, final_sign;
    assign SA = alpha[31];
    assign SB = bravo[31];
    assign final_sign = SA ^ SB;
    /**********************　　　Setting Up Multiply Mantissa　　　　****************************/

    wire    [22:0]   MA, MB; // Hidden 1 없음에 유의
    wire    [23:0]   isDenorm1, isDenorm2, isDenorm3, isDenorm4, Denorm1, Denorm2;
    wire             M_RightBig, M_LeftBig, M_Equal, MA0, MB0;

    assign MA = alpha[22:0];
    assign MB = bravo[22:0];
    assign M_LeftBig = MA > MB;
    assign M_RightBig = MA < MB;
    assign M_Equal = (MA == MB);

    assign MA0 = ((MA==23'd0) ? 1'b1 : 1'b0); 
    assign MB0 = ((MB==23'd0) ? 1'b1 : 1'b0);
    assign isDenorm1 = {~EA0, MA};
    assign isDenorm2 = {1'b0, MA};
    assign isDenorm3 = {~EB0, MB};
    assign isDenorm4 = {1'b0, MB};
    assign Denorm1 = ((EA0&&(!MA0)) ? isDenorm2 : isDenorm1);
    assign Denorm2 = ((EB0&&(!MB0)) ? isDenorm4 : isDenorm3);

    /******************************** Multiply Mantissa ******************************/
    wire            [47:0]  M_48_Original;
    wire            [7:0]   leading_1_position;
    wire            [7:0]   Until_46th, Until_126, Maximum_Exp_Cost;
    wire            [8:0]   E, Exp;
    wire                    Until_126_Carry, Maximum_Exp_Cost_Carry;

    assign M_48_Original = Denorm1 * Denorm2; // reg, wire는 기본적으로 unsigned이다.
    leading_1_detector_48bit leading_1_detector_48bit_1(
        .tmp(M_48_Original),
        .ret(leading_1_position)
    );

    // assign E    = EA_plus_EB - 9'd254; // SIGNED 관련 오류 뜰 가능성 농후
    // assign Exp  = EA_plus_EB - 9'd127;

    assign Until_46th = 8'd46 - leading_1_position;
    assign {Until_126_Carry, Until_126} = -(EA_plus_EB) + 9'd128; // -9'd126 - (EA + EB - 9'd254);

    wire        [47:0]  Man1, Man2, Man3, Man4, Man5_tmp, Man5_cei, Man5_ce, Man5, Man3_tmp;
    wire        [7:0]   Exp1, Exp2, Exp3, Exp4, Exp5;
    reg         [47:0]  final_Man;
    reg         [7:0]   final_Exp;
    reg                 final_Exp_Carry;
    wire                Exp1_C, Exp2_C, Exp3_C, Exp4_C, Exp5_C;

    assign Man1 = M_48_Original;

    assign Man2 = M_48_Original>>1;
    assign Man3_tmp = M_48_Original>>Until_126; // Until 126, Until 46은 모두 음수가 가능한 수다!!!
    /*
        Man3 = M_48_Original>>Until_126;
        if(Until_126 > 48) Man3 = 0x00;
    */
    assign Man3 = (Until_126_Carry ? M_48_Original : Man3_tmp);
        // if(Until_126 > 48) Man3 = 0x00;
    assign Man4 = M_48_Original<<Until_46th;
    assign Man5_tmp = M_48_Original<<Until_46th;
        // int Maximum_Exp_Cost = leading_1_detector_48bit(Man5);
    // assign Maximum_Exp_Cost = -126 - (Exp - Until_46th);
    assign {Maximum_Exp_Cost_Carry, Maximum_Exp_Cost} = (EA_plus_EB) - 9'd128;
    assign Man5_cei = (Until_46th >= (Maximum_Exp_Cost + 8'd48)) ? 48'd0 : (Man5_tmp >> (Until_46th - Maximum_Exp_Cost));
    assign Man5_ce = Man5_tmp >> (EA_plus_EB - 9'd127);
    assign Man5 = (Until_46th >= Maximum_Exp_Cost) ? Man5_cei : Man5_ce;
    
    assign {Exp1_C,Exp1} = (EA_plus_EB - 9'd127);
    assign {Exp2_C,Exp2} = EA_plus_EB - 9'd127 + 9'd1;
    assign {Exp3_C,Exp3} = 0;
    assign {Exp4_C,Exp4} = 1;
    assign {Exp5_C,Exp5} = EA_plus_EB - 9'd127 - Until_46th;

    `ifdef DEBUG
    reg [7:0]   DEBUG_FINAL_MAN = 8'd0;
    reg [7:0]   DEBUG_FINAL_EXP = 8'd0;
    `endif
    
    reg DEBUG_ELB, DEBUG_ERB, DEBUG_EEQ;
    always_comb begin
        DEBUG_ELB       =   (EA_plus_EB > 9'd128);
        DEBUG_ERB       =   (EA_plus_EB < 9'd128); // EA + EB - 9'd128 < 0
        DEBUG_EEQ       =   ~(DEBUG_ELB ^ DEBUG_ERB); // E == -126, ELB ^ EEQ 해도 됨.
    end
    // ******************************************** final_Man Setter *****************************/
    always_comb begin
        if(DEBUG_ELB) begin
            if(leading_1_position == 8'd47) begin // a
                final_Man = Man2;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd1;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // b
                final_Man = Man1;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd2;
                `endif
            end 
            else begin // c
                if(EA_plus_EB < Until_46th + 9'd128) begin // c-e-i
                    final_Man = Man5;
                    `ifdef DEBUG
                    DEBUG_FINAL_MAN = 8'd3;
                    `endif
                end
                else begin // c-b or c-h
                    final_Man = Man4; 
                    `ifdef DEBUG
                    DEBUG_FINAL_MAN = 8'd4;
                    `endif
                end
            end
        end
        else if(DEBUG_ERB) begin
            if(leading_1_position == 8'd47) begin // d
                final_Man = Man3;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd5;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // e
                final_Man = Man3;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd6;
                `endif
            end
            else begin // f
                final_Man = Man3;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd7;
                `endif
            end
        end
        else begin// Equal
            if(leading_1_position == 8'd47) begin // g
                final_Man = Man2;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd8;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // h
                final_Man = Man1;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'd9;
                `endif
            end
            else begin // i
                final_Man = Man1;
                `ifdef DEBUG
                DEBUG_FINAL_MAN = 8'hA;
                `endif
            end
        end
    end

    // ******************************************** final_Exp Setter *****************************/
    always_comb begin
        if(DEBUG_ELB) begin
            if(leading_1_position == 8'd47) begin // a
                final_Exp = Exp2;
                final_Exp_Carry = Exp2_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd1;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // b
                final_Exp = Exp1;
                final_Exp_Carry = Exp1_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd2;
                `endif
            end
            else begin // c
                if(EA_plus_EB > Until_46th + 9'd128) begin // c-b
                    final_Exp = Exp5;
                    final_Exp_Carry = Exp5_C;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd3;
                    `endif
                end
                else if(EA_plus_EB == Until_46th + 9'd128) begin // c-h
                    final_Exp = Exp4;
                    final_Exp_Carry = Exp4_C;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd4;
                    `endif
                end
                else begin // c-e-i
                    final_Exp = Exp3;
                    final_Exp_Carry = Exp3_C;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd5;
                    `endif
                end
            end
        end
        else if(DEBUG_ERB) begin
            if(leading_1_position == 8'd47) begin // d
                if(Until_126 == 1) begin // d-h
                    final_Exp = Exp4;
                    final_Exp_Carry = Exp4_C;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd6;
                    `endif
                end
                else begin // d-i
                    final_Exp = Exp3;
                    final_Exp_Carry = Exp3_C;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd7;
                    `endif
                end
                
            end
            else if(leading_1_position == 8'd46) begin // e
                final_Exp = Exp3;
                final_Exp_Carry = Exp3_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd8;
                `endif
            end
            else begin // f
                final_Exp = Exp3;
                final_Exp_Carry = Exp3_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd9;
                `endif
            end
        end
        else begin// Equal
            if(leading_1_position == 8'd47) begin // g
                final_Exp = Exp2;
                final_Exp_Carry = Exp2_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'hA;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // h
                final_Exp = Exp1;
                final_Exp_Carry = Exp1_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'hB;
                `endif
            end
            else begin // i
                final_Exp = Exp3;
                final_Exp_Carry = Exp3_C;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'hC;
                `endif
            end
        end
    end
    
    // ******************************************** Renormalizer *****************************/
    wire    [47:0]  M_48_46th_Hidden, M_48_46th_Hidden_RSh23, M_48_46th_Hidden_RSh23_plus_1, M_48_46th_Hidden_RSh23_plus_1_RSh1;
    wire            G, R, S;
    assign  M_48_46th_Hidden = {2'b00, final_Man[45:0] };
    assign  G = M_48_46th_Hidden[23];
    assign  R = M_48_46th_Hidden[22];
    assign  S = (M_48_46th_Hidden[21:0] == 22'd0) ? 1'b0 : 1'b1;

    assign M_48_46th_Hidden_RSh23 = M_48_46th_Hidden >> 48'd23;
    assign M_48_46th_Hidden_RSh23_plus_1 = M_48_46th_Hidden_RSh23 + 48'd1;
    assign M_48_46th_Hidden_RSh23_plus_1_RSh1 = M_48_46th_Hidden_RSh23_plus_1 >> 48'd1;

    wire    [8:0]   final_Exp_plus1;
    assign  final_Exp_plus1 = final_Exp + 8'd1;
    
    reg     [22:0]  delta_mantissa;
    reg     [7:0]   delta_exp;

    wire            NAN, OVFL;
    assign  NAN     = ((EA == 8'hFF && MA != 23'd0) || (EB == 8'hFF && MB != 23'd0)) ? 1'b1 : 1'b0;
    assign OVFL     = ({final_Exp_Carry, final_Exp} > 9'd254) ? 1 : 0;

    always_comb begin
        if((R & S) | (G & R & (~S))) begin
            if(M_48_46th_Hidden_RSh23_plus_1[23]) begin
                delta_mantissa = M_48_46th_Hidden_RSh23_plus_1_RSh1[22:0];
                delta_exp = final_Exp_plus1[7:0];
            end
            else begin
                delta_mantissa = M_48_46th_Hidden_RSh23_plus_1[22:0];
                delta_exp = final_Exp[7:0];
            end
        end
        else begin
            delta_mantissa = M_48_46th_Hidden_RSh23[22:0];
            delta_exp = final_Exp[7:0];
        end
    end


    always_comb begin
        delta[31] = final_sign;
        if(NAN) begin
            delta[30:23]    =   8'hFF;
            delta[22:0]     =   23'h7FFFFF;
        end
        else if(OVFL) begin
            delta[30:23]    =   8'hFF;
            delta[22:0]     =   23'd0;
        end
        else begin
            delta[30:23]    =   delta_exp;
            delta[22:0]     =   delta_mantissa;
        end
    end
endmodule

module leading_1_detector_23bit
    (
        input   wire    [24:0]  tmp,
        output  reg     [7:0]  ret
    );
    always_comb begin
        if(tmp[23]) begin
            ret = 8'd0;
        end
        else if(tmp[22]) begin
            ret = 8'd1;
        end
        else if(tmp[21]) begin
            ret = 8'd2;
        end
        else if(tmp[20]) begin
            ret = 8'd3;
        end
        else if(tmp[19]) begin
            ret = 8'd4;
        end
        else if(tmp[18]) begin
            ret = 8'd5;
        end
        else if(tmp[17]) begin
            ret = 8'd6;
        end
        else if(tmp[16]) begin
            ret = 8'd7;
        end
        else if(tmp[15]) begin
            ret = 8'd8;
        end
        else if(tmp[14]) begin
            ret = 8'd9;
        end
        else if(tmp[13]) begin
            ret = 8'd10;
        end
        else if(tmp[12]) begin
            ret = 8'd11;
        end
        else if(tmp[11]) begin
            ret = 8'd12;
        end
        else if(tmp[10]) begin
            ret = 8'd13;
        end
        else if(tmp[9]) begin
            ret = 8'd14;
        end
        else if(tmp[8]) begin
            ret = 8'd15;
        end
        else if(tmp[7]) begin
            ret = 8'd16;
        end
        else if(tmp[6]) begin
            ret = 8'd17;
        end
        else if(tmp[5]) begin
            ret = 8'd18;
        end
        else if(tmp[4]) begin
            ret = 8'd19;
        end
        else if(tmp[3]) begin
            ret = 8'd20;
        end
        else if(tmp[2]) begin
            ret = 8'd21;
        end
        else if(tmp[1]) begin
            ret = 8'd22;
        end
        else if(tmp[0]) begin
            ret = 8'd23;
        end
        else begin
            ret = 8'd23;
        end
    end
endmodule

module FP32_Adder_Combinatorial
    (
        input   wire    [31:0]  alpha,
        input   wire    [31:0]  bravo,
        output  reg     [31:0]  delta
    );

    /**************** Get Larger Exponent ***************/
    // 기본적으로, EA 및 EB는 unsigned 취급.
    wire [7:0]   EA_Original, EB_Original, EA, EB, Larger_E;
    wire [7:0]   EA_minus_EB, EB_minus_EA, Valid_Minus, Right_Shift; // Minus Doesn't make OVFL
    wire         EA_minus_EB_Carry, EB_minus_EA_Carry;
    wire [8:0]   EA_plus_EB, EA_plus_EB_minus_254; // plus make OVFL
    wire         EA0, EB0, EA1, EB1, E_LeftBig, E_RightBig, E_Equal;

    assign EA_Original = alpha[30:23];
    assign EB_Original = bravo[30:23];

    assign EA0 = ((EA_Original == 8'd0) ? 1'b1 : 1'b0);
    assign EB0 = ((EB_Original == 8'd0) ? 1'b1 : 1'b0);
    assign EA1 = ((EA_Original == 8'hFF) ? 1'b1 : 1'b0);
    assign EB1 = ((EB_Original == 8'hFF) ? 1'b1 : 1'b0);

    assign EA_minus_EB = EA_Original - EB_Original; // 어차피 E_RightBig LeftBig 으로 양수의 minus 값만 추출할거라 상관없음.
    assign EB_minus_EA = EB_Original - EA_Original; 

    assign E_RightBig = ((EA_Original < EB_Original) ? 1'b1 : 1'b0);
    assign E_LeftBig = ((EA_Original > EB_Original) ? 1'b1 : 1'b0);
    assign E_Equal = !(E_RightBig | E_LeftBig);

    assign Larger_E = ((E_LeftBig) ? EA_Original : EB_Original);
    assign Valid_Minus = (E_LeftBig) ? EA_minus_EB : EB_minus_EA;
    assign Right_Shift = Valid_Minus - ({7'd0 , (EA0 ^ EB0)});

    // assign EA = EA_Original + {7'd0 ,EA0};
    // assign EB = EB_Original + {7'd0, EB0};
    assign EA = EA_Original;
    assign EB = EB_Original;

    // assign EA_plus_EB = EA + EB;

    /********************** Setting Up Sign ************************************/
    wire             SA, SB;
    assign SA = alpha[31];
    assign SB = bravo[31];

    /**********************　　　Setting Up Mantissa　　　　****************************/

    wire    [22:0]   MA, MB; // Hidden 1 없음에 유의
    wire    [23:0]   isDenorm1, isDenorm2, isDenorm3, isDenorm4, Denorm1, Denorm2;
    wire             M_RightBig, M_LeftBig, M_Equal, MA0, MB0;

    assign MA = alpha[22:0];
    assign MB = bravo[22:0];
    assign M_LeftBig = MA > MB;
    assign M_RightBig = MA < MB;
    assign M_Equal = (MA == MB);

    assign MA0 = ((MA==23'd0) ? 1'b1 : 1'b0); 
    assign MB0 = ((MB==23'd0) ? 1'b1 : 1'b0);
    assign isDenorm1 = {~EA0, MA};
    assign isDenorm2 = {1'b0, MA};
    assign isDenorm3 = {~EB0, MB};
    assign isDenorm4 = {1'b0, MB};
    assign Denorm1 = ((EA0&&(!MA0)) ? isDenorm2 : isDenorm1);
    assign Denorm2 = ((EB0&&(!MB0)) ? isDenorm4 : isDenorm3);

    /*********************** Add Mantissa ******************************/
    reg     [23:0]      small_E_Mantissa, large_E_Mantissa;
    wire    [23:0]      small_E_Mantissa2, small_E_Mantissa3, small_E_Mantissa4, small_E_mantissa5;
    wire    [24:0]      added_Mantissa;

    always_comb begin
        if(E_LeftBig | (E_Equal & M_LeftBig)) begin
            small_E_Mantissa = Denorm2;
            large_E_Mantissa = Denorm1;
        end
        else begin
            small_E_Mantissa = Denorm1;
            large_E_Mantissa = Denorm2;
        end
    end
    
    assign small_E_Mantissa2 = ((EA1 || EB1) ?  24'hFFFFFF : small_E_Mantissa);
    assign small_E_Mantissa3 = small_E_Mantissa2 >> Right_Shift;

    assign small_E_Mantissa4 = ((SA ^ SB) ? (~small_E_Mantissa3) : small_E_Mantissa3);
    assign small_E_mantissa5 = {22'd0,(SA ^ SB)} + small_E_Mantissa4;
    assign added_Mantissa =  small_E_mantissa5 + large_E_Mantissa;

    /***************************************** Renormalization *****************************************/

    reg     [7:0]    leading_1_position;
    leading_1_detector_23bit leading_1_detector_23bit_1 (
        .tmp(added_Mantissa),
        .ret(leading_1_position)
    );
    
    wire        mantissa_24th, mantissa_23rd, mantissa_22nd;
    wire    [24:0]  adder_output, right_frac_tmp;
    wire    [24:0]  lefted_frac, lefted_frac_righted;

    wire    [22:0]  frac, righted_frac;
    wire    [22:0]  lefted_frac_truncated, lefted_frac_righted_truncated;
    wire    [7:0]   left_shifting;

    assign mantissa_24th    = added_Mantissa[24];
    assign mantissa_23rd    = added_Mantissa[23];
    assign mantissa_22nd    = added_Mantissa[22];

    assign adder_output     = added_Mantissa;
    assign right_frac_tmp   = adder_output>>25'd1;
    assign righted_frac     = right_frac_tmp[22:0];

    assign frac             = adder_output[22:0];

    assign left_shifting    = (Larger_E < leading_1_position) ? Larger_E : leading_1_position;
    assign lefted_frac                          = adder_output << left_shifting;
    assign lefted_frac_righted                  = lefted_frac>>1;

    assign lefted_frac_truncated                = lefted_frac[22:0];
    assign lefted_frac_righted_truncated        = lefted_frac_righted[22:0];
    
    wire        G, R, S;
    reg     [23:0]      R_mask;
    always_comb begin
        R_mask = 24'd1<<(Right_Shift-8'd1);
    end
    // assign R = ((small_E_Mantissa2 & R_mask) ? 0 : 1);
    // assign S = 
    // assign G = final_mantissa[0];

    wire final_sign;
    reg [7:0] final_exponent;
    reg [22:0] final_mantissa;
    assign final_sign = (E_LeftBig | (E_Equal & M_LeftBig)) ? SA : SB;

    `ifdef DEBUG
    reg [7:0]   DEBUG_FINAL_MAN = 8'd0;
    reg [7:0]   DEBUG_FINAL_EXP = 8'd0;
    `endif

    always_comb begin
        if((SA==SB) & mantissa_24th) begin // 같은 부호 더했는데 24째에 1이면, mantissa 우시프트
            final_exponent = Larger_E + 8'd1;
            `ifdef DEBUG
            DEBUG_FINAL_EXP = 8'd1;
            `endif
        end
        else if(mantissa_23rd) begin // 같은 부호 더했는데 24째는 0, 23째는 1이면 그대로
            if(Larger_E == 0) final_exponent = 8'd1;
            else final_exponent = Larger_E;
            `ifdef DEBUG
            DEBUG_FINAL_EXP = 8'd2;
            `endif
        end
        else if(Larger_E == leading_1_position) begin // 23th 24th 모두 0이면, leading 1을 23째까지 좌시프트해야함.
            final_exponent = 8'd1; // OVERFLOW 예방. e.g. final_exp = (0x00 - 0d10)
            `ifdef DEBUG
            DEBUG_FINAL_EXP = 8'd3;
            `endif
        end
        else if(Larger_E > leading_1_position) begin
            final_exponent = (Larger_E - leading_1_position);
            `ifdef DEBUG
            DEBUG_FINAL_EXP = 8'd4;
            `endif
        end
        else begin // 조건 몰?루
            final_exponent = 8'd0;
            `ifdef DEBUG
            DEBUG_FINAL_EXP = 8'd5;
            `endif
        end
    end
    always_comb begin
        if((SA == SB) & (final_exponent != 8'd0) & mantissa_24th) begin // 덧셈에 24th 살아있으면, mantissa 우측으로 제껴야 함
            // assign S = R || S;
            // assign R = frac & 0b01;
            final_mantissa = righted_frac;
            `ifdef DEBUG
            DEBUG_FINAL_MAN = 8'd1;
            `endif
        end
        else if(mantissa_23rd) begin // 24번 없고, 23번만 살아있으면 frac 그대로
            final_mantissa = frac;
            `ifdef DEBUG
            DEBUG_FINAL_MAN = 8'd2;
            `endif
        end
        else if((mantissa_24th == 1'b0) & (mantissa_23rd == 1'b0) & (final_exponent == 8'd0)) begin
            final_mantissa = lefted_frac_truncated;
            `ifdef DEBUG
            DEBUG_FINAL_MAN = 8'd3;
            `endif
        end
        else if((mantissa_24th == 1'b0) & (mantissa_23rd == 1'b0) & (final_exponent != 8'd0)) begin // subnorm이면, hidden 1 필요없다.
            final_mantissa = lefted_frac_truncated;
            `ifdef DEBUG
            DEBUG_FINAL_MAN = 8'd4;
            `endif
        end
        else begin
            final_mantissa = 23'd0;
            `ifdef DEBUG
            DEBUG_FINAL_MAN = 8'd5;
            `endif
        end
    end

    wire            NAN, OVFL;
    assign  NAN     = ((EA == 8'hFF && MA != 23'd0) || (EB == 8'hFF && MB != 23'd0)) ? 1'b1 : 1'b0;
    assign OVFL = ((SA == SB) && final_exponent == 8'hFF) ? 1'b1 : 1'b0;
    always_comb begin
        delta[31] = final_sign;
        if(NAN) begin
            delta[30:23]    =   8'hFF;
            delta[22:0]     =   23'h7FFFFF;
        end
        else if(OVFL) begin
            delta[30:23]    =   8'hFF;
            delta[22:0]     =   23'd0;
        end
        else begin
            delta[30:23] = final_exponent;
            delta[22:0] = final_mantissa;
        end
    end

endmodule

module FP32_MAC_Combinatorial_Tx
    (
        input   wire    clk_i,
        output  reg     delta_serial // BEC00000
//        output reg [31:0] delta_output
    );

    reg     [31:0]  alpha = 32'hBF000000; // -0.5
    reg     [31:0]  bravo = 32'h3F400000; // 0.75
    reg     [31:0]  acc = 32'h00000000; // 0

    wire     [31:0]  middle_delta;
    reg     [31:0]  delta;
    
//    always_comb begin
//        delta_output = delta;
//    end

    FP32_Multiplier_Combinatorial My_Multiplier
    (
        .alpha(alpha),
        .bravo(bravo),
        .delta(middle_delta)
    );

    FP32_Adder_Combinatorial My_Adder
    (
        .alpha(middle_delta),
        .bravo(acc),
        .delta(delta)
    );

    fp32_uart_tx My_UART_Tx
    (
        .clk_i(clk_i),
        .full_precision_i(delta),
        .uart_tx_o(delta_serial)
    );

endmodule
