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
    if ((1U & (~ (IData)(vlSelf->RSTL_I)))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data = 0x44434241U;
    }
    if (vlSelf->RSTL_I) {
        if ((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state))) {
            if (vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state = 1U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i = 1U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state))) {
            if ((0x1b1U > vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state = 1U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i = 1U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state = 0U;
            }
        }
        if (((((((((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                   | (1U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                  | (2U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                 | (3U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                | (4U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
               | (5U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
              | (6U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
             | (7U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i) 
                     & (~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before)))) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 1U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
                }
            } else if ((1U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 2U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 1U;
                }
            } else if ((2U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 3U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 2U;
                }
            } else if ((3U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 4U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 3U;
                }
            } else if ((4U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 5U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 4U;
                }
            } else if ((5U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 6U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 7U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 6U;
                }
            } else if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 8U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 7U;
            }
        } else if (((((((((8U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (9U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0xaU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0xbU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0xcU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0xdU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0xeU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0xfU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((8U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 9U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 8U;
                }
            } else if ((9U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xaU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 9U;
                }
            } else if ((0xaU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xbU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xaU;
                }
            } else if ((0xbU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xcU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xbU;
                }
            } else if ((0xcU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xdU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xcU;
                }
            } else if ((0xdU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xeU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xdU;
                }
            } else if ((0xeU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xfU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xeU;
                }
            } else if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x10U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0xfU;
            }
        } else if (((((((((0x10U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x11U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x12U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x13U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x14U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x15U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x16U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x17U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x10U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x11U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x10U;
                }
            } else if ((0x11U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x12U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x11U;
                }
            } else if ((0x12U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x13U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x12U;
                }
            } else if ((0x13U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x14U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x13U;
                }
            } else if ((0x14U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x15U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x14U;
                }
            } else if ((0x15U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x16U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x15U;
                }
            } else if ((0x16U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x17U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x16U;
                }
            } else if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x18U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x17U;
            }
        } else if (((((((((0x18U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x19U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x1aU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x1bU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x1cU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x1dU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x1eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x1fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x18U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x19U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x18U;
                }
            } else if ((0x19U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1aU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x19U;
                }
            } else if ((0x1aU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1bU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1aU;
                }
            } else if ((0x1bU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1cU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1bU;
                }
            } else if ((0x1cU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1dU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1cU;
                }
            } else if ((0x1dU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1eU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1dU;
                }
            } else if ((0x1eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1fU;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1eU;
                }
            } else if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x20U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x1fU;
            }
        } else if (((((((((0x20U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                          | (0x21U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                         | (0x22U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                        | (0x23U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                       | (0x24U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                      | (0x25U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                     | (0x26U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                    | (0x27U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))) {
            if ((0x20U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x21U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x20U;
                }
            } else if ((0x21U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x22U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x21U;
                }
            } else if ((0x22U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x23U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x22U;
                }
            } else if ((0x23U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x24U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x23U;
                }
            } else if ((0x24U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x25U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x24U;
                }
            } else if ((0x25U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x26U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x25U;
                }
            } else if ((0x26U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
                if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x27U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x26U;
                }
            } else if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x28U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x27U;
            }
        } else if ((0x28U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x29U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x28U;
            }
        } else if ((0x29U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2aU;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x29U;
            }
        } else if ((0x2aU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2bU;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2aU;
            }
        } else if ((0x2bU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) {
            if ((0x1bbU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0x2bU;
            }
        }
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before 
            = vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i;
        if ((4U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            if ((2U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
            } else if ((1U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                if ((0x1bbU > vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 5U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i = 1U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 4U;
                }
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            if ((1U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
                if ((0x1bbU > vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                        = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 3U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 4U;
                }
            } else if ((0x1bbU > vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT____Vlvbound_h8ebc310e__0 
                    = vlSelf->UART_RX_I;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                if ((0x5fU >= (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index))) {
                    vlSelf->fp32_rx_mac_tx__DOT__data[((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index) 
                                                       >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index)))) 
                            & vlSelf->fp32_rx_mac_tx__DOT__data[
                            ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index) 
                             >> 5U)]) | ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT____Vlvbound_h8ebc310e__0) 
                                         << (0x1fU 
                                             & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index))));
                }
                if ((7U > (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit))) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit)));
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit = 0U;
                    if ((0xbU > (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte))) {
                        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte)));
                        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 3U;
                    } else {
                        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte = 0U;
                        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 5U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state))) {
            if ((0xddU == vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt)) {
                if (vlSelf->UART_RX_I) {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
                } else {
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
                    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 2U;
                }
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt);
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 1U;
            }
        } else {
            vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt = 0U;
            vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit = 0U;
            if (vlSelf->UART_RX_I) {
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i = 0U;
                vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 1U;
            }
        }
    } else {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i = 1U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte = 0U;
        vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit = 0U;
    }
    vlSelf->TX_DATA_O = (1U & (((((((((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                      | (1U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (2U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (3U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                   | (4U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                  | (5U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                 | (6U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                | (7U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                ? ((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                   | ((1U != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                      & ((2U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                          ? vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data
                                          : ((3U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                              ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                 >> 1U)
                                              : ((4U 
                                                  == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                  ? 
                                                 (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                  >> 2U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 4U)
                                                    : 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 5U))))))))
                                : (((((((((8U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                          | (9U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0xaU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0xbU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                       | (0xcU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                      | (0xdU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                     | (0xeU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                    | (0xfU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                    ? ((8U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                        ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                           >> 6U) : 
                                       ((9U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                         ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                            >> 7U) : 
                                        ((0xaU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                         | ((0xbU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                            | ((0xcU 
                                                != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                               & ((0xdU 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                   ? 
                                                  (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 8U)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 9U)
                                                    : 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0xaU))))))))
                                    : (((((((((0x10U 
                                               == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                              | (0x11U 
                                                 == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                             | (0x12U 
                                                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0x13U 
                                               == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                           | (0x14U 
                                              == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                          | (0x15U 
                                             == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                         | (0x16U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                        | (0x17U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                        ? ((0x10U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                            ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                               >> 0xbU)
                                            : ((0x11U 
                                                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 0xcU)
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0xdU)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0xeU)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | (0x16U 
                                                         == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))))))))
                                        : (((((((((0x18U 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                  | (0x19U 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                 | (0x1aU 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x1bU 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                               | (0x1cU 
                                                  == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                              | (0x1dU 
                                                 == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                             | (0x1eU 
                                                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                            | (0x1fU 
                                               == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                            ? ((0x18U 
                                                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                ? (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                   >> 0x10U)
                                                : (
                                                   (0x19U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0x11U)
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0x12U)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                      ? 
                                                     (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                      >> 0x13U)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                       ? 
                                                      (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                        ? 
                                                       (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                        >> 0x15U)
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                         ? 
                                                        (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                         >> 0x16U)
                                                         : 
                                                        (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                         >> 0x17U))))))))
                                            : (((((
                                                   ((((0x20U 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | (0x21U 
                                                         == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                     | (0x22U 
                                                        == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                    | (0x23U 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                   | (0x24U 
                                                      == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                  | (0x25U 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                 | (0x26U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))) 
                                                | (0x27U 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)))
                                                ? (
                                                   (0x20U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                   | ((0x21U 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                      | ((0x22U 
                                                          != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                         & ((0x23U 
                                                             == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                             ? 
                                                            (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                             >> 0x18U)
                                                             : 
                                                            ((0x24U 
                                                              == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                              ? 
                                                             (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                              >> 0x19U)
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                               ? 
                                                              (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                               >> 0x1aU)
                                                               : 
                                                              ((0x26U 
                                                                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                                ? 
                                                               (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                                >> 0x1bU)
                                                                : 
                                                               (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                                >> 0x1cU))))))))
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                    ? 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                    >> 0x1dU)
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state))
                                                     ? 
                                                    (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                     >> 0x1eU)
                                                     : 
                                                    ((0x2aU 
                                                      != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state)) 
                                                     | (vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data 
                                                        >> 0x1fU))))))))));
    vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index 
        = (0x7fU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte) 
                     << 3U) + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->fp32_rx_mac_tx__DOT__result = vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
        = vlSelf->fp32_rx_mac_tx__DOT__data[2U];
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
        = vlSelf->fp32_rx_mac_tx__DOT__data[1U];
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
        = vlSelf->fp32_rx_mac_tx__DOT__data[0U];
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2 
        = ((IData)(((0U == (0x7f800000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)) 
                    & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))))
            ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)
            : (((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                 >> 0x17U))) << 0x17U) 
               | (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB 
        = (0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                     >> 0x17U) + (0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                  >> 0x17U)))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                     >> 0x17U)) > (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                            >> 0x17U)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
        = (0xffffffffffffULL & ((QData)((IData)(((IData)(
                                                         ((0U 
                                                           == 
                                                           (0x7f800000U 
                                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)) 
                                                          & (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))))
                                                  ? 
                                                 (0x7fffffU 
                                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                        >> 0x17U))) 
                                                   << 0x17U) 
                                                  | (0x7fffffU 
                                                     & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))))) 
                                * (QData)((IData)(((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x7f800000U 
                                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)) 
                                                            & (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))
                                                    ? 
                                                   (0x7fffffU 
                                                    & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)
                                                    : 
                                                   (((0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                          >> 0x17U))) 
                                                     << 0x17U) 
                                                    | (0x7fffffU 
                                                       & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)))))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA 
        = (0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                     >> 0x17U) + (0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                  >> 0x17U)))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position 
        = ((1U & (IData)((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                          >> 0x2fU))) ? 0x2fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                             >> 0x2eU)))
                                                  ? 0x2eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                              >> 0x2dU)))
                                                   ? 0x2dU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                               >> 0x2cU)))
                                                    ? 0x2cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                >> 0x2bU)))
                                                     ? 0x2bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                 >> 0x2aU)))
                                                      ? 0x2aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                  >> 0x29U)))
                                                       ? 0x29U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                   >> 0x28U)))
                                                        ? 0x28U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                    >> 0x27U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                     >> 0x26U)))
                                                          ? 0x26U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                      >> 0x25U)))
                                                           ? 0x25U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                       >> 0x24U)))
                                                            ? 0x24U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                        >> 0x23U)))
                                                             ? 0x23U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                         >> 0x22U)))
                                                              ? 0x22U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                          >> 0x21U)))
                                                               ? 0x21U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                           >> 0x20U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                            >> 0x1fU)))
                                                                 ? 0x1fU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                             >> 0x1eU)))
                                                                  ? 0x1eU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                              >> 0x1dU)))
                                                                   ? 0x1dU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                               >> 0x1cU)))
                                                                    ? 0x1cU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x1bU)))
                                                                     ? 0x1bU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x1aU)))
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x19U)))
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x18U)))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x17U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x16U)))
                                                                          ? 0x16U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x15U)))
                                                                           ? 0x15U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x14U)))
                                                                            ? 0x14U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x13U)))
                                                                             ? 0x13U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x12U)))
                                                                              ? 0x12U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x11U)))
                                                                               ? 0x11U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x10U)))
                                                                                ? 0x10U
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xfU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xeU)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xdU)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xcU)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xbU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xaU)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 9U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 8U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 7U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 5U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 4U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 3U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 2U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 1U)))
                                                                                 ? 1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB 
        = (0x1ffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA) 
                     + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
        = ((0x2fU >= (0xffU & ((IData)(0x2eU) - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))
            ? (0xffffffffffffULL & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                    << (0xffU & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))
            : 0ULL);
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man3 
        = (0xffffffffffffULL & ((0x100U & ((IData)(0x80U) 
                                           + (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))
                                 ? vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original
                                 : ((0x2fU >= (0xffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                     ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                        >> (0xffU & 
                                            ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                     : 0ULL)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB 
        = (0x80U < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB 
        = (0x80U > (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_EEQ 
        = (1U & (~ ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB) 
                    ^ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB))));
    if (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB) {
        if ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 1U;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 1U;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & ((IData)(1U) + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU))));
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                = (0xffffffffffffULL & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                        >> 1U));
        } else if ((0x2eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 2U;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 2U;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                            - (IData)(0x7fU)));
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                = (0xffffffffffffULL & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original);
        } else {
            if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                 < (0x1ffU & ((IData)(0x80U) + (0xffU 
                                                & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 3U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                    = (0xffffffffffffULL & (((0xffU 
                                              & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                             >= (0xffU 
                                                 & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    - (IData)(0x80U))))
                                             ? (((0xffU 
                                                  & ((IData)(0x2eU) 
                                                     - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x30U) 
                                                     + 
                                                     ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x80U)))))
                                                 ? 0ULL
                                                 : 
                                                ((0x2fU 
                                                  >= 
                                                  (0xffU 
                                                   & (((IData)(0x2eU) 
                                                       - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                      - 
                                                      ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x80U)))))
                                                  ? 
                                                 (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                                  >> 
                                                  (0xffU 
                                                   & (((IData)(0x2eU) 
                                                       - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                      - 
                                                      ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x80U)))))
                                                  : 0ULL))
                                             : ((0x2fU 
                                                 >= 
                                                 (0x1ffU 
                                                  & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))))
                                                 ? 
                                                (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                                 >> 
                                                 (0x1ffU 
                                                  & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))))
                                                 : 0ULL)));
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 4U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                    = (0xffffffffffffULL & ((0x2fU 
                                             >= (0xffU 
                                                 & ((IData)(0x2eU) 
                                                    - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))
                                             ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                                << 
                                                (0xffU 
                                                 & ((IData)(0x2eU) 
                                                    - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))
                                             : 0ULL));
            }
            if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                 > (0x1ffU & ((IData)(0x80U) + (0xffU 
                                                & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 3U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                    = (0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                 - (IData)(0x7fU)) 
                                - ((IData)(0x2eU) - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))));
            } else if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                        == (0x1ffU & ((IData)(0x80U) 
                                      + (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 4U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                    = (0xffU & 1U);
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 5U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                    = (0xffU & 0U);
            }
        }
    } else if (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB) {
        if ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 5U;
            if ((1U == (0xffU & ((IData)(0x80U) + (0x1ffU 
                                                   & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 6U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                    = (0xffU & 1U);
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 7U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                    = (0xffU & 0U);
            }
        } else {
            if ((0x2eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 6U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 8U;
            } else {
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 7U;
                vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 9U;
            }
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & 0U);
        }
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man3);
    } else if ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 8U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 0xaU;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
            = (0xffU & ((IData)(1U) + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU))));
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                    >> 1U));
    } else {
        if ((0x2eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 9U;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 0xbU;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                            - (IData)(0x7fU)));
        } else {
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN = 0xaU;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP = 0xcU;
            vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & 0U);
        }
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original);
    }
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
        = ((0x7fffffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
           | (0x80000000U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                             ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
        = ((0x80000000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
           | ((((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA)) 
                & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))) 
               | ((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB)) 
                  & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))
               ? 0x7fffffffU : (((0xfeU < ((0x100U 
                                            & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB)
                                                 ? 
                                                ((0x2fU 
                                                  == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                  ? 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x7fU))) 
                                                     >> 8U))
                                                  : 
                                                 ((0x2eU 
                                                   == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                   ? 
                                                  (1U 
                                                   & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x7fU)) 
                                                      >> 8U))
                                                   : 
                                                  (1U 
                                                   & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       > 
                                                       (0x1ffU 
                                                        & ((IData)(0x80U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x2eU) 
                                                               - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                      & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                           - (IData)(0x7fU)) 
                                                          - 
                                                          (0xffU 
                                                           & ((IData)(0x2eU) 
                                                              - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                         >> 8U)))))
                                                 : 
                                                ((~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB)) 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                     ? 
                                                    (1U 
                                                     & (((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU))) 
                                                        >> 8U))
                                                     : (IData)(
                                                               ((0x2eU 
                                                                 == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                                & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                                    - (IData)(0x7fU)) 
                                                                   >> 8U)))))) 
                                               << 8U)) 
                                           | (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))
                                  ? 1U : 0U) ? 0x7f800000U
                                 : ((0x7f800000U & 
                                     (((((IData)((0xffffffULL 
                                                  & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                     >> 0x16U))) 
                                         & (0U != (0x3fffffU 
                                                   & (IData)(
                                                             (0x3fffffffffffULL 
                                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))) 
                                        | ((IData)(
                                                   (0x7fffffULL 
                                                    & (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)))) 
                                           & (0U == 
                                              (0x3fffffU 
                                               & (IData)(
                                                         (0x3fffffffffffULL 
                                                          & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))))
                                        ? ((1U & (IData)(
                                                         (0x1ffffffULL 
                                                          & ((1ULL 
                                                              + 
                                                              (0x7fffffULL 
                                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                  >> 0x17U))) 
                                                             >> 0x17U))))
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp))
                                            : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp))
                                        : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)) 
                                      << 0x17U)) | 
                                    (0x7fffffU & ((
                                                   ((IData)(
                                                            (0xffffffULL 
                                                             & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                >> 0x16U))) 
                                                    & (0U 
                                                       != 
                                                       (0x3fffffU 
                                                        & (IData)(
                                                                  (0x3fffffffffffULL 
                                                                   & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))) 
                                                   | ((IData)(
                                                              (0x7fffffULL 
                                                               & (0xc00000ULL 
                                                                  == 
                                                                  (0xc00000ULL 
                                                                   & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)))) 
                                                      & (0U 
                                                         == 
                                                         (0x3fffffU 
                                                          & (IData)(
                                                                    (0x3fffffffffffULL 
                                                                     & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (0x1ffffffULL 
                                                               & ((1ULL 
                                                                   + 
                                                                   (0x7fffffULL 
                                                                    & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                       >> 0x17U))) 
                                                                  >> 0x17U))))
                                                    ? (IData)(
                                                              (0x7fffffffffffULL 
                                                               & ((1ULL 
                                                                   + 
                                                                   (0x7fffffULL 
                                                                    & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                       >> 0x17U))) 
                                                                  >> 1U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (0x7fffffULL 
                                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                  >> 0x17U)))))
                                                   : (IData)(
                                                             (0x7fffffULL 
                                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                 >> 0x17U)))))))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1 
        = ((IData)(((0U == (0x7f800000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)) 
                    & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output))))
            ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)
            : (((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                 >> 0x17U))) << 0x17U) 
               | (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig 
        = ((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
           > (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                     >> 0x17U)) > (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                            >> 0x17U)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E 
        = (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                     ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                        >> 0x17U) : (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                     >> 0x17U)));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal 
        = (1U & (~ (((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                               >> 0x17U)) < (0xffU 
                                             & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                >> 0x17U))) 
                    | (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig))));
    if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig) 
         | ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal) 
            & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig)))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa 
            = vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa 
            = vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2;
    } else {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa 
            = vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa 
            = vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1;
    }
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3 
        = ((0x17U >= (0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                 ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                     >> 0x17U) - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                  >> 0x17U))
                                 : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                     >> 0x17U) - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                  >> 0x17U))) 
                               - ((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                   >> 0x17U))) 
                                  ^ (0U == (0xffU & 
                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                             >> 0x17U)))))))
            ? (0xffffffU & ((((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                            >> 0x17U))))
                              ? 0xffffffU : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa) 
                            >> (0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                           ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x17U) 
                                              - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                 >> 0x17U))
                                           : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x17U) 
                                              - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                 >> 0x17U))) 
                                         - ((0U == 
                                             (0xffU 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                 >> 0x17U))) 
                                            ^ (0U == 
                                               (0xffU 
                                                & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                   >> 0x17U))))))))
            : 0U);
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
        = (0x1ffffffU & ((0xffffffU & (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                         ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                        >> 0x1fU) + 
                                       (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                          ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                         >> 0x1fU) ? 
                                        (~ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)
                                         : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3))) 
                         + vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position 
        = ((0x800000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
            ? 0U : ((0x400000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                     ? 1U : ((0x200000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                              ? 2U : ((0x100000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                       ? 3U : ((0x80000U 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                ? 4U
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                     ? 6U
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                      ? 7U
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                       ? 8U
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                        ? 9U
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                         ? 0xaU
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                          ? 0xbU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                           ? 0xcU
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                            ? 0xdU
                                                            : 
                                                           ((0x200U 
                                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                             ? 0xeU
                                                             : 
                                                            ((0x100U 
                                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                              ? 0xfU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                               ? 0x10U
                                                               : 
                                                              ((0x40U 
                                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                ? 0x11U
                                                                : 
                                                               ((0x20U 
                                                                 & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x10U 
                                                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((8U 
                                                                   & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((4U 
                                                                    & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((2U 
                                                                     & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                                     ? 0x16U
                                                                     : 0x17U)))))))))))))))))))))));
    if ((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
           >> 0x1fU) == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                         >> 0x1fU)) & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                       >> 0x18U))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 1U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)));
    } else if ((0x800000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 2U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent 
            = (0xffU & ((0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E))
                         ? 1U : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)));
    } else if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 3U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent 
            = (0xffU & 1U);
    } else if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                > (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))) {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 4U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent 
            = (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                        - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)));
    } else {
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP = 5U;
        vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent 
            = (0xffU & 0U);
    }
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_MAN 
        = (((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
               >> 0x1fU) == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                             >> 0x1fU)) & (0U != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent))) 
            & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
               >> 0x18U)) ? 1U : ((0x800000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                   ? 2U : (((IData)(
                                                    (0U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                            & (0U == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                            ? 3U : 
                                           (((IData)(
                                                     (0U 
                                                      == 
                                                      (0x1800000U 
                                                       & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                             & (0U 
                                                != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                             ? 4U : 5U))));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal 
        = ((0x7fffffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal) 
           | ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig) 
                | ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal) 
                   & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig)))
                ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                   >> 0x1fU) : (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                >> 0x1fU)) << 0x1fU));
    vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal 
        = ((0x80000000U & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal) 
           | (((IData)(((0x7f800000U == (0x7f800000U 
                                         & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)) 
                        & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)))) 
               | (IData)(((0x7f800000U == (0x7f800000U 
                                           & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)) 
                          & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)))))
               ? 0x7fffffffU : ((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                   >> 0x1fU) == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                 >> 0x1fU)) 
                                 & (0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                 ? 0x7f800000U : (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent) 
                                                   << 0x17U) 
                                                  | (0x7fffffU 
                                                     & (((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                            >> 0x1fU) 
                                                           == 
                                                           (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                            >> 0x1fU)) 
                                                          & (0U 
                                                             != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent))) 
                                                         & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                            >> 0x18U))
                                                         ? 
                                                        (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                         >> 1U)
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                          ? vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa
                                                          : 
                                                         (((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x1800000U 
                                                                     & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                                           & (0U 
                                                              == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                                           ? 
                                                          ((0x18U 
                                                            >= 
                                                            (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                              < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                              ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                              : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                                            ? 
                                                           (0x1ffffffU 
                                                            & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                               << 
                                                               (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                                 < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                                 ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                                 : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                                            : 0U)
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                                            & (0U 
                                                               != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                                            ? 
                                                           ((0x18U 
                                                             >= 
                                                             (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                               < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                               ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                               : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                                             ? 
                                                            (0x1ffffffU 
                                                             & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                                << 
                                                                (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                                  < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                                  ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                                  : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                                             : 0U)
                                                            : 0U)))))))));
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
    if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK_I = vlSelf->CLK_I;
    vlSelf->__Vclklast__TOP__RSTL_I = vlSelf->RSTL_I;
    vlSelf->__Vclklast__TOP__fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i 
        = vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i;
    vlSelf->__Vclklast__TOP__fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i 
        = vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i;
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
