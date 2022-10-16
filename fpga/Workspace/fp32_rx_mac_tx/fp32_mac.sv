`define DEBUG
`include "fp32_adder.sv"
`include "fp32_multiplier.sv"
/*
    FP32_MAC
*/
module posedge_detector // https://www.chipverify.com/verilog/verilog-positive-edge-detector
    (
        input clk,
        input sig,
        output pulse
    );

    reg delayed_sig;
    always @(posedge clk) begin
        delayed_sig <= sig;
    end
    pulse = sig & (~delayed_sig);
endmodule

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

    localparam IDLE = 0;
    localparam CALC = 1;

    reg     [31:0]  alpha_internal;
    reg     [31:0]  bravo_internal;
    reg     [31:0]  acc_internal;
    reg     [31:0]  middle_output;
    reg     [31:0]  delta_internal;

    reg             mac_state;
    reg     [31:0]  clk_cnt;

    reg     [31:0]  calc_cnt;
    reg             calc_finished;

    /* Calculator Delay Counter*/
    always @(posedge calc_start or negedge RSTL_I) begin
        if(~RSTL_I) begin
            calc_cnt = 0;
            calc_finished = 0;
        end
        else begin
            if(calc_cnt < 433) begin
                calc_cnt = 0;
                calc_finished = 0;
            end
            else begin
                calc_cnt = calc_cnt + 1;
                calc_finished = 1;
            end
        end
    end

    always_comb begin
        MAC_READY_O = 1;
    end

    always @(posedge MAC_VALID_I or negedge RSTL_I) begin
        if(~RSTL_I) begin
            alpha_internal = 0;
            bravo_internal = 0;
            acc_internal = 0;
        end
        else begin
            alpha_internal = alpha;
            bravo_internal = bravo;
            acc_internal = acc;
        end
    end

    always @(posedge MAC_VALID_O or negedge RSTL_I) begin
        if(~RSTL_I) begin
            delta = 0;
        end
        else begin
            delta = delta_internal;
        end
    end

    FP32_Multiplier_Combinatorial My_Multiplier
    (
        .alpha(alpha_internal),
        .bravo(bravo_internal),
        .delta(middle_output)
    );

    FP32_Adder_Combinatorial My_Adder
    (
        .alpha(middle_output),
        .bravo(acc_internal),
        .delta(delta_internal)
    );

    always @(posedge CLK_I or negedge RSTL_I) begin
        if(~RSTL_I) begin
            clk_cnt = 0;
            mac_state = IDLE;
            MAC_VALID_O = 0;
        end
        else begin
            case(mac_state)
                IDLE: begin                    
                    if(MAC_VALID_I) begin
                        clk_cnt = 0;
                        MAC_VALID_O = 1;
                        mac_state = CALC;
                    end
                    else begin
                        mac_state = IDLE;
                    end
                end
                CALC: begin
                    MAC_VALID_O = 0;
                    if(clk_cnt < 433) begin                        
                        clk_cnt = clk_cnt + 1;
                        mac_state = CALC;
                    end
                    else begin
                        MAC_VALID_O = 0;              
                        mac_state = IDLE;
                    end
                end
                default: begin
                end
            endcase
        end
    end



endmodule