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

#include "fpu_mac_test.hpp"

#include "bits/stdc++.h"
// #include <string>
// #include <fstream>

#define SAVE
using namespace std;
// return (a*b)+acc = delta

float32 Filter_arr[121];
float32 Channel_arr[3025][121];

int error_cnt = 0;
int total_cnt = 0;

void Setting(){ // https://blockdmask.tistory.com/322
    ifstream readFile;
    readFile.open("filter.txt");
    float32 tmp;
    int i=0;
    if (readFile.is_open()){
        while (!readFile.eof() && i<121){
            string line;
            getline(readFile, line);
            // cout << line << endl;
            tmp.total_uint = strtol(line.c_str(), NULL, 16);
            // printf("tmp:(0x%08x %f) is ",(ULL)tmp.total_int, tmp.total); print_binary((ULL)tmp.total_int); printf("\n");
            // printf("Filter_arr[%d] = tmp;\n",i);
            Filter_arr[i] = tmp;
            i++;
        }
        printf("i == %d\n", i);
        assert(i==121);
        readFile.close();
    }

    i=0; 
    int j=0;
    readFile.open("channel.txt");
    tmp.total_int = 0;
    if (readFile.is_open()){
        while (!readFile.eof() && i<3025){
            string line;
            getline(readFile, line);
            // cout << line << endl;
            tmp.total_uint = strtol(line.c_str(), NULL, 16);
            // printf("tmp:(0x%08x %f) is ",(ULL)tmp.total_int, tmp.total); print_binary((ULL)tmp.total_int); printf("\n");
            // printf("Channel_arr[%d][%d] = %08X;\n",i,j, tmp.total_int);
            Channel_arr[i][j] = tmp;
            if(j == 120){
                i++;
                j = 0;
            }else{
                j++;
            }
        }
        // printf("Final: [%d][%d] = tmp;\n",i,j);
        assert(i==3025);
        assert(j==0);
        readFile.close();
    }
}

bool is_nan(float32 tmp){
    if(tmp.exponent == 0xFF && tmp.mantissa != 0x00) return true;
    else return false;
}

float32 test_case(Vtop* top, VerilatedVcdC* wave_fp, float32 alpha, float32 bravo, float32 acc, int kazu){
    float32 delta, charlie, delta_sim;
    top->alpha = alpha.total_int;
    top->bravo = bravo.total_int;
    top->acc   = acc.total_int;
    top->eval();
    delta.total_int = top->delta;
    delta_sim = my_mac(alpha, bravo, acc);
    charlie.total = (alpha.total * bravo.total) + acc.total;
    wave_fp->dump(kazu);    


    #if VERBOSE >= 1
    printf("Input:Alpha\t\t(0x%08x %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
    printf("Input:Bravo\t\t(0x%08x %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
    printf("Input:ACC\t\t(0x%08x %f) is ",(ULL)acc.total_int, acc.total); print_binary((ULL)acc.total_int); printf("\n");
    printf("Result:Verilog\t(0x%08x %f) is ",(ULL)delta.total_int, delta.total); print_binary((ULL)delta.total_int); printf("\n");
    printf("Result:CPP_Sim\t(0x%08x %f) is ",(ULL)delta_sim.total_int, delta_sim.total); print_binary((ULL)delta_sim.total_int); printf("\n");
    printf("Wanted_Result\t(0x%08x %f) is ",(ULL)charlie.total_int, charlie.total); print_binary((ULL)charlie.total_int); printf("\n");
    #endif
    
    total_cnt++;
    if(delta.total_int != charlie.total_int){
        if(is_nan(charlie) && is_nan(delta)){
            printf("%d: SAME BOTH NaN\n", kazu);
        }
        else if(charlie.total_int - delta.total_int == 1){
            printf("%d: SAME BUT NOT ROUNDED 1\n", kazu);
        }
        else if(charlie.total_int - delta.total_int == -1){
            printf("%d: SAME BUT NOT ROUNDED 2\n", kazu);
        }
        else if(charlie.total_int - delta.total_int == 2){
            printf("%d: SAME BUT NOT ROUNDED 3\n", kazu);
        }
        else if(charlie.total_int - delta.total_int == -2){
            printf("%d: SAME BUT NOT ROUNDED 4\n", kazu);
        }
        else {
            error_cnt++;
            printf("%d: ERROR\n", kazu);
        }
    }else{
        printf("%d: SAME\n", kazu);
    }
    printf("*********************** (%f * %f) + %f END*********************\n", alpha.total, bravo.total, acc.total);
    printf("\n");
    return delta;
}

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.
    Setting();
    srand(0);

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

    float32 aa, bb, acc;

    aa.total_int = 0x73c6f89d; bb.total_int = 0x328cfdf9; acc.total_int = 0x4375779b;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x03f9e09c; bb.total_int = 0x68b5ff68; acc.total_int = 0x26329142;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x7f800000; bb.total_int = 0x3d97af32; acc.total_int = 0xbea06b3c;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x3dc1a5d6; bb.total_int = 0x3d97af32; acc.total_int = 0x7f800000;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x7f000000; bb.total_int = 0x7f000000; acc.total_int = 0;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x3f800000; bb.total_int = 0x7f000000; acc.total_int = 0x7f000000;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;
    // all should inf

    aa.total_int = 0x3dc1a5d6; bb.total_int = 0x3d97af32; acc.total_int = 0xbea06b3c;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x3dc1a5d6; bb.total_int = 0x3d97af32; acc.total_int = 0xbea06b3c;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total = 0.5; bb.total = -0.75; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total = 0.5; bb.total = 0.4375; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total = 0; bb.total = 0; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu); acc.total_int = 0x00;
    kazu++;

    aa.total = 0; bb.total = 0; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x000568bf; bb.total_int = 0x41ab0eb4; acc.total_int = 0x0bad206c;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;


    aa.total_int = 0x3c578028; bb.total_int = 0x030991f6; acc.total_int = 0x006c9b9f;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x36667838; bb.total_int = 0x09715acf; acc.total_int = 0x006ffd24;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x31483b48; bb.total_int = 0x0ddf024d; acc.total_int = 0x006a81a9;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x1eb6ba67; bb.total_int = 0x1eeb2b1a; acc.total_int = 0x007dfbe3;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x2acb26ef; bb.total_int = 0x147d8ce0; acc.total_int = 0x007be8bd;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x05d08462; bb.total_int = 0x39c422a1; acc.total_int = 0x00379634;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x03dc0adb; bb.total_int = 0x3b358979; acc.total_int = 0x005c824d;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x384275c8; bb.total_int = 0x072aebb4; acc.total_int = 0x0058e2cf;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x08231d8a; bb.total_int = 0x36c22ae3; acc.total_int = 0x006a942d;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x1e22ea13; bb.total_int = 0x21c8ae58; acc.total_int = 0x006b2d33;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x3900004a; bb.total_int = 0x069d5f40; acc.total_int = 0x004507b8;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x0d2fe48b; bb.total_int = 0x32322d8c; acc.total_int = 0x007ebc60;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    
    /*         */

    aa.total_int = 0x40d2e963; bb.total_int = 0x0002ff92; acc.total_int = 0x02643bc1;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;
    
    aa.total = -0.5; bb.total = 0.75; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x180115be; bb.total_int = 0x235ba861; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;


    aa.total_int = 0x643c9869; bb.total_int = 0x66334873; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x6b8b4567; bb.total_int = 0x327b23c6; acc.total_int = 0x00;
    test_case(top, wave_fp, aa, bb, acc, kazu);
    kazu++;


    
    for(int i=0;i<100000;i++){
        aa.total_int = rand(); bb.total_int = rand(); acc.total_int = rand();
        test_case(top, wave_fp, aa, bb, acc, kazu);
        kazu++;
    }

    printf("SAME %d, ERROR %d\n", total_cnt - error_cnt, error_cnt);

    // srand(time(NULL));
    // for(int t=0; t<3025; t++){
    //     acc.total_int = 0;
    //     for(int i=0;i<121 ;i++){
    //         aa = Filter_arr[i];
    //         bb = Channel_arr[t][i];        
    //         acc = test_case(top, wave_fp, aa, bb, acc, kazu);
    //         kazu++;
    //     }
    //     printf("%d/3025 Convolution Completed: Result %08X\n", t+1, acc.total_int);
    // }

    // Final model cleanup
    top->final();
    wave_fp->close();

    // Destroy model
    delete top;

    delete wave_fp;
    // Return good completion status
    return 0;
}

