// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if ((0x1b1U == vlSelf->fp32_uart_tx__DOT__clk_count)) {
        if (((((((((0U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)) 
                   | (1U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                  | (2U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                 | (3U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
                | (4U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
               | (5U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
              | (6U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) 
             | (7U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state)))) {
            if ((0U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))) {
                vlSelf->fp32_uart_tx__DOT__tx_state = 1U;
                vlSelf->fp32_uart_tx__DOT__tx_data 
                    = ((0x55U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_data))
                        ? 0x34U : 0x55U);
            } else {
                vlSelf->fp32_uart_tx__DOT__tx_state 
                    = ((1U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                        ? 2U : ((2U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                 ? 3U : ((3U == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                          ? 4U : ((4U 
                                                   == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                    ? 6U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                     ? 7U
                                                     : 8U))))));
            }
        } else {
            vlSelf->fp32_uart_tx__DOT__tx_state = (
                                                   (8U 
                                                    == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                    ? 9U
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                     ? 0xaU
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->fp32_uart_tx__DOT__tx_state))
                                                      ? 0U
                                                      : 1U)));
        }
        vlSelf->fp32_uart_tx__DOT__clk_count = 0U;
    } else {
        vlSelf->fp32_uart_tx__DOT__clk_count = ((IData)(1U) 
                                                + vlSelf->fp32_uart_tx__DOT__clk_count);
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
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
