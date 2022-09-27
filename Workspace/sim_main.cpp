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

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define RANDOM
// #define VERBOSE
#define ULL unsigned long long

struct float32{ // 1 8 23
    union{
        struct{
            unsigned int mantissa : 23;
            unsigned short exponent : 8;
            unsigned short sign : 1;
        };
        float total;
        int total_int;
    };
};

/* When first call, put depth := 1
 * 
*/
void print_binary_rec(unsigned long long foo, unsigned long long depth)
{
    int ret;
    if(foo) {
        print_binary_rec((unsigned long long)foo>>1, depth+1);
        if(depth%4) printf("%llu",foo&1);
        else printf("_%llu",foo&1);
    }
}

void print_binary(unsigned long long foo)
{
    // printf("foo = %d %f\n", foo.total_int, foo.total);
    if(foo == 0)
        printf("0");
    else
        print_binary_rec(foo,1);
}

void test_case(Vtop* top, VerilatedVcdC* wave_fp, float32 alpha, float32 bravo, int time){
    float32 delta, charlie;
    top->alpha = alpha.total_int;
    top->bravo = bravo.total_int;
    top->eval();
    delta.total_int = top->delta;
    charlie.total = alpha.total * bravo.total;
    wave_fp->dump(time);
    printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
    printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
    printf("delta(0x%08llx %f) is ",(ULL)delta.total_int, delta.total); print_binary((ULL)delta.total_int); printf("\n");
    printf("charlie(0x%08llx %f) is ",(ULL)charlie.total_int, charlie.total); print_binary((ULL)charlie.total_int); printf("\n");
    if(delta.total_int != charlie.total_int){
        printf("%d: ERROR\n", time);
    }else{
        printf("%d: SAME\n", time);
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

    int time = 0;
    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    float32 aa, bb;

    aa.total = 0.5; bb.total = 0.75;
    test_case(top, wave_fp, aa, bb, time);
    time++;

    aa.total = 0; bb.total = 0;
    test_case(top, wave_fp, aa, bb, time);
    time++;

    aa.total = 0.5; bb.total = 0.4375;
    test_case(top, wave_fp, aa, bb, time);
    time++;

    aa.total = 0; bb.total = 0;
    test_case(top, wave_fp, aa, bb, time);
    time++;

    aa.total = -0.5; bb.total = 0.75;
    test_case(top, wave_fp, aa, bb, time);
    time++;

    for(int i=0;i<1000;i++){
        aa.total_int = rand();
        bb.total_int = rand();
        test_case(top, wave_fp, aa, bb, time);
        time++;
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

