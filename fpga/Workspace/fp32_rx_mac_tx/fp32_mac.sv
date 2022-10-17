`define DEBUG_MAC
// `include "fp32_posedge_detector.sv"
// `include "fp32_adder.sv"
// `include "fp32_multiplier.sv"
/*
    FP32_MAC
*/

// made delta reg

module FP32_MAC_Combinatorial
    (
        input   wire            RSTL_I,
        input   wire            CLK_I,
        input   wire    [31:0]  alpha,
        input   wire    [31:0]  bravo,
        input   reg     [31:0]  acc,
        input   wire            MAC_VALID_I,
        input   wire            MAC_READY_I,
        output  reg     [31:0]  delta,
        output  reg             MAC_READY_O,
        output  reg             MAC_VALID_O
    );
    localparam MAX_CLK_CNT = 5208;

    localparam RST = 0;
    localparam CALC = 1;
    localparam IDLE = 2;
    localparam SHOW = 3; // RST => CALC => SHOW => IDLE => CALC => SHOW => IDLE

    reg     [31:0]  alpha_internal;
    reg     [31:0]  bravo_internal;
    reg     [31:0]  acc_internal;
    wire    [31:0]  middle_internal;
    reg     [31:0]  delta_internal;

    reg     [1:0]  mac_state;
    reg     [31:0]  clk_cnt;

    wire mac_valid_i_posedge;
    posedge_detector My_posedge_detector
    (
        .clk(CLK_I),
        .sig(MAC_VALID_I),
        .pulse(mac_valid_i_posedge)
    );


    always @(posedge CLK_I or negedge RSTL_I) begin
        if(~RSTL_I) begin
            clk_cnt <= 0;
            mac_state <= RST;
            MAC_VALID_O <= 0;
            
            alpha_internal <= 0;
            bravo_internal <= 0;
            acc_internal <= 0;

            `ifdef DEBUG_MAC
            delta <= 0;
            `else
            delta <= delta_internal;
            `endif

        end
        else begin
            case(mac_state)
                RST: begin
                    MAC_VALID_O <= 0;
                    clk_cnt <= 0;              
                    if(mac_valid_i_posedge) begin
                        `ifdef DEBUG_MAC
                        alpha_internal <= 32'hBF00_0000;
                        bravo_internal <= 32'h3F40_0000;
                        acc_internal <= 32'd0;
                        `endif
                        mac_state <= CALC;
                    end
                    else begin
                        mac_state <= RST;
                    end
                end
                CALC: begin
                    `ifdef DEBUG_MAC
                    `else
                    alpha_internal <= alpha;
                    bravo_internal <= bravo;
                    acc_internal <= acc;
                    `endif

                    MAC_VALID_O <= 0;
                    if(clk_cnt < MAX_CLK_CNT) begin                        
                        clk_cnt <= clk_cnt + 1;
                        mac_state <= CALC;
                    end
                    else begin
                        clk_cnt <= 0;
                        mac_state <= SHOW;
                    end
                end
                SHOW: begin
                    MAC_VALID_O <= 0;
                    delta <= delta_internal;
                    if(clk_cnt < MAX_CLK_CNT) begin                        
                        clk_cnt <= clk_cnt + 1;
                        mac_state <= SHOW;
                    end
                    else begin
                        clk_cnt <= 0;
                        mac_state <= IDLE;
                    end
                end
                IDLE: begin
                    MAC_VALID_O <= 1;
                    clk_cnt <= 0;
                    if(mac_valid_i_posedge) begin
                        `ifdef DEBUG_MAC
                        if(alpha_internal == 32'h3F00_0000) begin
                            alpha_internal <= 32'hBF00_0000;
                            bravo_internal <= 32'h3F40_0000;
                            acc_internal <= 32'd0;
                        end
                        else begin
                            alpha_internal <= 32'h3F00_0000;
                            bravo_internal <= 32'h3EE0_0000;
                            acc_internal <= 32'd0;
                        end
                        `endif
                        mac_state <= CALC;
                    end
                    else begin
                        mac_state <= IDLE;
                    end
                end
                default: begin
                end
            endcase
        end
    end


    FP32_Multiplier_Combinatorial My_Multiplier
    (
        .alpha(alpha_internal),
        .bravo(bravo_internal),
        .delta(middle_internal)
    );

    FP32_Adder_Combinatorial My_Adder
    (
        .alpha(middle_internal),
        .bravo(acc_internal),
        .delta(delta_internal)
    );


endmodule