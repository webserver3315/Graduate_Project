// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data = 0U;
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__total_index 
        = (0xffU & (((IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_byte) 
                     << 3U) + (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_bit)));
    vlSelf->TX_DATA_O = (1U & (((((((((0U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                      | (1U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (2U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (3U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                   | (4U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                  | (5U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                 | (6U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                | (7U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                ? ((0U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                   | ((1U != (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                      & ((2U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                          ? vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data
                                          : ((3U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                              ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                 >> 1U)
                                              : ((4U 
                                                  == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 
                                                 (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                  >> 2U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 4U)
                                                    : 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 5U))))))))
                                : (((((((((8U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                          | (9U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0xaU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0xbU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                       | (0xcU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                      | (0xdU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (0xeU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (0xfU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                    ? ((8U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                        ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                           >> 6U) : 
                                       ((9U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                         ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                            >> 7U) : 
                                        ((0xaU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                         | ((0xbU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                            | ((0xcU 
                                                != (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                               & ((0xdU 
                                                   == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 8U)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 9U)
                                                    : 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0xaU))))))))
                                    : (((((((((0x10U 
                                               == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                              | (0x11U 
                                                 == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                             | (0x12U 
                                                == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0x13U 
                                               == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                           | (0x14U 
                                              == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                          | (0x15U 
                                             == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0x16U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0x17U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                        ? ((0x10U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                            ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                               >> 0xbU)
                                            : ((0x11U 
                                                == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 0xcU)
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0xdU)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0xeU)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | (0x16U 
                                                         == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))))))))
                                        : (((((((((0x18U 
                                                   == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                  | (0x19U 
                                                     == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                 | (0x1aU 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x1bU 
                                                   == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                               | (0x1cU 
                                                  == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                              | (0x1dU 
                                                 == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                             | (0x1eU 
                                                == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0x1fU 
                                               == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                            ? ((0x18U 
                                                == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                ? (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 0x10U)
                                                : (
                                                   (0x19U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0x11U)
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0x12U)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                      >> 0x13U)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 
                                                      (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                        ? 
                                                       (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                        >> 0x15U)
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                         ? 
                                                        (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                         >> 0x16U)
                                                         : 
                                                        (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                         >> 0x17U))))))))
                                            : (((((
                                                   ((((0x20U 
                                                       == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | (0x21U 
                                                         == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                     | (0x22U 
                                                        == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                    | (0x23U 
                                                       == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                   | (0x24U 
                                                      == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                  | (0x25U 
                                                     == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                 | (0x26U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x27U 
                                                   == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                                ? (
                                                   (0x20U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                   | ((0x21U 
                                                       == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | ((0x22U 
                                                          != (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                         & ((0x23U 
                                                             == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                             ? 
                                                            (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                             >> 0x18U)
                                                             : 
                                                            ((0x24U 
                                                              == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                              ? 
                                                             (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                              >> 0x19U)
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                               ? 
                                                              (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                               >> 0x1aU)
                                                               : 
                                                              ((0x26U 
                                                                == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                                ? 
                                                               (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                                >> 0x1bU)
                                                                : 
                                                               (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                                >> 0x1cU))))))))
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0x1dU)
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0x1eU)
                                                     : 
                                                    ((0x2aU 
                                                      != (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                     | (vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                        >> 0x1fU))))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__CLK_I = vlSelf->CLK_I;
    vlSelf->__Vclklast__TOP__RSTL_I = vlSelf->RSTL_I;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->CLK_I = VL_RAND_RESET_I(1);
    vlSelf->RSTL_I = VL_RAND_RESET_I(1);
    vlSelf->UART_RX_I = VL_RAND_RESET_I(1);
    vlSelf->TX_DATA_O = VL_RAND_RESET_I(1);
    vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->fp32_uart_rx_tx__DOT__data);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt = VL_RAND_RESET_I(32);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = VL_RAND_RESET_I(3);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_byte = VL_RAND_RESET_I(8);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_bit = VL_RAND_RESET_I(8);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__total_index = VL_RAND_RESET_I(8);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT____Vlvbound_h93dc11f2__0 = VL_RAND_RESET_I(1);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = VL_RAND_RESET_I(8);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data = VL_RAND_RESET_I(32);
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
