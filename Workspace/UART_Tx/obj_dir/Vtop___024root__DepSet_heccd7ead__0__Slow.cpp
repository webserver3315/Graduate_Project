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
    vlSelf->led1_o = vlSelf->btn1_i;
    vlSelf->led2_o = vlSelf->uart_tx__DOT__clk_div;
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->uart_tx__DOT__queueing = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__btn1_i = vlSelf->btn1_i;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP____VinpClk__TOP__uart_tx__DOT__clk_div 
        = vlSelf->__VinpClk__TOP__uart_tx__DOT__clk_div;
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
    vlSelf->uart_tx__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->uart_tx__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->uart_tx__DOT__clk_count = VL_RAND_RESET_I(32);
    vlSelf->uart_tx__DOT__clk_div = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__queueing = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__uart_tx__DOT__clk_div = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__uart_tx__DOT__clk_div = VL_RAND_RESET_I(1);
}
