// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->uart_tx_o = (1U & (((((((((0U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)) 
                                      | (1U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                     | (2U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                    | (3U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                   | (4U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                  | (5U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                 | (6U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                                | (7U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)))
                                ? ((0U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)) 
                                   | ((1U != (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)) 
                                      & ((2U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                          ? (IData)(vlSelf->fp32_uart_tx__DOT__tx_data)
                                          : ((3U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                              ? ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                 >> 1U)
                                              : ((4U 
                                                  == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                  ? 
                                                 ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                  >> 2U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                   ? 
                                                  ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                   >> 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                    ? 
                                                   ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                    >> 4U)
                                                    : 
                                                   ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                    >> 5U))))))))
                                : ((8U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                    ? ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                       >> 6U) : ((9U 
                                                  != (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)) 
                                                 | ((IData)(vlSelf->fp32_uart_tx__DOT__tx_data) 
                                                    >> 7U)))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->btn1_i = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->led1_o = VL_RAND_RESET_I(1);
    vlSelf->led2_o = VL_RAND_RESET_I(1);
    vlSelf->fp32_uart_tx__DOT__tx_state = VL_RAND_RESET_I(4);
    vlSelf->fp32_uart_tx__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->fp32_uart_tx__DOT__clk_count = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
