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
        bufp->chgCData(oldp+3,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift),8);
        bufp->chgBit(oldp+4,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+5,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+6,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig));
        bufp->chgBit(oldp+7,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal));
        bufp->chgBit(oldp+8,((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                              >> 0x1fU)));
        bufp->chgIData(oldp+9,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),23);
        bufp->chgIData(oldp+10,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))),24);
        bufp->chgIData(oldp+11,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),24);
        bufp->chgIData(oldp+12,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1),24);
        bufp->chgIData(oldp+13,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2),24);
        bufp->chgBit(oldp+14,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig));
        bufp->chgBit(oldp+15,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))));
        bufp->chgIData(oldp+16,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa),24);
        bufp->chgIData(oldp+17,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa),24);
        bufp->chgIData(oldp+18,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2),24);
        bufp->chgIData(oldp+19,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3),24);
        bufp->chgIData(oldp+20,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa),25);
        bufp->chgCData(oldp+21,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position),8);
        bufp->chgBit(oldp+22,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                     >> 0x18U))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                     >> 0x17U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                     >> 0x16U))));
        bufp->chgIData(oldp+25,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output),25);
        bufp->chgIData(oldp+26,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                               >> 1U))),25);
        bufp->chgIData(oldp+27,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                                   << 
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),25);
        bufp->chgIData(oldp+28,((0x1ffffffU & (((0x18U 
                                                 >= 
                                                 (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                   < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                   ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                   : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                 ? 
                                                (0x1ffffffU 
                                                 & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                                    << 
                                                    (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                      < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                      ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                      : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                 : 0U) 
                                               >> 1U))),25);
        bufp->chgIData(oldp+29,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output)),23);
        bufp->chgIData(oldp+30,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                              >> 1U))),23);
        bufp->chgIData(oldp+31,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                                  << 
                                                  (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),23);
        bufp->chgIData(oldp+32,((0x7fffffU & (((0x18U 
                                                >= 
                                                (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                ? (0x1ffffffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                                      << 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                : 0U) 
                                              >> 1U))),23);
        bufp->chgCData(oldp+33,((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                  < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                  : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))),8);
        bufp->chgBit(oldp+34,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R));
        bufp->chgBit(oldp+35,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S));
        bufp->chgCData(oldp+36,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent),8);
        bufp->chgIData(oldp+37,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa),23);
        bufp->chgBit(oldp+38,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R));
        bufp->chgBit(oldp+39,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S));
        bufp->chgBit(oldp+40,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G));
        bufp->chgCData(oldp+41,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA),8);
        bufp->chgCData(oldp+42,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB),8);
        bufp->chgSData(oldp+43,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB),9);
        bufp->chgBit(oldp+44,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig));
        bufp->chgQData(oldp+45,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original),48);
        bufp->chgCData(oldp+47,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position),8);
        bufp->chgCData(oldp+48,((0xffU & ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))),8);
        bufp->chgCData(oldp+49,((0xffU & ((IData)(0x80U) 
                                          + (0x1ffU 
                                             & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
        bufp->chgBit(oldp+50,((1U & (((IData)(0x80U) 
                                      + (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                     >> 8U))));
        bufp->chgBit(oldp+51,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB));
        bufp->chgBit(oldp+52,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB));
        bufp->chgBit(oldp+53,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_EEQ));
        bufp->chgQData(oldp+54,((0xffffffffffffULL 
                                 & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                    >> 1U))),48);
        bufp->chgQData(oldp+56,(((0x2fU >= (0xffU & 
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
        bufp->chgQData(oldp+58,(((0x2fU >= (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        << (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                                  : 0ULL)),48);
        bufp->chgQData(oldp+60,(((0x2fU >= (0xffU & 
                                            ((IData)(1U) 
                                             + (~ ((IData)(0x80U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        << (0xffU & 
                                            ((IData)(1U) 
                                             + (~ ((IData)(0x80U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))))))
                                  : 0ULL)),48);
        bufp->chgQData(oldp+62,(((0x2fU >= (0x1ffU 
                                            & ((0xffU 
                                                & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                               - ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU)))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        << (0x1ffU 
                                            & ((0xffU 
                                                & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                               - ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))))))
                                  : 0ULL)),48);
        bufp->chgCData(oldp+64,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU)))),8);
        bufp->chgCData(oldp+65,((0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                             - (IData)(0x7fU))))),8);
        bufp->chgCData(oldp+66,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU)) 
                                          - ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))),8);
        bufp->chgQData(oldp+67,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man),48);
        bufp->chgCData(oldp+69,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp),8);
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB)
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
                                      : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB)) 
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
        bufp->chgBit(oldp+71,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                      - (IData)(0x7fU)) 
                                     >> 8U))));
        bufp->chgBit(oldp+72,((1U & (((IData)(1U) + 
                                      ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU))) 
                                     >> 8U))));
        bufp->chgBit(oldp+73,((1U & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)) 
                                      - (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                     >> 8U))));
        bufp->chgCData(oldp+74,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x80U)))),8);
        bufp->chgQData(oldp+75,((0x3fffffffffffULL 
                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)),48);
        bufp->chgQData(oldp+77,((0x7fffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))),48);
        bufp->chgQData(oldp+79,((0xffffffffffffULL 
                                 & (1ULL + (0x7fffffULL 
                                            & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                               >> 0x17U))))),48);
        bufp->chgQData(oldp+81,((0x7fffffffffffULL 
                                 & ((1ULL + (0x7fffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))) 
                                    >> 1U))),48);
        bufp->chgBit(oldp+83,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x17U))))));
        bufp->chgBit(oldp+84,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+85,((0U != (0x3fffffU & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))));
        bufp->chgSData(oldp+86,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),9);
        bufp->chgIData(oldp+87,((0x7fffffU & ((((IData)(
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
        bufp->chgCData(oldp+88,((0xffU & ((((IData)(
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
        bufp->chgBit(oldp+89,(((0xfeU < ((0x100U & 
                                          (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB)
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
                                             : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB)) 
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
    bufp->chgIData(oldp+90,(vlSelf->alpha),32);
    bufp->chgIData(oldp+91,(vlSelf->bravo),32);
    bufp->chgIData(oldp+92,(vlSelf->acc),32);
    bufp->chgIData(oldp+93,(vlSelf->delta),32);
    bufp->chgCData(oldp+94,((0xffU & (vlSelf->acc >> 0x17U))),8);
    bufp->chgCData(oldp+95,((0xffU & ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U) - 
                                      (vlSelf->acc 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+96,((0xffU & ((vlSelf->acc 
                                       >> 0x17U) - 
                                      (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+97,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                       ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U) 
                                          - (vlSelf->acc 
                                             >> 0x17U))
                                       : ((vlSelf->acc 
                                           >> 0x17U) 
                                          - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U))))),8);
    bufp->chgBit(oldp+98,((0U == (0xffU & (vlSelf->acc 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+99,((0xffU == (0xffU & (vlSelf->acc 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+100,(((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->acc >> 0x17U)))));
    bufp->chgBit(oldp+101,((vlSelf->acc >> 0x1fU)));
    bufp->chgIData(oldp+102,((0x7fffffU & vlSelf->acc)),23);
    bufp->chgIData(oldp+103,((((0U != (0xffU & (vlSelf->acc 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->acc))),24);
    bufp->chgIData(oldp+104,((0x7fffffU & vlSelf->acc)),24);
    bufp->chgBit(oldp+105,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                            < (0x7fffffU & vlSelf->acc))));
    bufp->chgBit(oldp+106,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                            == (0x7fffffU & vlSelf->acc))));
    bufp->chgBit(oldp+107,((0U == (0x7fffffU & vlSelf->acc))));
    bufp->chgIData(oldp+108,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             ^ vlSelf->acc) 
                                            >> 0x1fU)
                                            ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                            : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->chgIData(oldp+109,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             ^ vlSelf->acc) 
                                            >> 0x1fU) 
                                           + (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                ^ vlSelf->acc) 
                                               >> 0x1fU)
                                               ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->chgBit(oldp+110,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                   | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                      & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                   ? (vlSelf->acc >> 0x1fU)
                                   : (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+111,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                   | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                      & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                   ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x1fU) : (vlSelf->acc 
                                                   >> 0x1fU)))));
    bufp->chgBit(oldp+112,(((IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)))) 
                            | (IData)(((0x7f800000U 
                                        == (0x7f800000U 
                                            & vlSelf->acc)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->acc)))))));
    bufp->chgBit(oldp+113,((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                              >> 0x1fU) == (vlSelf->acc 
                                            >> 0x1fU)) 
                            & (0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))));
    bufp->chgIData(oldp+114,((0x7fffffU & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R) 
                                             & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S)) 
                                            | (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G) 
                                                & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R)) 
                                               & (~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S))))
                                            ? (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                 ^ vlSelf->acc) 
                                                >> 0x1fU)
                                                ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa 
                                                   - (IData)(1U))
                                                : ((IData)(1U) 
                                                   + vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))
                                            : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))),23);
    bufp->chgCData(oldp+115,((0xffU & (vlSelf->alpha 
                                       >> 0x17U))),8);
    bufp->chgCData(oldp+116,((0xffU & (vlSelf->bravo 
                                       >> 0x17U))),8);
    bufp->chgCData(oldp+117,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                        ? (vlSelf->alpha 
                                           >> 0x17U)
                                        : (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->chgCData(oldp+118,((0xffU & ((vlSelf->alpha 
                                        >> 0x17U) - 
                                       (vlSelf->bravo 
                                        >> 0x17U)))),8);
    bufp->chgCData(oldp+119,((0xffU & ((vlSelf->bravo 
                                        >> 0x17U) - 
                                       (vlSelf->alpha 
                                        >> 0x17U)))),8);
    bufp->chgCData(oldp+120,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
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
    bufp->chgBit(oldp+121,((0U == (0xffU & (vlSelf->alpha 
                                            >> 0x17U)))));
    bufp->chgBit(oldp+122,((0U == (0xffU & (vlSelf->bravo 
                                            >> 0x17U)))));
    bufp->chgBit(oldp+123,((0xffU == (0xffU & (vlSelf->alpha 
                                               >> 0x17U)))));
    bufp->chgBit(oldp+124,((0xffU == (0xffU & (vlSelf->bravo 
                                               >> 0x17U)))));
    bufp->chgBit(oldp+125,(((0xffU & (vlSelf->alpha 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->bravo 
                                      >> 0x17U)))));
    bufp->chgBit(oldp+126,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                >> 0x17U)) 
                                      < (0xffU & (vlSelf->bravo 
                                                  >> 0x17U))) 
                                     | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->chgBit(oldp+127,((vlSelf->alpha >> 0x1fU)));
    bufp->chgBit(oldp+128,((vlSelf->bravo >> 0x1fU)));
    bufp->chgBit(oldp+129,(((vlSelf->alpha ^ vlSelf->bravo) 
                            >> 0x1fU)));
    bufp->chgIData(oldp+130,((0x7fffffU & vlSelf->alpha)),23);
    bufp->chgIData(oldp+131,((0x7fffffU & vlSelf->bravo)),23);
    bufp->chgIData(oldp+132,((((0U != (0xffU & (vlSelf->alpha 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->alpha))),24);
    bufp->chgIData(oldp+133,((0x7fffffU & vlSelf->alpha)),24);
    bufp->chgIData(oldp+134,((((0U != (0xffU & (vlSelf->bravo 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->bravo))),24);
    bufp->chgIData(oldp+135,((0x7fffffU & vlSelf->bravo)),24);
    bufp->chgIData(oldp+136,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->alpha)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->alpha))))
                               ? (0x7fffffU & vlSelf->alpha)
                               : (((0U != (0xffU & 
                                           (vlSelf->alpha 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->alpha)))),24);
    bufp->chgIData(oldp+137,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->bravo)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->bravo))))
                               ? (0x7fffffU & vlSelf->bravo)
                               : (((0U != (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->bravo)))),24);
    bufp->chgBit(oldp+138,(((0x7fffffU & vlSelf->alpha) 
                            < (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+139,(((0x7fffffU & vlSelf->alpha) 
                            > (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+140,(((0x7fffffU & vlSelf->alpha) 
                            == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+141,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->chgBit(oldp+142,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+143,((((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA)) 
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
