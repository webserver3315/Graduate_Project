`define DEBUG

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
        ret = 8'hFF;
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

    // 기본적으로, EA 및 EB는 unsigned 취급.
    wire [7:0]   EA_Original, EB_Original, EA, EB;
    wire signed [7:0]   Larger_E, EA_minus_EB, EB_minus_EA, Right_Shift;
    wire signed [8:0]   EA_plus_EB, EA_plus_EB_minus_254;
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

    assign EA_plus_EB = EA + EB; // 9Bit 해야 안전하지 않아? 맞겠지?
    assign EA_plus_EB_minus_254 = EA_plus_EB - 9'd254;

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
    wire signed     [7:0]   leading_1_position;
    wire signed     [7:0]   Until_46th;
    wire signed     [8:0]   E, Exp, Until_126, Until_126_2;

    assign M_48_Original = Denorm1 * Denorm2; // reg, wire는 기본적으로 unsigned이다.
    leading_1_detector_48bit leading_1_detector_48bit_1(
        .tmp(M_48_Original),
        .ret(leading_1_position)
    );

    assign E = EA_plus_EB_minus_254; // SIGNED 관련 오류 뜰 가능성 농후
    assign Exp = E + 9'd127;

    assign Until_46th = 8'd46 - leading_1_position;
    assign Until_126 = -9'd126 - E;

    wire        [47:0]  Man1, Man2, Man3, Man4, Man5_tmp, Man5, Man3_tmp;
    wire signed [8:0]   Exp1, Exp2, Exp3, Exp4, Exp5;
    reg         [47:0]  final_Man;
    reg         [8:0]   final_Exp;

    assign Man1 = M_48_Original;

    assign Man2 = M_48_Original>>1;
    assign Man3_tmp = M_48_Original>>Until_126; // Until 126, Until 46은 모두 음수가 가능한 수다!!!
    /*
        Man3 = M_48_Original>>Until_126;
        if(Until_126 > 48) Man3 = 0x00;
    */
    assign Man3 = (Until_126[8] ? M_48_Original : Man3_tmp);
        // if(Until_126 > 48) Man3 = 0x00;
    assign Man4 = M_48_Original<<Until_46th;
    assign Man5_tmp = M_48_Original<<Until_46th;
        // int Until_126_2 = leading_1_detector_48bit(Man5);
    assign Until_126_2 = -126 - (Exp - Until_46th);
    assign Man5 = (Until_126_2 > 9'd48) ? 48'd0 : (Man5_tmp >> Until_126_2);
    
    assign Exp1 = Exp;
    assign Exp2 = Exp + 1;
    assign Exp3 = 0;
    assign Exp4 = 1;
    assign Exp5 = Exp - Until_46th;

    `ifdef DEBUG
    reg [7:0]   DEBUG_FINAL_MAN = 8'd0;
    reg [7:0]   DEBUG_FINAL_EXP = 8'd0;
    `endif
    reg [8:0]   DEBUG_E_plus_126      =   E + 9'd126; 
    reg         DEBUG_ELB       =   ~DEBUG_E_plus_126[8]; // E > -126
    reg         DEBUG_ERB       =   DEBUG_E_plus_126[8]; // E < -126
    reg         DEBUG_EEQ       =   (DEBUG_E_plus_126 == 0); // E == -126, ELB ^ EEQ 해도 됨.
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
                if(E - Until_46th < -9'd126) begin // c-e-i
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
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd1;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // b
                final_Exp = Exp1;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd2;
                `endif
            end
            else begin // c
                if(E-Until_46th > -9'd126) begin // c-b
                    final_Exp = Exp5;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd3;
                    `endif
                end
                else if(E-Until_46th == -9'd126) begin // c-h
                    final_Exp = Exp4;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd4;
                    `endif
                end
                else begin // c-e-i
                    final_Exp = Exp3;
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
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd6;
                    `endif
                end
                else begin // d-i
                    final_Exp = Exp3;
                    `ifdef DEBUG
                    DEBUG_FINAL_EXP = 8'd7;
                    `endif
                end
                
            end
            else if(leading_1_position == 8'd46) begin // e
                final_Exp = Exp3;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd8;
                `endif
            end
            else begin // f
                final_Exp = Exp3;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'd9;
                `endif
            end
        end
        else begin// Equal
            if(leading_1_position == 8'd47) begin // g
                final_Exp = Exp2;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'hA;
                `endif
            end
            else if(leading_1_position == 8'd46) begin // h
                final_Exp = Exp1;
                `ifdef DEBUG
                DEBUG_FINAL_EXP = 8'hB;
                `endif
            end
            else begin // i
                final_Exp = Exp3;
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

    wire signed [8:0]   final_Exp_plus1;
    assign  final_Exp_plus1 = final_Exp + 9'd1;
    
    reg     [22:0]  delta_mantissa;
    reg     [7:0]   delta_exp;

    wire            NAN, OVFL;
    assign  NAN     = ((EA == 8'hFF && MA != 0) || (EB == 8'hFF && MB != 0)) ? 1'b1 : 1'b0;
    assign OVFL     = (final_Exp > 9'd254) ? 1 : 0;

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
