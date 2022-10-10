// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    Vtop* top = new Vtop;

    // FOR WAVEFORM
    Verilated::traceEverOn(true);
    VerilatedVcdC* wave_fp = new VerilatedVcdC;

    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    int ACT, PRE;
    int PEQ, PWL, NSA;

    int kazu = 0;
    int DELAY = 0;

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->PEQ = 1;
    top->PWL = 0;
    top->NSA = 0;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 1;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 1;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);
    
    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 1;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    DELAY = (DELAY) ? 0 : 1; top->DELAY = DELAY;
    ACT = 0;
    PRE = 0;
    top->ACT = ACT;
    top->PRE = PRE;
    top->eval();
    PEQ = top->PEQ;
    PWL = top->PWL;
    NSA = top->NSA;
    wave_fp->dump(kazu++);

    // Final model cleanup
    top->final();
    wave_fp->close();

    // Destroy model
    delete top;

    delete wave_fp;
    // Return good completion status
    return 0;
}

