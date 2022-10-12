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
        bufp->chgIData(oldp+0,(vlSelf->FP32_MAC_Combinatorial__DOT__middle_output),32);
        bufp->chgCData(oldp+1,((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                         >> 0x17U))),8);
        bufp->chgCData(oldp+2,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E),8);
        bufp->chgBit(oldp+3,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+4,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+5,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig));
        bufp->chgBit(oldp+6,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal));
        bufp->chgBit(oldp+7,((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                              >> 0x1fU)));
        bufp->chgIData(oldp+8,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),23);
        bufp->chgIData(oldp+9,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                  >> 0x17U))) 
                                 << 0x17U) | (0x7fffffU 
                                              & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))),24);
        bufp->chgIData(oldp+10,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),24);
        bufp->chgIData(oldp+11,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1),24);
        bufp->chgIData(oldp+12,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2),24);
        bufp->chgBit(oldp+13,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig));
        bufp->chgBit(oldp+14,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))));
        bufp->chgIData(oldp+15,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa),24);
        bufp->chgIData(oldp+16,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa),24);
        bufp->chgIData(oldp+17,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3),24);
        bufp->chgIData(oldp+18,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa),25);
        bufp->chgCData(oldp+19,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position),8);
        bufp->chgBit(oldp+20,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x18U))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x17U))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x16U))));
        bufp->chgIData(oldp+23,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U))),25);
        bufp->chgIData(oldp+24,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                   << 
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),25);
        bufp->chgIData(oldp+25,((0x1ffffffU & (((0x18U 
                                                 >= 
                                                 (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                   < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                   ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                   : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                 ? 
                                                (0x1ffffffU 
                                                 & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                    << 
                                                    (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                      < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                      ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                      : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                 : 0U) 
                                               >> 1U))),25);
        bufp->chgIData(oldp+26,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)),23);
        bufp->chgIData(oldp+27,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                              >> 1U))),23);
        bufp->chgIData(oldp+28,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                  << 
                                                  (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),23);
        bufp->chgIData(oldp+29,((0x7fffffU & (((0x18U 
                                                >= 
                                                (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                ? (0x1ffffffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                      << 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                : 0U) 
                                              >> 1U))),23);
        bufp->chgCData(oldp+30,((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                  < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                  : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))),8);
        bufp->chgCData(oldp+31,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent),8);
        bufp->chgCData(oldp+32,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+33,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgCData(oldp+34,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA),8);
        bufp->chgCData(oldp+35,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB),8);
        bufp->chgSData(oldp+36,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB),9);
        bufp->chgBit(oldp+37,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig));
        bufp->chgQData(oldp+38,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original),48);
        bufp->chgCData(oldp+40,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position),8);
        bufp->chgCData(oldp+41,((0xffU & ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))),8);
        bufp->chgCData(oldp+42,((0xffU & ((IData)(0x80U) 
                                          + (0x1ffU 
                                             & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
        bufp->chgCData(oldp+43,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x80U)))),8);
        bufp->chgBit(oldp+44,((1U & (((IData)(0x80U) 
                                      + (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                     >> 8U))));
        bufp->chgBit(oldp+45,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                      - (IData)(0x80U)) 
                                     >> 8U))));
        bufp->chgQData(oldp+46,((0xffffffffffffULL 
                                 & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                    >> 1U))),48);
        bufp->chgQData(oldp+48,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man3),48);
        bufp->chgQData(oldp+50,(((0x2fU >= (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        << (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                                  : 0ULL)),48);
        bufp->chgQData(oldp+52,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp),48);
        bufp->chgQData(oldp+54,((((0xffU & ((IData)(0x2eU) 
                                            - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                  >= (0xffU & ((IData)(0x30U) 
                                               + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x80U)))))
                                  ? 0ULL : ((0x2fU 
                                             >= (0xffU 
                                                 & (((IData)(0x2eU) 
                                                     - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                    - 
                                                    ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x80U)))))
                                             ? (0xffffffffffffULL 
                                                & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                                   >> 
                                                   (0xffU 
                                                    & (((IData)(0x2eU) 
                                                        - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                       - 
                                                       ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                        - (IData)(0x80U))))))
                                             : 0ULL))),48);
        bufp->chgQData(oldp+56,(((0x2fU >= (0x1ffU 
                                            & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                               - (IData)(0x7fU))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                        >> (0x1ffU 
                                            & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                               - (IData)(0x7fU)))))
                                  : 0ULL)),48);
        bufp->chgQData(oldp+58,((0xffffffffffffULL 
                                 & (((0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                     >= (0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x80U))))
                                     ? (((0xffU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                         >= (0xffU 
                                             & ((IData)(0x30U) 
                                                + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x80U)))))
                                         ? 0ULL : (
                                                   (0x2fU 
                                                    >= 
                                                    (0xffU 
                                                     & (((IData)(0x2eU) 
                                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                        - 
                                                        ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x80U)))))
                                                    ? 
                                                   (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                                    >> 
                                                    (0xffU 
                                                     & (((IData)(0x2eU) 
                                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                        - 
                                                        ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x80U)))))
                                                    : 0ULL))
                                     : ((0x2fU >= (0x1ffU 
                                                   & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU))))
                                         ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                            >> (0x1ffU 
                                                & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))))
                                         : 0ULL)))),48);
        bufp->chgQData(oldp+60,(((0x2fU >= (0xffU & 
                                            ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        >> (0xffU & 
                                            ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))))
                                  : 0ULL)),48);
        bufp->chgCData(oldp+62,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU)))),8);
        bufp->chgCData(oldp+63,((0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                             - (IData)(0x7fU))))),8);
        bufp->chgCData(oldp+64,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU)) 
                                          - ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))),8);
        bufp->chgQData(oldp+65,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man),48);
        bufp->chgCData(oldp+67,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp),8);
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB)
                                      ? ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                          ? (1U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))) 
                                                   >> 8U))
                                          : ((0x2eU 
                                              == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                              ? (1U 
                                                 & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU)) 
                                                    >> 8U))
                                              : (1U 
                                                 & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     > 
                                                     (0x1ffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x2eU) 
                                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                    & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU)) 
                                                        - 
                                                        (0xffU 
                                                         & ((IData)(0x2eU) 
                                                            - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                       >> 8U)))))
                                      : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB)) 
                                         & ((0x2fU 
                                             == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                             ? (1U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))) 
                                                   >> 8U))
                                             : (IData)(
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                        & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                            - (IData)(0x7fU)) 
                                                           >> 8U)))))))));
        bufp->chgBit(oldp+69,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                      - (IData)(0x7fU)) 
                                     >> 8U))));
        bufp->chgBit(oldp+70,((1U & (((IData)(1U) + 
                                      ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU))) 
                                     >> 8U))));
        bufp->chgBit(oldp+71,((1U & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)) 
                                      - (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                     >> 8U))));
        bufp->chgCData(oldp+72,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+73,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgBit(oldp+74,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB));
        bufp->chgBit(oldp+75,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB));
        bufp->chgBit(oldp+76,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_EEQ));
        bufp->chgQData(oldp+77,((0x3fffffffffffULL 
                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)),48);
        bufp->chgQData(oldp+79,((0x7fffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))),48);
        bufp->chgQData(oldp+81,((0xffffffffffffULL 
                                 & (1ULL + (0x7fffffULL 
                                            & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                               >> 0x17U))))),48);
        bufp->chgQData(oldp+83,((0x7fffffffffffULL 
                                 & ((1ULL + (0x7fffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))) 
                                    >> 1U))),48);
        bufp->chgBit(oldp+85,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))))));
        bufp->chgBit(oldp+86,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+87,((0U != (0x3fffffU & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))));
        bufp->chgSData(oldp+88,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),9);
        bufp->chgIData(oldp+89,((0x7fffffU & ((((IData)(
                                                        (0xffffffULL 
                                                         & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                            >> 0x16U))) 
                                                & (0U 
                                                   != 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (0x3fffffffffffULL 
                                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                               | ((IData)(
                                                          (0x7fffffULL 
                                                           & (0xc00000ULL 
                                                              == 
                                                              (0xc00000ULL 
                                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                                  & (0U 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (0x3fffffffffffULL 
                                                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))))
                                               ? ((1U 
                                                   & (IData)(
                                                             (0x1ffffffULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  (0x7fffffULL 
                                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                      >> 0x17U))) 
                                                                 >> 0x17U))))
                                                   ? (IData)(
                                                             (0x7fffffffffffULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  (0x7fffffULL 
                                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                      >> 0x17U))) 
                                                                 >> 1U)))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(
                                                             (0x7fffffULL 
                                                              & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                 >> 0x17U)))))
                                               : (IData)(
                                                         (0x7fffffULL 
                                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                             >> 0x17U)))))),23);
        bufp->chgCData(oldp+90,((0xffU & ((((IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                        >> 0x16U))) 
                                            & (0U != 
                                               (0x3fffffU 
                                                & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                           | ((IData)(
                                                      (0x7fffffULL 
                                                       & (0xc00000ULL 
                                                          == 
                                                          (0xc00000ULL 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                              & (0U 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (0x3fffffffffffULL 
                                                             & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))))
                                           ? ((1U & (IData)(
                                                            (0x1ffffffULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 (0x7fffffULL 
                                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                     >> 0x17U))) 
                                                                >> 0x17U))))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                               : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                           : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),8);
        bufp->chgBit(oldp+91,(((0xfeU < ((0x100U & 
                                          (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB)
                                             ? ((0x2fU 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                 ? 
                                                (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU))) 
                                                    >> 8U))
                                                 : 
                                                ((0x2eU 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                  ? 
                                                 (1U 
                                                  & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU)) 
                                                     >> 8U))
                                                  : 
                                                 (1U 
                                                  & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      > 
                                                      (0x1ffU 
                                                       & ((IData)(0x80U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x2eU) 
                                                              - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                     & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU)) 
                                                         - 
                                                         (0xffU 
                                                          & ((IData)(0x2eU) 
                                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                        >> 8U)))))
                                             : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB)) 
                                                & ((0x2fU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU))) 
                                                       >> 8U))
                                                    : (IData)(
                                                              ((0x2eU 
                                                                == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                               & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                                   - (IData)(0x7fU)) 
                                                                  >> 8U)))))) 
                                           << 8U)) 
                                         | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))
                                ? 1U : 0U)));
    }
    bufp->chgIData(oldp+92,(vlSelf->alpha),32);
    bufp->chgIData(oldp+93,(vlSelf->bravo),32);
    bufp->chgIData(oldp+94,(vlSelf->acc),32);
    bufp->chgIData(oldp+95,(vlSelf->delta),32);
    bufp->chgCData(oldp+96,((0xffU & (vlSelf->acc >> 0x17U))),8);
    bufp->chgCData(oldp+97,((0xffU & ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U) - 
                                      (vlSelf->acc 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+98,((0xffU & ((vlSelf->acc 
                                       >> 0x17U) - 
                                      (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+99,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                       ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U) 
                                          - (vlSelf->acc 
                                             >> 0x17U))
                                       : ((vlSelf->acc 
                                           >> 0x17U) 
                                          - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U))))),8);
    bufp->chgCData(oldp+100,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                         ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U) 
                                            - (vlSelf->acc 
                                               >> 0x17U))
                                         : ((vlSelf->acc 
                                             >> 0x17U) 
                                            - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                               >> 0x17U))) 
                                       - ((0U == (0xffU 
                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                     >> 0x17U))) 
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->acc 
                                                 >> 0x17U))))))),8);
    bufp->chgBit(oldp+101,((0U == (0xffU & (vlSelf->acc 
                                            >> 0x17U)))));
    bufp->chgBit(oldp+102,((0xffU == (0xffU & (vlSelf->acc 
                                               >> 0x17U)))));
    bufp->chgBit(oldp+103,(((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->acc >> 0x17U)))));
    bufp->chgBit(oldp+104,((vlSelf->acc >> 0x1fU)));
    bufp->chgIData(oldp+105,((0x7fffffU & vlSelf->acc)),23);
    bufp->chgIData(oldp+106,((((0U != (0xffU & (vlSelf->acc 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->acc))),24);
    bufp->chgIData(oldp+107,((0x7fffffU & vlSelf->acc)),24);
    bufp->chgBit(oldp+108,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                            < (0x7fffffU & vlSelf->acc))));
    bufp->chgBit(oldp+109,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                            == (0x7fffffU & vlSelf->acc))));
    bufp->chgBit(oldp+110,((0U == (0x7fffffU & vlSelf->acc))));
    bufp->chgIData(oldp+111,((((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                   >> 0x17U))) 
                               | (0xffU == (0xffU & 
                                            (vlSelf->acc 
                                             >> 0x17U))))
                               ? 0xffffffU : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa)),24);
    bufp->chgIData(oldp+112,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             ^ vlSelf->acc) 
                                            >> 0x1fU)
                                            ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                            : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->chgIData(oldp+113,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             ^ vlSelf->acc) 
                                            >> 0x1fU) 
                                           + (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                ^ vlSelf->acc) 
                                               >> 0x1fU)
                                               ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->chgIData(oldp+114,(((0x17U >= (0xffU & ((
                                                   ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                                     ? 
                                                    ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->acc 
                                                      >> 0x17U))
                                                     : 
                                                    ((vlSelf->acc 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                      >> 0x17U))) 
                                                   - 
                                                   ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                         >> 0x17U))) 
                                                    ^ 
                                                    (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->acc 
                                                         >> 0x17U))))) 
                                                  - (IData)(1U))))
                               ? (0xffffffU & ((IData)(1U) 
                                               << (0xffU 
                                                   & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                                         ? 
                                                        ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->acc 
                                                          >> 0x17U))
                                                         : 
                                                        ((vlSelf->acc 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                          >> 0x17U))) 
                                                       - 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                             >> 0x17U))) 
                                                        ^ 
                                                        (0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->acc 
                                                             >> 0x17U))))) 
                                                      - (IData)(1U)))))
                               : 0U)),24);
    bufp->chgBit(oldp+115,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                   | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                      & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                   ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x1fU) : (vlSelf->acc 
                                                   >> 0x1fU)))));
    bufp->chgIData(oldp+116,((0x7fffffU & (((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                               >> 0x1fU) 
                                              == (vlSelf->acc 
                                                  >> 0x1fU)) 
                                             & (0U 
                                                != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent))) 
                                            & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 0x18U))
                                            ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U)
                                            : ((0x800000U 
                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa))) 
                                                    & (0U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                       < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                       ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                       : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                        << 
                                                        (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                          < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                          ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                          : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                     : 0U)
                                                    : 
                                                   (((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800000U 
                                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))
                                                     ? 
                                                    ((0x18U 
                                                      >= 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                      ? 
                                                     (0x1ffffffU 
                                                      & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                                         << 
                                                         (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                           < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                           ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                           : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                      : 0U)
                                                     : 0U)))))),23);
    bufp->chgBit(oldp+117,(((IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)))) 
                            | (IData)(((0x7f800000U 
                                        == (0x7f800000U 
                                            & vlSelf->acc)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->acc)))))));
    bufp->chgBit(oldp+118,((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                              >> 0x1fU) == (vlSelf->acc 
                                            >> 0x1fU)) 
                            & (0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))));
    bufp->chgCData(oldp+119,((0xffU & (vlSelf->alpha 
                                       >> 0x17U))),8);
    bufp->chgCData(oldp+120,((0xffU & (vlSelf->bravo 
                                       >> 0x17U))),8);
    bufp->chgCData(oldp+121,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                        ? (vlSelf->alpha 
                                           >> 0x17U)
                                        : (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->chgCData(oldp+122,((0xffU & ((vlSelf->alpha 
                                        >> 0x17U) - 
                                       (vlSelf->bravo 
                                        >> 0x17U)))),8);
    bufp->chgCData(oldp+123,((0xffU & ((vlSelf->bravo 
                                        >> 0x17U) - 
                                       (vlSelf->alpha 
                                        >> 0x17U)))),8);
    bufp->chgCData(oldp+124,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                         ? ((vlSelf->alpha 
                                             >> 0x17U) 
                                            - (vlSelf->bravo 
                                               >> 0x17U))
                                         : ((vlSelf->bravo 
                                             >> 0x17U) 
                                            - (vlSelf->alpha 
                                               >> 0x17U))) 
                                       - ((0U == (0xffU 
                                                  & (vlSelf->alpha 
                                                     >> 0x17U))) 
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->bravo 
                                                 >> 0x17U))))))),8);
    bufp->chgBit(oldp+125,((0U == (0xffU & (vlSelf->alpha 
                                            >> 0x17U)))));
    bufp->chgBit(oldp+126,((0U == (0xffU & (vlSelf->bravo 
                                            >> 0x17U)))));
    bufp->chgBit(oldp+127,((0xffU == (0xffU & (vlSelf->alpha 
                                               >> 0x17U)))));
    bufp->chgBit(oldp+128,((0xffU == (0xffU & (vlSelf->bravo 
                                               >> 0x17U)))));
    bufp->chgBit(oldp+129,(((0xffU & (vlSelf->alpha 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->bravo 
                                      >> 0x17U)))));
    bufp->chgBit(oldp+130,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                >> 0x17U)) 
                                      < (0xffU & (vlSelf->bravo 
                                                  >> 0x17U))) 
                                     | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->chgBit(oldp+131,((vlSelf->alpha >> 0x1fU)));
    bufp->chgBit(oldp+132,((vlSelf->bravo >> 0x1fU)));
    bufp->chgBit(oldp+133,(((vlSelf->alpha ^ vlSelf->bravo) 
                            >> 0x1fU)));
    bufp->chgIData(oldp+134,((0x7fffffU & vlSelf->alpha)),23);
    bufp->chgIData(oldp+135,((0x7fffffU & vlSelf->bravo)),23);
    bufp->chgIData(oldp+136,((((0U != (0xffU & (vlSelf->alpha 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->alpha))),24);
    bufp->chgIData(oldp+137,((0x7fffffU & vlSelf->alpha)),24);
    bufp->chgIData(oldp+138,((((0U != (0xffU & (vlSelf->bravo 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->bravo))),24);
    bufp->chgIData(oldp+139,((0x7fffffU & vlSelf->bravo)),24);
    bufp->chgIData(oldp+140,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->alpha)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->alpha))))
                               ? (0x7fffffU & vlSelf->alpha)
                               : (((0U != (0xffU & 
                                           (vlSelf->alpha 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->alpha)))),24);
    bufp->chgIData(oldp+141,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->bravo)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->bravo))))
                               ? (0x7fffffU & vlSelf->bravo)
                               : (((0U != (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->bravo)))),24);
    bufp->chgBit(oldp+142,(((0x7fffffU & vlSelf->alpha) 
                            < (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+143,(((0x7fffffU & vlSelf->alpha) 
                            > (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+144,(((0x7fffffU & vlSelf->alpha) 
                            == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+145,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->chgBit(oldp+146,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+147,((((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA)) 
                             & (0U != (0x7fffffU & vlSelf->alpha))) 
                            | ((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB)) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->bravo))))));
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
}
