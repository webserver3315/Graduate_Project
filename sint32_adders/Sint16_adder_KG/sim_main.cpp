// sim_main.cpp
// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include common routines
#include <verilated.h>

#include <iostream>
using namespace std;

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

    top->P_j_i=0;
    top->G_j_i=0;
    top->P_k_j_plus_1=0;
    top->G_k_j_plus_1=0;
    top->eval();
    wave_fp->dump(time); time++;

    top->P_j_i=0;
    top->G_j_i=0;
    top->P_k_j_plus_1=0;
    top->G_k_j_plus_1=0;
    top->eval();
    wave_fp->dump(time); time++;


    for(int i=0;i<16;i++){
        printf("i == %d => %d %d %d %d\n", i, i&(int)1, i&(int)2, i&(int)4, i&(int)8);
        top->P_j_i=(bool)(i&(int)1);
        top->G_j_i=(bool)(i&(int)2);
        top->P_k_j_plus_1=(bool)(i&(int)4);
        top->G_k_j_plus_1=(bool)(i&(int)8);
        top->eval();
        wave_fp->dump(time); time++;
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

