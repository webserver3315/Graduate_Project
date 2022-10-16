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
