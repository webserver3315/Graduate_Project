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

#define VERBOSE 0

#include "bits/stdc++.h"
using namespace std;

// #include "uart_tx_test.hpp"

// return (a*b)+acc = delta

int global_CLK = 0;
int global_kazu = 0;


void test_case(Vtop* top, VerilatedVcdC* wave_fp, int RSTL_I, int UART_RX_I){
    global_CLK = 1;
    top->CLK_I = global_CLK;
    top->RSTL_I = RSTL_I;
    top->UART_RX_I = UART_RX_I;
    top->eval();
    wave_fp->dump(global_kazu++);

    global_CLK = 0;
    top->CLK_I = global_CLK;
    top->RSTL_I = RSTL_I;
    top->UART_RX_I = UART_RX_I;
    top->eval();
    wave_fp->dump(global_kazu++);
}
void test_case_433(Vtop* top, VerilatedVcdC* wave_fp, int RSTL_I, int UART_RX_I){
    for(int i=0;i<433;i++){
        test_case(top,wave_fp,RSTL_I,UART_RX_I);
    }
}

void put_Byte(Vtop* top, VerilatedVcdC* wave_fp, string binary_4bit){
    assert(binary_4bit.length() == 4);
    #if VERBOSE >= 3
    cout << "binary_4bit is " << binary_4bit<<endl;
    #endif
    for(int i=3;i>=0;i--){
        int uart_rx = binary_4bit[i] - '0';
        #if VERBOSE >= 3
        cout << "sent " << uart_rx <<endl;
        #endif
        test_case_433(top, wave_fp, 1, uart_rx);
    }
}

// Little Endian
void put_Four_Byte(Vtop* top, VerilatedVcdC* wave_fp, string hexa_four_byte){ // ex) "BF000000"
    int index; // LSB is 0
    assert(hexa_four_byte.length() == 8);
    for(index=7;index>=0;index--){
        if(index%2 == 1){
            // START FIRST
            test_case_433(top, wave_fp, 1, 1); //IDLE
            test_case_433(top, wave_fp, 1, 0); // START
        }
        switch(hexa_four_byte[index]){
            case '0':
                put_Byte(top, wave_fp, string("0000"));
                break;
            case '1':
                put_Byte(top, wave_fp, string("0001"));
                break;
            case '2':
                put_Byte(top, wave_fp, string("0010"));
                break;
            case '3':
                put_Byte(top, wave_fp, string("0011"));
                break;
            case '4':
                put_Byte(top, wave_fp, string("0100"));
                break;
            case '5':
                put_Byte(top, wave_fp, string("0101"));
                break;
            case '6':
                put_Byte(top, wave_fp, string("0110"));
                break;
            case '7':
                put_Byte(top, wave_fp, string("0111"));
                break;
            case '8':
                put_Byte(top, wave_fp, string("1000"));
                break;
            case '9':
                put_Byte(top, wave_fp, string("1001"));
                break;
            case 'A':
                put_Byte(top, wave_fp, string("1010"));
                break;
            case 'B':
                put_Byte(top, wave_fp, string("1011"));
                break;
            case 'C':
                put_Byte(top, wave_fp, string("1100"));
                break;
            case 'D':
                put_Byte(top, wave_fp, string("1101"));
                break;
            case 'E':
                put_Byte(top, wave_fp, string("1110"));
                break;
            case 'F':
                put_Byte(top, wave_fp, string("1111"));
                break;
            default:
                perror("hexastring should 0~F only");
                break;
        }
        if(index % 2 == 0){
            test_case_433(top, wave_fp, 1, 1);// STOP
            test_case_433(top, wave_fp, 1, 1);// MORE
        }
    }
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

    top->trace(wave_fp, 999);
    printf("waveform file name is top.vcd\n");
    wave_fp->open("./top.vcd");

    int CLK_I, RSTL_I, UART_RX_I;
    /* RESET */
    test_case_433(top, wave_fp, 1, 1);
    test_case_433(top, wave_fp, 1, 1);
    test_case_433(top, wave_fp, 0, 1);
    test_case_433(top, wave_fp, 1, 1);
    test_case_433(top, wave_fp, 1, 1);
    test_case_433(top, wave_fp, 1, 1); // 5ps~6ps

    put_Four_Byte(top, wave_fp, string("BF000000"));
    put_Four_Byte(top, wave_fp, string("3F400000"));
    put_Four_Byte(top, wave_fp, string("00000000"));
    //0xbec00000

    put_Four_Byte(top, wave_fp, string("3F000000"));
    put_Four_Byte(top, wave_fp, string("3EE00000"));
    put_Four_Byte(top, wave_fp, string("00000000"));
    //0x3e600000

    for(int i=0;i<100;i++){
        test_case_433(top, wave_fp, 1, 1);
    }

    /* 00000000_3F400000_BF000000 */
    

    // for(int i=0;i<50000; i++){
    //     test_case_433(top, wave_fp, clk_i, btn1_i, global_kazu++);
    //     clk_i = (clk_i) ? 0 : 1;
    //     if(i%700) btn1_i = (btn1_i) ? 0 : 1;
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

