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
        bufp->chgCData(oldp+0,(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E),8);
        bufp->chgBit(oldp+1,(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig));
        bufp->chgBit(oldp+2,(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal));
        bufp->chgIData(oldp+3,(vlSelf->FP32_Adder_Combinatorial__DOT__Denorm1),24);
        bufp->chgIData(oldp+4,(vlSelf->FP32_Adder_Combinatorial__DOT__Denorm2),24);
        bufp->chgBit(oldp+5,(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig));
        bufp->chgIData(oldp+6,(vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa),24);
        bufp->chgIData(oldp+7,(vlSelf->FP32_Adder_Combinatorial__DOT__large_E_Mantissa),24);
        bufp->chgIData(oldp+8,(vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3),24);
        bufp->chgIData(oldp+9,(vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa),25);
        bufp->chgCData(oldp+10,(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position),8);
        bufp->chgIData(oldp+11,((0x1ffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                               >> 1U))),25);
        bufp->chgBit(oldp+12,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                     >> 0x18U))));
        bufp->chgBit(oldp+13,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                     >> 0x17U))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                     >> 0x16U))));
        bufp->chgIData(oldp+15,((0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)),23);
        bufp->chgIData(oldp+16,((0x7fffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                              >> 1U))),23);
        bufp->chgIData(oldp+17,(vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac),24);
        bufp->chgIData(oldp+18,((0xffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                              >> 1U))),24);
        bufp->chgIData(oldp+19,((0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac)),23);
        bufp->chgIData(oldp+20,((0x7fffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                              >> 1U))),23);
        bufp->chgCData(oldp+21,(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent),8);
    }
    bufp->chgIData(oldp+22,(vlSelf->alpha),32);
    bufp->chgIData(oldp+23,(vlSelf->bravo),32);
    bufp->chgIData(oldp+24,(vlSelf->delta),32);
    bufp->chgCData(oldp+25,((0xffU & (vlSelf->alpha 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+26,((0xffU & (vlSelf->bravo 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+27,((0xffU & ((vlSelf->alpha 
                                       >> 0x17U) - 
                                      (vlSelf->bravo 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+28,((0xffU & ((vlSelf->bravo 
                                       >> 0x17U) - 
                                      (vlSelf->alpha 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+29,((0xffU & ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                       ? ((vlSelf->alpha 
                                           >> 0x17U) 
                                          - (vlSelf->bravo 
                                             >> 0x17U))
                                       : ((vlSelf->bravo 
                                           >> 0x17U) 
                                          - (vlSelf->alpha 
                                             >> 0x17U))))),8);
    bufp->chgCData(oldp+30,((0xffU & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
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
                                         ^ (0U == (0xffU 
                                                   & (vlSelf->bravo 
                                                      >> 0x17U))))))),8);
    bufp->chgBit(oldp+31,((0U == (0xffU & (vlSelf->alpha 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+32,((0U == (0xffU & (vlSelf->bravo 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+33,((0xffU == (0xffU & (vlSelf->alpha 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+34,((0xffU == (0xffU & (vlSelf->bravo 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+35,(((0xffU & (vlSelf->alpha 
                                     >> 0x17U)) < (0xffU 
                                                   & (vlSelf->bravo 
                                                      >> 0x17U)))));
    bufp->chgBit(oldp+36,((vlSelf->alpha >> 0x1fU)));
    bufp->chgBit(oldp+37,((vlSelf->bravo >> 0x1fU)));
    bufp->chgIData(oldp+38,((0x7fffffU & vlSelf->alpha)),23);
    bufp->chgIData(oldp+39,((0x7fffffU & vlSelf->bravo)),23);
    bufp->chgIData(oldp+40,((((0U != (0xffU & (vlSelf->alpha 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->alpha))),24);
    bufp->chgIData(oldp+41,((0x7fffffU & vlSelf->alpha)),24);
    bufp->chgIData(oldp+42,((((0U != (0xffU & (vlSelf->bravo 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->bravo))),24);
    bufp->chgIData(oldp+43,((0x7fffffU & vlSelf->bravo)),24);
    bufp->chgBit(oldp+44,(((0x7fffffU & vlSelf->alpha) 
                           < (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+45,(((0x7fffffU & vlSelf->alpha) 
                           == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+46,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->chgBit(oldp+47,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->chgIData(oldp+48,((((0xffU == (0xffU & (vlSelf->alpha 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))))
                              ? 0xffffffU : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa)),24);
    bufp->chgIData(oldp+49,((0xffffffU & (((vlSelf->alpha 
                                            ^ vlSelf->bravo) 
                                           >> 0x1fU)
                                           ? (~ vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3)
                                           : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3))),24);
    bufp->chgIData(oldp+50,(((0x17U >= (0xffU & ((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                                    ? 
                                                   ((vlSelf->alpha 
                                                     >> 0x17U) 
                                                    - 
                                                    (vlSelf->bravo 
                                                     >> 0x17U))
                                                    : 
                                                   ((vlSelf->bravo 
                                                     >> 0x17U) 
                                                    - 
                                                    (vlSelf->alpha 
                                                     >> 0x17U))) 
                                                  - 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->alpha 
                                                        >> 0x17U))) 
                                                   ^ 
                                                   (0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->bravo 
                                                        >> 0x17U))))) 
                                                 - (IData)(1U))))
                              ? (0xffffffU & ((IData)(1U) 
                                              << (0xffU 
                                                  & ((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                                        ? 
                                                       ((vlSelf->alpha 
                                                         >> 0x17U) 
                                                        - 
                                                        (vlSelf->bravo 
                                                         >> 0x17U))
                                                        : 
                                                       ((vlSelf->bravo 
                                                         >> 0x17U) 
                                                        - 
                                                        (vlSelf->alpha 
                                                         >> 0x17U))) 
                                                      - 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSelf->alpha 
                                                            >> 0x17U))) 
                                                       ^ 
                                                       (0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSelf->bravo 
                                                            >> 0x17U))))) 
                                                     - (IData)(1U)))))
                              : 0U)),24);
    bufp->chgBit(oldp+51,((1U & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig) 
                                  | ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal) 
                                     & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig)))
                                  ? (vlSelf->alpha 
                                     >> 0x1fU) : (vlSelf->bravo 
                                                  >> 0x1fU)))));
    bufp->chgIData(oldp+52,((0x7fffffU & ((((vlSelf->alpha 
                                             >> 0x1fU) 
                                            == (vlSelf->bravo 
                                                >> 0x1fU)) 
                                           & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                              >> 0x18U))
                                           ? (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                              >> 1U)
                                           : ((((vlSelf->alpha 
                                                 >> 0x1fU) 
                                                == 
                                                (vlSelf->bravo 
                                                 >> 0x1fU)) 
                                               & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                  >> 0x17U))
                                               ? vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa
                                               : ((0x800000U 
                                                   & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent))
                                                    ? 
                                                   (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                                    >> 1U)
                                                    : 0U)
                                                   : vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac))))),23);
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
