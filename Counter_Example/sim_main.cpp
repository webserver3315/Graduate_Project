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
    int time = 0;
    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    printf("cnt value = %d\n", top->out);
    top->rstn=1;
    top->eval();
    wave_fp->dump(time); time++;

    top->rstn=0;
    top->eval();
    wave_fp->dump(time); time++;

    top->rstn=1;
    top->eval();
    wave_fp->dump(time); time++;
    printf("cnt value = %d\n", top->out);

    for(int i=0;i<252;i++){
        top->clk = 0;
        top->eval();
        wave_fp->dump(time); time++;

        top->clk = 1;
        top->eval();
        wave_fp->dump(time); time++;

        printf("cnt value = %d\n", top->out);
    }

    // Final model cleanup
    top->final();
    wave_fp->close();

    // Destroy model
    delete top;

    delete wave_fp;
    // Return good completion status
    return 0;
}

