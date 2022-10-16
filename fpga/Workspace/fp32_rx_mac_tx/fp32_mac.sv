`define DEBUG
`include "fp32_adder.sv"
`include "fp32_multiplier.sv"
/*
    FP32_MAC
*/

module FP32_MAC_Combinatorial
    (
        input   wire    [31:0]  alpha,
        input   wire    [31:0]  bravo,
        input   reg     [31:0]  acc,
        output  reg     [31:0]  delta
    );

    reg     [31:0]  middle_output;

    FP32_Multiplier_Combinatorial My_Multiplier
    (
        .alpha(alpha),
        .bravo(bravo),
        .delta(middle_output)
    );

    FP32_Adder_Combinatorial My_Adder
    (
        .alpha(middle_output),
        .bravo(acc),
        .delta(delta)
    );

endmodule