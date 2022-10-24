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

#include "fpu_adder_test_final.hpp"


bool is_nan(float32 tmp){
    if(tmp.exponent == 0xFF && tmp.mantissa != 0x00) return true;
    else return false;
}

void test_case(Vtop* top, VerilatedVcdC* wave_fp, float32 alpha, float32 bravo, int kazu){
    float32 delta, charlie, delta_sim;
    top->alpha = alpha.total_int;
    top->bravo = bravo.total_int;
    top->eval();
    delta.total_int = top->delta;
    delta_sim = my_adder(alpha, bravo);
    charlie.total = alpha.total + bravo.total;
    wave_fp->dump(kazu);
    if(delta.total_int != charlie.total_int){
        if(is_nan(charlie) && is_nan(delta)){
            // printf("%d: SAME BOTH NaN\n", kazu);
        }
        else if(charlie.total_int - delta.total_int == 1){
            printf("Input:Alpha\t\t(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
            printf("Input:Bravo\t\t(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
            printf("Result:Verilog\t(0x%08llx %f) is ",(ULL)delta.total_int, delta.total); print_binary((ULL)delta.total_int); printf("\n");
            printf("Result:CPP_Sim\t(0x%08llx %f) is ",(ULL)delta_sim.total_int, delta_sim.total); print_binary((ULL)delta_sim.total_int); printf("\n");
            printf("Wanted_Result\t(0x%08llx %f) is ",(ULL)charlie.total_int, charlie.total); print_binary((ULL)charlie.total_int); printf("\n");
            printf("%d: SAME BUT NOT ROUNDED\n", kazu);    
        }
        else{
            printf("Input:Alpha\t\t(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
            printf("Input:Bravo\t\t(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
            printf("Result:Verilog\t(0x%08llx %f) is ",(ULL)delta.total_int, delta.total); print_binary((ULL)delta.total_int); printf("\n");
            printf("Result:CPP_Sim\t(0x%08llx %f) is ",(ULL)delta_sim.total_int, delta_sim.total); print_binary((ULL)delta_sim.total_int); printf("\n");
            printf("Wanted_Result\t(0x%08llx %f) is ",(ULL)charlie.total_int, charlie.total); print_binary((ULL)charlie.total_int); printf("\n");

            printf("%d: ERROR\n", kazu);
            exit(0);
        }
    }else{
        // printf("%d: SAME\n", kazu);
    }
    printf("\n");
}

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

    int kazu = 0;
    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    float32 aa, bb;

    /*
        MAC에서 발생한 예외테케
    */

    aa.total_int = 0x36f0d8be; bb.total_int = 0x42826980;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    aa.total_int = 0x0c9541d3; bb.total_int = 0x0ef72226;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    aa.total_int = 0x73a8e4; bb.total_int = 0x0bad206c;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    aa.total_int = 0x3761; bb.total_int = 0;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    /*
        MAC 끝
   */

    aa.total = 0.5; bb.total = 0.4375;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    aa.total = 0.5; bb.total = -0.4375;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    aa.total = 0.5; bb.total = 0.75;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    aa.total = -0.5; bb.total = 0.75;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    aa.total = -0.5; bb.total = -0.75;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    // cc.total = aa.total + bb.total;
    
    aa.total_int = 551542477; bb.total_int = 1881522032;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    
    aa.total_int = 1656830887; bb.total_int = 1386443347;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    // 예시: https://stackoverflow.com/questions/51661257/binary-floating-point-addition-algorithm
    aa.total_int = 0b00001000111100110110010010011100; 
    bb.total_int = 0b00000000000011000111111010000100; 
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    
    aa.total_int = 1352740975; bb.total_int = 1207161653;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;
    
    aa.total_int = 1173666029; bb.total_int = 1167651708;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    aa.total_int = 977394179; bb.total_int = 961550550;
    test_case(top, wave_fp, aa, bb, kazu); kazu++;

    #ifdef RANDOM
    srand(time(NULL));
    for(int i=0;i<100000;i++){
        aa.total_int = rand();
        bb.total_int = rand();
        test_case(top, wave_fp, aa, bb, kazu); kazu++;
    }
    #endif

    // Final model cleanup
    top->final();
    wave_fp->close();

    // Destroy model
    delete top;

    delete wave_fp;
    // Return good completion status
    return 0;
}

