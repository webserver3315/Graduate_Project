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
    CData/*2:0*/ __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state;
    IData/*31:0*/ __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt;
    // Body
    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt 
        = vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt;
    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state 
        = vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state;
    if ((1U & (~ (IData)(vlSelf->RSTL_I)))) {
        vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data = 0U;
    }
    if (vlSelf->RSTL_I) {
        if (((((((((0U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                   | (1U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                  | (2U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                 | (3U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                | (4U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
               | (5U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
              | (6U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
             | (7U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if (vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 1U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
                }
            } else if ((1U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 2U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 1U;
                }
            } else if ((2U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 3U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 2U;
                }
            } else if ((3U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 4U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 3U;
                }
            } else if ((4U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 5U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 4U;
                }
            } else if ((5U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 6U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 7U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 6U;
                }
            } else if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 8U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 7U;
            }
        } else if (((((((((8U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (9U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0xaU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0xbU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0xcU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0xdU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0xeU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0xfU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((8U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 9U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 8U;
                }
            } else if ((9U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xaU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 9U;
                }
            } else if ((0xaU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xbU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xaU;
                }
            } else if ((0xbU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xcU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xbU;
                }
            } else if ((0xcU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xdU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xcU;
                }
            } else if ((0xdU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xeU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xdU;
                }
            } else if ((0xeU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xfU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xeU;
                }
            } else if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x10U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0xfU;
            }
        } else if (((((((((0x10U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x11U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x12U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x13U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x14U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x15U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x16U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x17U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x10U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x11U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x10U;
                }
            } else if ((0x11U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x12U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x11U;
                }
            } else if ((0x12U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x13U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x12U;
                }
            } else if ((0x13U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x14U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x13U;
                }
            } else if ((0x14U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x15U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x14U;
                }
            } else if ((0x15U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x16U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x15U;
                }
            } else if ((0x16U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x17U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x16U;
                }
            } else if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x18U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x17U;
            }
        } else if (((((((((0x18U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x19U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x1aU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x1bU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x1cU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x1dU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x1eU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x1fU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x18U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x19U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x18U;
                }
            } else if ((0x19U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1aU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x19U;
                }
            } else if ((0x1aU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1bU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1aU;
                }
            } else if ((0x1bU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1cU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1bU;
                }
            } else if ((0x1cU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1dU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1cU;
                }
            } else if ((0x1dU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1eU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1dU;
                }
            } else if ((0x1eU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1fU;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1eU;
                }
            } else if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x20U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1fU;
            }
        } else if (((((((((0x20U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x21U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x22U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x23U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x24U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x25U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x26U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x27U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x20U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x21U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x20U;
                }
            } else if ((0x21U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x22U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x21U;
                }
            } else if ((0x22U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x23U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x22U;
                }
            } else if ((0x23U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x24U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x23U;
                }
            } else if ((0x24U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x25U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x24U;
                }
            } else if ((0x25U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x26U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x25U;
                }
            } else if ((0x26U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x27U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x26U;
                }
            } else if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x28U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x27U;
            }
        } else if ((0x28U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x29U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x28U;
            }
        } else if ((0x29U == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2aU;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x29U;
            }
        } else if ((0x2aU == (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2bU;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2aU;
            }
        }
        if ((4U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            if ((2U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
            } else if ((1U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            if ((1U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                if ((0x1bbU > vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 3U;
                    vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                } else {
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 4U;
                    vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 1U;
                }
            } else {
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                if ((0x1bbU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
                } else {
                    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT____Vlvbound_h836f5cac__0 
                        = vlSelf->UART_RX_I;
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    if ((0x5fU >= (0x7fU & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx)))) {
                        vlSelf->fp32_uart_rx_tx__DOT__data[(3U 
                                                            & ((IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx) 
                                                               >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx)))) 
                                & vlSelf->fp32_uart_rx_tx__DOT__data[
                                (3U & ((IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx) 
                                       >> 5U))]) | 
                               ((IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT____Vlvbound_h836f5cac__0) 
                                << (0x1fU & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx))));
                    }
                    if ((0x5fU > (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx))) {
                        vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx)));
                        __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
                    } else {
                        vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx = 0U;
                        __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 3U;
                        vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
            if ((0xddU == vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                if (vlSelf->UART_RX_I) {
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
                    vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 1U;
                } else {
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
                    vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
                }
            } else {
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 1U;
            }
        } else {
            __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
            vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx = 0U;
            vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 1U;
            if (vlSelf->UART_RX_I) {
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
            } else {
                __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 1U;
                vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
            }
        }
    } else {
        vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
        vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
        __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
        vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O = 0U;
    }
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
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state 
        = __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state;
    vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt 
        = __Vdly__fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->CLK_I) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK_I))) 
         | ((~ (IData)(vlSelf->RSTL_I)) & (IData)(vlSelf->__Vclklast__TOP__RSTL_I)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK_I = vlSelf->CLK_I;
    vlSelf->__Vclklast__TOP__RSTL_I = vlSelf->RSTL_I;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK_I & 0xfeU))) {
        Verilated::overWidthError("CLK_I");}
    if (VL_UNLIKELY((vlSelf->RSTL_I & 0xfeU))) {
        Verilated::overWidthError("RSTL_I");}
    if (VL_UNLIKELY((vlSelf->UART_RX_I & 0xfeU))) {
        Verilated::overWidthError("UART_RX_I");}
}
#endif  // VL_DEBUG
