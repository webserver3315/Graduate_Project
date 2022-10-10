module maruta
    (
	input wire DELAY,
    input wire  ACT, PRE,
    output reg  PEQ, PWL, NSA
    );

    // reg PEQ_next, PWL_next, NSA_next;

    localparam  IDLE = 2'd0;
    localparam  ACTIVE = 2'd1;
    localparam  HIGHING = 2'd2;
    localparam  PRECHARGING = 2'd3;
	 reg [1:0] state;
	 reg [1:0] next_state;
	 
    always_comb begin
        NSA = PWL;
    end

	 always @(posedge DELAY) begin
			state = next_state;
	 end
	 
    always_comb begin
        case(state) 
            IDLE: begin
                PEQ = 1'd1;
                PWL = 1'd0;
            end
            ACTIVE: begin // PEQ low first
                PEQ = 1'd0;
                PWL = 1'd0;
            end
            HIGHING: begin
                PEQ = 1'd0;
                PWL = 1'd1;
            end
            PRECHARGING: begin
                PEQ = 1'd0;
                PWL = 1'd0;
            end
            default: begin
            end
        endcase
    end

    always @(posedge ACT or posedge PRE) begin
		  if(ACT) begin
			  if(state == IDLE) begin
					next_state = ACTIVE;					
			  end
			  else if(state == ACTIVE) begin
					next_state = HIGHING;
			  end
			  else if(state == HIGHING) begin
					next_state = state;
			  end
			  else begin
					next_state = IDLE;
			  end
		  end
		  else if (PRE) begin
			  if(state == IDLE) begin
					next_state = state;
			  end
			  else if(state == ACTIVE) begin
					next_state = HIGHING;
			  end
			  else if(state == HIGHING) begin
					next_state = PRECHARGING;
			  end
			  else begin
					next_state = IDLE;
			  end
		  end
		  else begin
			  if(state == IDLE) begin
					next_state = state;
			  end
			  else if(state == ACTIVE) begin
					next_state = HIGHING;
			  end
			  else if(state == HIGHING) begin
					next_state = state;
			  end
			  else begin
					next_state = IDLE;
			  end
		  end	  
    end
endmodule

//module maruta
//    (
//    input wire  ACT, PRE,
//    output reg  PEQ, PWL, NSA
//    );
//
//    // reg PEQ_next, PWL_next, NSA_next;
//
//    reg [1:0] state = 2'd0;
//    localparam  IDLE = 2'd0;
//    // localparam  PEQ_L = 2'd0;
//    // localparam  PWL_H = 2'd0;
//    // localparam  NSA_H = 2'd0;
//    localparam ACTIVE = 2'd1;
//
//    always_comb begin
//        if(state == IDLE) begin
//            PEQ = 1'd0;
//            PWL = 1'd1;
//            NSA = 1'd1;
//        end
//        else begin
//            PEQ = 1'd1;
//            PWL = 1'd0;
//            NSA = 1'd0;
//        end
//    end
//
//    always @(posedge ACT or posedge PRE) begin
//        if(ACT == 1'd1) begin
//            state = IDLE;
//        end
//        else if(PRE == 1'd1) begin
//            state = ACTIVE;
//        end
//        else begin
//            state = state;
//        end
//    end
//endmodule


//module maruta
//    (
//    input wire  ACT, PRE,
//    output reg  PEQ, PWL, NSA
//    );
//
//    always_latch begin
//        if (ACT == 1'b1) begin
//            PEQ = 1'b0;
//            NSA = NSA;
//            PWL = PWL;
//        
//        if (PEQ == 1'b0) begin
//        PWL = 1'b1;
//        NSA = 1'b1;
//        PEQ = PEQ;
//        end
//        
//        else begin end
//    end
//    
//    else if (PRE == 1'b1) begin
//        PWL = 1'b0;
//        NSA = 1'b0;
//        PEQ = PEQ;
//        
//        if (PWL == 1'b0) begin
//
//        NSA = 1'b0;
//        PEQ = 1'b1;
//        PWL = PWL;
//        end
//        
//        else begin end
//        end
//    end
//endmodule


//module maruta
//    (
//    input wire  ACT, PRE,
//    output reg  PEQ, PWL, NSA
//    );
//
//    // PEQ = 1'b1;
//
//    always_latch begin
//        if (ACT == 1'b1) begin
//            PEQ = 1'b0;
//            PWL =  1'b1;
//            NSA =  1'b1; 
//        end
//        else if (PRE == 1'b1) begin
//            PWL = 1'b0;
//            NSA = 1'b0;
//            PEQ = 1'b1;            
//        end
//        else begin 
//            PWL = PWL;
//            NSA = NSA;
//            PEQ = PEQ;
//        end
//    end
//endmodule


//module maruta
//    (
//    input wire  ACT, PRE,
//    output reg  PEQ, PWL, NSA
//    );
//
//    always_latch begin
//        if (ACT == 1'b1) begin
//            PEQ = 1'b0;
//            NSA = NSA;
//            PWL = PWL;
//        end
//
//        else if (PEQ == 1'b0) begin
//            PWL =  1'b1;
//            NSA =  1'b1;
//            PEQ = PEQ;
//        end
//
//        else if (PRE == 1'b1) begin
//            PWL = 1'b0;
//            NSA = 1'b0;
//            PEQ = PEQ;
//        end
//        else if (NSA == 1'b0) begin
//            PEQ = 1'b1;
//            PWL = PWL;
//            NSA = NSA;
//        end
//        else begin 
//            PEQ = 1'b0;
//            PWL = 1'b0;
//            NSA = 1'b0;
//        end
//    end
//endmodule