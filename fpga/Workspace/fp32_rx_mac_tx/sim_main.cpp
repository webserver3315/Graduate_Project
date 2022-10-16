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

// #include "uart_tx_test.hpp"

// return (a*b)+acc = delta

void test_case(Vtop* top, VerilatedVcdC* wave_fp, int clk_i, int btn1_i, int kazu){
    top->clk_i = clk_i;
    top->btn1_i = btn1_i;
    top->eval();
    wave_fp->dump(kazu);

    #if VERBOSE >= 1    
    // printf("Wanted_Result\t(0x%08llx %f) is ",(ULL)charlie.total_int, charlie.total); print_binary((ULL)charlie.total_int); printf("\n");
    #endif
}

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.
    srand(time(NULL));

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    Vtop* top = new Vtop;

    // FOR WAVEFORM
    Verilated::traceEverOn(true);
    VerilatedVcdC* wave_fp = new VerilatedVcdC;

    int kazu = 0;
    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    int clk_i, btn1_i;
    clk_i = 0;
    btn1_i = 0;
    for(int i=0;i<50000; i++){
        test_case(top, wave_fp, clk_i, btn1_i, kazu++);
        clk_i = (clk_i) ? 0 : 1;
        if(i%700) btn1_i = (btn1_i) ? 0 : 1;
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

