// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->led1_o = vlSelf->btn1_i;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if (((0U == (IData)(vlSelf->uart_tx__DOT__state)) 
         & (~ (IData)(vlSelf->btn1_i)))) {
        vlSelf->uart_tx__DOT__queueing = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__uart_tx__DOT__clk_count;
    // Body
    __Vdly__uart_tx__DOT__clk_count = vlSelf->uart_tx__DOT__clk_count;
    vlSelf->uart_tx_o = (1U & ((8U & (IData)(vlSelf->uart_tx__DOT__state))
                                ? (IData)((1U != (7U 
                                                  & (IData)(vlSelf->uart_tx__DOT__state))))
                                : ((4U & (IData)(vlSelf->uart_tx__DOT__state))
                                    ? (IData)((2U == 
                                               (3U 
                                                & (IData)(vlSelf->uart_tx__DOT__state))))
                                    : ((2U & (IData)(vlSelf->uart_tx__DOT__state))
                                        ? (IData)(vlSelf->uart_tx__DOT__state)
                                        : (~ (IData)(vlSelf->uart_tx__DOT__state))))));
    if ((0xd9U == vlSelf->uart_tx__DOT__clk_count)) {
        vlSelf->uart_tx__DOT__clk_div = (1U & (~ (IData)(vlSelf->uart_tx__DOT__clk_div)));
        __Vdly__uart_tx__DOT__clk_count = 0U;
    } else {
        __Vdly__uart_tx__DOT__clk_count = ((IData)(1U) 
                                           + vlSelf->uart_tx__DOT__clk_count);
    }
    vlSelf->uart_tx__DOT__clk_count = __Vdly__uart_tx__DOT__clk_count;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->led2_o = vlSelf->uart_tx__DOT__clk_div;
}

extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_hbef89867_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->uart_tx__DOT__queueing) 
                     << 4U) | (IData)(vlSelf->uart_tx__DOT__state));
    vlSelf->uart_tx__DOT__state = Vtop__ConstPool__TABLE_hbef89867_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    if (((~ (IData)(vlSelf->btn1_i)) & (IData)(vlSelf->__Vclklast__TOP__btn1_i))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->__VinpClk__TOP__uart_tx__DOT__clk_div) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__uart_tx__DOT__clk_div)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__btn1_i = vlSelf->btn1_i;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__uart_tx__DOT__clk_div 
        = vlSelf->__VinpClk__TOP__uart_tx__DOT__clk_div;
    vlSelf->__VinpClk__TOP__uart_tx__DOT__clk_div = vlSelf->uart_tx__DOT__clk_div;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->uart_tx__DOT__clk_div ^ vlSelf->__Vchglast__TOP__uart_tx__DOT__clk_div));
    VL_DEBUG_IF( if(__req && ((vlSelf->uart_tx__DOT__clk_div ^ vlSelf->__Vchglast__TOP__uart_tx__DOT__clk_div))) VL_DBG_MSGF("        CHANGE: top.sv:31: uart_tx.clk_div\n"); );
    // Final
    vlSelf->__Vchglast__TOP__uart_tx__DOT__clk_div 
        = vlSelf->uart_tx__DOT__clk_div;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->btn1_i & 0xfeU))) {
        Verilated::overWidthError("btn1_i");}
}
#endif  // VL_DEBUG
