// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK_I,0,0);
        VL_IN8(RSTL_I,0,0);
        CData/*0:0*/ fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i;
        VL_IN8(UART_RX_I,0,0);
        VL_OUT8(TX_DATA_O,0,0);
        CData/*0:0*/ fp32_rx_mac_tx__DOT__mac_ready_i_tx_ready_o;
        CData/*2:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state;
        CData/*6:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte;
        CData/*6:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit;
        CData/*6:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT____Vlvbound_h8ebc310e__0;
        CData/*3:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_EEQ;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_minus_EB_Carry;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EB_minus_EA_Carry;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__G;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__R;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__S;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_MAN;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP;
        CData/*7:0*/ fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state;
        CData/*0:0*/ fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before;
        CData/*0:0*/ __Vclklast__TOP__CLK_I;
        CData/*0:0*/ __Vclklast__TOP__RSTL_I;
        CData/*0:0*/ __Vclklast__TOP__fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i;
        CData/*0:0*/ __Vclklast__TOP__fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Exp;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_plus_EB;
        SData/*8:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_plus_EB_minus_254;
        VlWide<3>/*95:0*/ fp32_rx_mac_tx__DOT__data;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__result;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt;
        IData/*23:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1;
        IData/*23:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2;
        IData/*23:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa;
        IData/*23:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa;
        IData/*23:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3;
        IData/*24:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa;
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data;
    };
    struct {
        IData/*31:0*/ fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt;
        QData/*47:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original;
        QData/*47:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man3;
        QData/*47:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp;
        QData/*47:0*/ fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
