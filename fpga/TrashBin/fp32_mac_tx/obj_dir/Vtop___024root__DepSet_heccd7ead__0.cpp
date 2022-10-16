// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h8147b915__0;
    // Body
    if ((0x1b1U == vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count)) {
        vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count = 0U;
        __Vtemp_h8147b915__0 = (((((((((0U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                       | (1U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                      | (2U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (3U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (4U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                   | (5U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                  | (6U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                 | (7U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                 ? ((0U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                     ? 1U : ((1U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                              ? 2U : 
                                             ((2U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                               ? 3U
                                               : ((3U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 7U
                                                      : 8U)))))))
                                 : (((((((((8U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                           | (9U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                          | (0xaU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0xbU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0xcU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                       | (0xdU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                      | (0xeU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (0xfU == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                     ? ((8U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                         ? 9U : ((9U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 0xaU
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 0xbU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 0xcU
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 0xdU
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 0xeU
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 0xfU
                                                       : 0x10U)))))))
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
                                         | (0x17U == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state)))
                                         ? ((0x10U 
                                             == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                             ? 0x11U
                                             : ((0x11U 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                 ? 0x12U
                                                 : 
                                                ((0x12U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 0x13U
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 0x14U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 0x15U
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 0x16U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 0x17U
                                                      : 0x18U)))))))
                                         : ((((((((
                                                   (0x18U 
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
                                                 ? 0x19U
                                                 : 
                                                ((0x19U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 0x1aU
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 0x1bU
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 0x1eU
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 0x1fU
                                                       : 0x20U)))))))
                                             : ((((
                                                   (((((0x20U 
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
                                                  ? 0x21U
                                                  : 
                                                 ((0x21U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 0x22U
                                                   : 
                                                  ((0x22U 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 0x23U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 0x24U
                                                     : 
                                                    ((0x24U 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 0x25U
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 0x26U
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                        ? 0x27U
                                                        : 0x28U)))))))
                                                 : 
                                                ((0x28U 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 0x29U
                                                  : 
                                                 ((0x29U 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 0x2aU
                                                   : 
                                                  ((0x2aU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x2bU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 0U
                                                     : 1U)))))))));
        vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state 
            = __Vtemp_h8147b915__0;
    } else {
        vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count 
            = ((IData)(1U) + vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count);
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
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
}
#endif  // VL_DEBUG
