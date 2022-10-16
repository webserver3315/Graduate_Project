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
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 2U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 2U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta = 0xbec00000U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E = 0x7dU;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1 = 0xc00000U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3 = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa = 0xc00000U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 2U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent = 0x7dU;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_MAN = 2U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta = 0xbec00000U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta = 0xbec00000U;
    vlSelf->delta_output = vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta;
    vlSelf->delta_output = vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta;
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_MAN = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 0U;
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->delta_serial = (1U & (((((((((0U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                         | (1U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (2U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                       | (3U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                      | (4U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (5U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (6U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                   | (7U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                   ? ((0U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                      | ((1U != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                         & ((2U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                             ? vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta
                                             : ((3U 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                 ? 
                                                (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                 >> 1U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 
                                                 (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                  >> 2U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                   >> 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                    >> 4U)
                                                    : 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                    >> 5U))))))))
                                   : (((((((((8U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                             | (9U 
                                                == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0xaU 
                                               == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                           | (0xbU 
                                              == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                          | (0xcU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0xdU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0xeU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                       | (0xfU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                       ? ((8U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                           ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                              >> 6U)
                                           : ((9U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                               ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                  >> 7U)
                                               : ((0xaU 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                  | ((0xbU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                     | ((0xcU 
                                                         != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                        & ((0xdU 
                                                            == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                            ? 
                                                           (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                            >> 8U)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                             ? 
                                                            (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                             >> 9U)
                                                             : 
                                                            (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                             >> 0xaU))))))))
                                       : (((((((((0x10U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                 | (0x11U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x12U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                               | (0x13U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                              | (0x14U 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                             | (0x15U 
                                                == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0x16U 
                                               == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                           | (0x17U 
                                              == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                           ? ((0x10U 
                                               == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                               ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                  >> 0xbU)
                                               : ((0x11U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                   >> 0xcU)
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                    >> 0xdU)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                     >> 0xeU)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | (0x16U 
                                                         == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))))))))
                                           : ((((((
                                                   (((0x18U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                     | (0x19U 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                    | (0x1aU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                   | (0x1bU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                  | (0x1cU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                 | (0x1dU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x1eU 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                               | (0x1fU 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                               ? ((0x18U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                   >> 0x10U)
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                    >> 0x11U)
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                     >> 0x12U)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                      >> 0x13U)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 
                                                      (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                        ? 
                                                       (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                        >> 0x15U)
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                         ? 
                                                        (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                         >> 0x16U)
                                                         : 
                                                        (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                         >> 0x17U))))))))
                                               : ((
                                                   (((((((0x20U 
                                                          == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                         | (0x21U 
                                                            == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                        | (0x22U 
                                                           == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                       | (0x23U 
                                                          == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                      | (0x24U 
                                                         == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                     | (0x25U 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                    | (0x26U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                   | (0x27U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                   | ((0x21U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | ((0x22U 
                                                          != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                         & ((0x23U 
                                                             == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                             ? 
                                                            (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                             >> 0x18U)
                                                             : 
                                                            ((0x24U 
                                                              == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                              ? 
                                                             (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                              >> 0x19U)
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                               ? 
                                                              (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                               >> 0x1aU)
                                                               : 
                                                              ((0x26U 
                                                                == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                                ? 
                                                               (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                                >> 0x1bU)
                                                                : 
                                                               (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                                >> 0x1cU))))))))
                                                   : 
                                                  ((0x28U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                    >> 0x1dU)
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                     >> 0x1eU)
                                                     : 
                                                    ((0x2aU 
                                                      != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                     | (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta 
                                                        >> 0x1fU))))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__1(vlSelf);
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
    vlSelf->delta_serial = VL_RAND_RESET_I(1);
    vlSelf->delta_output = VL_RAND_RESET_I(32);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta = VL_RAND_RESET_I(32);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta = VL_RAND_RESET_I(32);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254 = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__E = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__Exp = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_minus_EB_Carry = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EB_minus_EA_Carry = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_plus_EB = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_plus_EB_minus_254 = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1 = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3 = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa = VL_RAND_RESET_I(25);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_MAN = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
