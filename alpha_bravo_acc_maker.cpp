// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include common routines

#include "bits/stdc++.h"
// #include <string>
// #include <fstream>

#define SAVE
using namespace std;
// return (a*b)+acc = delta

struct float32{ // 1 8 23
    union{
        struct{
            unsigned int mantissa : 23;
            unsigned short exponent : 8;
            unsigned short sign : 1;
        };
        float total;
        int total_int;
        unsigned int total_uint;
    };
};


bool is_nan(float32 tmp){
    if(tmp.exponent == 0xFF && tmp.mantissa != 0x00) return true;
    else return false;
}

float32 save_to_file(float32 alpha, float32 bravo, float32 acc, int kazu){
    float32 delta, charlie, delta_sim;
    charlie.total = (alpha.total * bravo.total) + acc.total;
    printf("kazu: %d\n",kazu);
    printf("%08x(%f)\n", alpha.total_int, alpha.total); 
    printf("%08x(%f)\n", bravo.total_int, bravo.total);
    printf("%08x(%f)\n", acc.total_int, acc.total);
    printf("%08x(%f)\n", charlie.total_int, charlie.total);
    printf("\n");
    return charlie;
}

int main(int argc, char** argv, char** env) {    
    // Setting();

    if (false && argc && argv && env) {}

    int kazu = 0;
    
    float32 aa, bb, acc;

    aa.total_int = 0x3dc1a5d6; bb.total_int = 0x3d97af32; acc.total_int = 0xbea06b3c;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total = 0.5; bb.total = -0.75; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total = 0.5; bb.total = 0.4375; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total = 0; bb.total = 0; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu); acc.total_int = 0x00;
    kazu++;

    aa.total = 0; bb.total = 0; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x000568bf; bb.total_int = 0x41ab0eb4; acc.total_int = 0x0bad206c;
    save_to_file(aa, bb, acc, kazu);
    kazu++;


    aa.total_int = 0x3c578028; bb.total_int = 0x030991f6; acc.total_int = 0x006c9b9f;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x36667838; bb.total_int = 0x09715acf; acc.total_int = 0x006ffd24;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x31483b48; bb.total_int = 0x0ddf024d; acc.total_int = 0x006a81a9;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x1eb6ba67; bb.total_int = 0x1eeb2b1a; acc.total_int = 0x007dfbe3;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x2acb26ef; bb.total_int = 0x147d8ce0; acc.total_int = 0x007be8bd;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x05d08462; bb.total_int = 0x39c422a1; acc.total_int = 0x00379634;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x03dc0adb; bb.total_int = 0x3b358979; acc.total_int = 0x005c824d;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x384275c8; bb.total_int = 0x072aebb4; acc.total_int = 0x0058e2cf;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x08231d8a; bb.total_int = 0x36c22ae3; acc.total_int = 0x006a942d;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x1e22ea13; bb.total_int = 0x21c8ae58; acc.total_int = 0x006b2d33;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x3900004a; bb.total_int = 0x069d5f40; acc.total_int = 0x004507b8;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x0d2fe48b; bb.total_int = 0x32322d8c; acc.total_int = 0x007ebc60;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    
    /*         */

    aa.total_int = 0x40d2e963; bb.total_int = 0x0002ff92; acc.total_int = 0x02643bc1;
    save_to_file(aa, bb, acc, kazu);
    kazu++;
    
    aa.total = -0.5; bb.total = 0.75; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x180115be; bb.total_int = 0x235ba861; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;


    aa.total_int = 0x643c9869; bb.total_int = 0x66334873; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;

    aa.total_int = 0x6b8b4567; bb.total_int = 0x327b23c6; acc.total_int = 0x00;
    save_to_file(aa, bb, acc, kazu);
    kazu++;




    // srand(time(NULL));
    srand(0);
    for(int i=0;i<1000000;i++){
        aa.total_int = rand(); bb.total_int = rand(); acc.total_int = rand();
        save_to_file(aa, bb, acc, kazu);
        kazu++;
    }

    return 0;
}

