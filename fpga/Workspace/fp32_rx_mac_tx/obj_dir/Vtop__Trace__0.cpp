// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i));
        bufp->chgBit(oldp+1,(vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i));
        bufp->chgWData(oldp+2,(vlSelf->fp32_rx_mac_tx__DOT__data),96);
        bufp->chgIData(oldp+5,(vlSelf->fp32_rx_mac_tx__DOT__data[0U]),32);
        bufp->chgIData(oldp+6,(vlSelf->fp32_rx_mac_tx__DOT__data[1U]),32);
        bufp->chgIData(oldp+7,(vlSelf->fp32_rx_mac_tx__DOT__data[2U]),32);
        bufp->chgCData(oldp+8,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state),4);
        bufp->chgIData(oldp+9,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt),32);
        bufp->chgIData(oldp+10,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt),32);
        bufp->chgCData(oldp+11,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state),3);
        bufp->chgCData(oldp+12,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte),7);
        bufp->chgCData(oldp+13,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit),7);
        bufp->chgCData(oldp+14,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index),7);
        bufp->chgCData(oldp+15,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state),8);
        bufp->chgIData(oldp+16,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data),32);
        bufp->chgIData(oldp+17,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt),32);
        bufp->chgBit(oldp+18,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+19,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal),32);
        bufp->chgIData(oldp+20,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal),32);
        bufp->chgIData(oldp+21,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal),32);
        bufp->chgIData(oldp+22,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output),32);
        bufp->chgIData(oldp+23,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal),32);
        bufp->chgCData(oldp+24,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+25,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+26,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E),8);
        bufp->chgCData(oldp+27,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                           >> 0x17U) 
                                          - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                             >> 0x17U)))),8);
        bufp->chgCData(oldp+28,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                           >> 0x17U) 
                                          - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                             >> 0x17U)))),8);
        bufp->chgCData(oldp+29,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                           ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x17U) 
                                              - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                 >> 0x17U))
                                           : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x17U) 
                                              - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                 >> 0x17U))))),8);
        bufp->chgCData(oldp+30,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
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
                                             ^ (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                    >> 0x17U))))))),8);
        bufp->chgBit(oldp+31,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+32,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+33,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                  >> 0x17U)))));
        bufp->chgBit(oldp+34,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                  >> 0x17U)))));
        bufp->chgBit(oldp+35,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig));
        bufp->chgBit(oldp+36,(((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                         >> 0x17U)) 
                               < (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                           >> 0x17U)))));
        bufp->chgBit(oldp+37,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal));
        bufp->chgBit(oldp+38,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                               >> 0x1fU)));
        bufp->chgBit(oldp+39,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                               >> 0x1fU)));
        bufp->chgIData(oldp+40,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)),23);
        bufp->chgIData(oldp+41,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)),23);
        bufp->chgIData(oldp+42,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output))),24);
        bufp->chgIData(oldp+43,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)),24);
        bufp->chgIData(oldp+44,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))),24);
        bufp->chgIData(oldp+45,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)),24);
        bufp->chgIData(oldp+46,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1),24);
        bufp->chgIData(oldp+47,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2),24);
        bufp->chgBit(oldp+48,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
                               < (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
        bufp->chgBit(oldp+49,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig));
        bufp->chgBit(oldp+50,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
                               == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
        bufp->chgBit(oldp+51,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output))));
        bufp->chgBit(oldp+52,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
        bufp->chgIData(oldp+53,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa),24);
        bufp->chgIData(oldp+54,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa),24);
        bufp->chgIData(oldp+55,((((0xffU == (0xffU 
                                             & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                >> 0x17U))) 
                                  | (0xffU == (0xffU 
                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                  >> 0x17U))))
                                  ? 0xffffffU : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa)),24);
        bufp->chgIData(oldp+56,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3),24);
        bufp->chgIData(oldp+57,((0xffffffU & (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                               >> 0x1fU)
                                               ? (~ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
        bufp->chgIData(oldp+58,((0xffffffU & (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                               >> 0x1fU) 
                                              + (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                   ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                                  >> 0x1fU)
                                                  ? 
                                                 (~ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)
                                                  : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
        bufp->chgIData(oldp+59,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa),25);
        bufp->chgCData(oldp+60,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position),8);
        bufp->chgBit(oldp+61,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x18U))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x17U))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x16U))));
        bufp->chgIData(oldp+64,((0x1ffffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U))),25);
        bufp->chgIData(oldp+65,(((0x18U >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x1ffffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                   << 
                                                   (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),25);
        bufp->chgIData(oldp+66,((0x1ffffffU & (((0x18U 
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
                                               >> 1U))),25);
        bufp->chgIData(oldp+67,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)),23);
        bufp->chgIData(oldp+68,((0x7fffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                              >> 1U))),23);
        bufp->chgIData(oldp+69,(((0x18U >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x7fffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                  << 
                                                  (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),23);
        bufp->chgIData(oldp+70,((0x7fffffU & (((0x18U 
                                                >= 
                                                (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                                ? (0x1ffffffU 
                                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                      << 
                                                      (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                                : 0U) 
                                              >> 1U))),23);
        bufp->chgCData(oldp+71,((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                  < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                  ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                  : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))),8);
        bufp->chgIData(oldp+72,(((0x17U >= (0xffU & 
                                            ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                                ? (
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                    >> 0x17U) 
                                                   - 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                    >> 0x17U))
                                                : (
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                    >> 0x17U) 
                                                   - 
                                                   (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                    >> 0x17U))) 
                                              - ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                      >> 0x17U))) 
                                                 ^ 
                                                 (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                      >> 0x17U))))) 
                                             - (IData)(1U))))
                                  ? (0xffffffU & ((IData)(1U) 
                                                  << 
                                                  (0xffU 
                                                   & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                                         ? 
                                                        ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                          >> 0x17U))
                                                         : 
                                                        ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                          >> 0x17U))) 
                                                       - 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                             >> 0x17U))) 
                                                        ^ 
                                                        (0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                             >> 0x17U))))) 
                                                      - (IData)(1U)))))
                                  : 0U)),24);
        bufp->chgBit(oldp+73,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig) 
                                      | ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal) 
                                         & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig)))
                                      ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                         >> 0x1fU) : 
                                     (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                      >> 0x1fU)))));
        bufp->chgCData(oldp+74,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent),8);
        bufp->chgIData(oldp+75,((0x7fffffU & (((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                  >> 0x1fU) 
                                                 == 
                                                 (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                  >> 0x1fU)) 
                                                & (0U 
                                                   != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent))) 
                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                  >> 0x18U))
                                               ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                  >> 1U)
                                               : ((0x800000U 
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
                                                     : 0U)))))),23);
        bufp->chgCData(oldp+76,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+77,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgBit(oldp+78,(((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)))) 
                               | (IData)(((0x7f800000U 
                                           == (0x7f800000U 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)) 
                                          & (0U != 
                                             (0x7fffffU 
                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)))))));
        bufp->chgBit(oldp+79,((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                 >> 0x1fU) == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x1fU)) 
                               & (0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))));
        bufp->chgCData(oldp+80,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+81,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+82,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA),8);
        bufp->chgCData(oldp+83,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB),8);
        bufp->chgCData(oldp+84,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig)
                                           ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                              >> 0x17U)
                                           : (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                              >> 0x17U)))),8);
        bufp->chgCData(oldp+85,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                           >> 0x17U) 
                                          - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                             >> 0x17U)))),8);
        bufp->chgCData(oldp+86,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                           >> 0x17U) 
                                          - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                             >> 0x17U)))),8);
        bufp->chgCData(oldp+87,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig)
                                            ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                >> 0x17U) 
                                               - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                  >> 0x17U))
                                            : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                >> 0x17U) 
                                               - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                  >> 0x17U))) 
                                          - ((0U == 
                                              (0xffU 
                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                  >> 0x17U))) 
                                             ^ (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                    >> 0x17U))))))),8);
        bufp->chgSData(oldp+88,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB),9);
        bufp->chgBit(oldp+89,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+90,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+91,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                  >> 0x17U)))));
        bufp->chgBit(oldp+92,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                  >> 0x17U)))));
        bufp->chgBit(oldp+93,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig));
        bufp->chgBit(oldp+94,(((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                         >> 0x17U)) 
                               < (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                           >> 0x17U)))));
        bufp->chgBit(oldp+95,((1U & (~ (((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                   >> 0x17U)) 
                                         < (0xffU & 
                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                             >> 0x17U))) 
                                        | (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig))))));
        bufp->chgBit(oldp+96,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                               >> 0x1fU)));
        bufp->chgBit(oldp+97,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                               >> 0x1fU)));
        bufp->chgBit(oldp+98,(((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal) 
                               >> 0x1fU)));
        bufp->chgIData(oldp+99,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)),23);
        bufp->chgIData(oldp+100,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)),23);
        bufp->chgIData(oldp+101,((((0U != (0xffU & 
                                           (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))),24);
        bufp->chgIData(oldp+102,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)),24);
        bufp->chgIData(oldp+103,((((0U != (0xffU & 
                                           (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))),24);
        bufp->chgIData(oldp+104,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)),24);
        bufp->chgIData(oldp+105,(((IData)(((0U == (0x7f800000U 
                                                   & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))))
                                   ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)
                                   : (((0U != (0xffU 
                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                  >> 0x17U))) 
                                       << 0x17U) | 
                                      (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)))),24);
        bufp->chgIData(oldp+106,(((IData)(((0U == (0x7f800000U 
                                                   & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))
                                   ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)
                                   : (((0U != (0xffU 
                                               & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                  >> 0x17U))) 
                                       << 0x17U) | 
                                      (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)))),24);
        bufp->chgBit(oldp+107,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                                < (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
        bufp->chgBit(oldp+108,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                                > (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
        bufp->chgBit(oldp+109,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                                == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
        bufp->chgBit(oldp+110,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))));
        bufp->chgBit(oldp+111,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
        bufp->chgQData(oldp+112,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original),48);
        bufp->chgCData(oldp+114,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position),8);
        bufp->chgCData(oldp+115,((0xffU & ((IData)(0x2eU) 
                                           - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))),8);
        bufp->chgCData(oldp+116,((0xffU & ((IData)(0x80U) 
                                           + (0x1ffU 
                                              & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
        bufp->chgCData(oldp+117,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x80U)))),8);
        bufp->chgBit(oldp+118,((1U & (((IData)(0x80U) 
                                       + (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                      >> 8U))));
        bufp->chgBit(oldp+119,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x80U)) 
                                      >> 8U))));
        bufp->chgQData(oldp+120,((0xffffffffffffULL 
                                  & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                     >> 1U))),48);
        bufp->chgQData(oldp+122,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man3),48);
        bufp->chgQData(oldp+124,(((0x2fU >= (0xffU 
                                             & ((IData)(0x2eU) 
                                                - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))
                                   ? (0xffffffffffffULL 
                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                         << (0xffU 
                                             & ((IData)(0x2eU) 
                                                - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))
                                   : 0ULL)),48);
        bufp->chgQData(oldp+126,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp),48);
        bufp->chgQData(oldp+128,((((0xffU & ((IData)(0x2eU) 
                                             - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                   >= (0xffU & ((IData)(0x30U) 
                                                + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x80U)))))
                                   ? 0ULL : ((0x2fU 
                                              >= (0xffU 
                                                  & (((IData)(0x2eU) 
                                                      - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                     - 
                                                     ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x80U)))))
                                              ? (0xffffffffffffULL 
                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                                    >> 
                                                    (0xffU 
                                                     & (((IData)(0x2eU) 
                                                         - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                        - 
                                                        ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x80U))))))
                                              : 0ULL))),48);
        bufp->chgQData(oldp+130,(((0x2fU >= (0x1ffU 
                                             & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x7fU))))
                                   ? (0xffffffffffffULL 
                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                         >> (0x1ffU 
                                             & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x7fU)))))
                                   : 0ULL)),48);
        bufp->chgQData(oldp+132,((0xffffffffffffULL 
                                  & (((0xffU & ((IData)(0x2eU) 
                                                - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                      >= (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x80U))))
                                      ? (((0xffU & 
                                           ((IData)(0x2eU) 
                                            - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                          >= (0xffU 
                                              & ((IData)(0x30U) 
                                                 + 
                                                 ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x80U)))))
                                          ? 0ULL : 
                                         ((0x2fU >= 
                                           (0xffU & 
                                            (((IData)(0x2eU) 
                                              - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                             - ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x80U)))))
                                           ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                              >> (0xffU 
                                                  & (((IData)(0x2eU) 
                                                      - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                     - 
                                                     ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x80U)))))
                                           : 0ULL))
                                      : ((0x2fU >= 
                                          (0x1ffU & 
                                           ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                            - (IData)(0x7fU))))
                                          ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                             >> (0x1ffU 
                                                 & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    - (IData)(0x7fU))))
                                          : 0ULL)))),48);
        bufp->chgQData(oldp+134,(((0x2fU >= (0xffU 
                                             & ((IData)(0x80U) 
                                                + (0x1ffU 
                                                   & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                   ? (0xffffffffffffULL 
                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                         >> (0xffU 
                                             & ((IData)(0x80U) 
                                                + (0x1ffU 
                                                   & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB)))))))
                                   : 0ULL)),48);
        bufp->chgCData(oldp+136,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU)))),8);
        bufp->chgCData(oldp+137,((0xffU & ((IData)(1U) 
                                           + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                              - (IData)(0x7fU))))),8);
        bufp->chgCData(oldp+138,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                            - (IData)(0x7fU)) 
                                           - ((IData)(0x2eU) 
                                              - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))),8);
        bufp->chgQData(oldp+139,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man),48);
        bufp->chgCData(oldp+141,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp),8);
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB)
                                       ? ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                           ? (1U & 
                                              (((IData)(1U) 
                                                + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))) 
                                               >> 8U))
                                           : ((0x2eU 
                                               == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                               ? (1U 
                                                  & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU)) 
                                                     >> 8U))
                                               : (1U 
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
                                       : ((~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB)) 
                                          & ((0x2fU 
                                              == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                              ? (1U 
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
                                                            >> 8U)))))))));
        bufp->chgBit(oldp+143,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)) 
                                      >> 8U))));
        bufp->chgBit(oldp+144,((1U & (((IData)(1U) 
                                       + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU))) 
                                      >> 8U))));
        bufp->chgBit(oldp+145,((1U & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)) 
                                       - (0xffU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                      >> 8U))));
        bufp->chgCData(oldp+146,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+147,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgBit(oldp+148,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB));
        bufp->chgBit(oldp+149,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB));
        bufp->chgBit(oldp+150,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_EEQ));
        bufp->chgQData(oldp+151,((0x3fffffffffffULL 
                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)),48);
        bufp->chgQData(oldp+153,((0x7fffffULL & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                 >> 0x17U))),48);
        bufp->chgQData(oldp+155,((0xffffffffffffULL 
                                  & (1ULL + (0x7fffffULL 
                                             & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))))),48);
        bufp->chgQData(oldp+157,((0x7fffffffffffULL 
                                  & ((1ULL + (0x7fffffULL 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                 >> 0x17U))) 
                                     >> 1U))),48);
        bufp->chgBit(oldp+159,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+160,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+161,((0U != (0x3fffffU & (IData)(
                                                           (0x3fffffffffffULL 
                                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))));
        bufp->chgSData(oldp+162,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))),9);
        bufp->chgIData(oldp+163,((0x7fffffU & ((((IData)(
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
                                                ? (
                                                   (1U 
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
                                                              >> 0x17U)))))),23);
        bufp->chgCData(oldp+164,((0xffU & ((((IData)(
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
                                            ? ((1U 
                                                & (IData)(
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
                                            : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))),8);
        bufp->chgBit(oldp+165,((((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA)) 
                                 & (0U != (0x7fffffU 
                                           & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))) 
                                | ((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))));
        bufp->chgBit(oldp+166,(((0xfeU < ((0x100U & 
                                           (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB)
                                              ? ((0x2fU 
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
                                              : ((~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB)) 
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
                                 ? 1U : 0U)));
    }
    bufp->chgBit(oldp+167,(vlSelf->CLK_I));
    bufp->chgBit(oldp+168,(vlSelf->RSTL_I));
    bufp->chgBit(oldp+169,(vlSelf->UART_RX_I));
    bufp->chgBit(oldp+170,(vlSelf->TX_DATA_O));
    bufp->chgIData(oldp+171,(vlSelf->fp32_rx_mac_tx__DOT__result),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
