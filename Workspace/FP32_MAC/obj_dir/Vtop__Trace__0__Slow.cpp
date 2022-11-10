// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+96,"alpha", false,-1, 31,0);
    tracep->declBus(c+97,"bravo", false,-1, 31,0);
    tracep->declBus(c+98,"acc", false,-1, 31,0);
    tracep->declBus(c+99,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_MAC_Combinatorial ");
    tracep->declBus(c+96,"alpha", false,-1, 31,0);
    tracep->declBus(c+97,"bravo", false,-1, 31,0);
    tracep->declBus(c+98,"acc", false,-1, 31,0);
    tracep->declBus(c+99,"delta", false,-1, 31,0);
    tracep->declBus(c+1,"middle_output", false,-1, 31,0);
    tracep->pushNamePrefix("My_Adder ");
    tracep->declBus(c+1,"alpha", false,-1, 31,0);
    tracep->declBus(c+98,"bravo", false,-1, 31,0);
    tracep->declBus(c+99,"delta", false,-1, 31,0);
    tracep->declBus(c+2,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+100,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+2,"EA", false,-1, 7,0);
    tracep->declBus(c+100,"EB", false,-1, 7,0);
    tracep->declBus(c+3,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+101,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+102,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+103,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+4,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+152,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+153,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+154,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+155,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+5,"EA0", false,-1);
    tracep->declBit(c+104,"EB0", false,-1);
    tracep->declBit(c+6,"EA1", false,-1);
    tracep->declBit(c+105,"EB1", false,-1);
    tracep->declBit(c+7,"E_LeftBig", false,-1);
    tracep->declBit(c+106,"E_RightBig", false,-1);
    tracep->declBit(c+8,"E_Equal", false,-1);
    tracep->declBit(c+9,"SA", false,-1);
    tracep->declBit(c+107,"SB", false,-1);
    tracep->declBus(c+10,"MA", false,-1, 22,0);
    tracep->declBus(c+108,"MB", false,-1, 22,0);
    tracep->declBus(c+11,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+12,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+109,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+110,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+13,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+14,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+111,"M_RightBig", false,-1);
    tracep->declBit(c+15,"M_LeftBig", false,-1);
    tracep->declBit(c+112,"M_Equal", false,-1);
    tracep->declBit(c+16,"MA0", false,-1);
    tracep->declBit(c+113,"MB0", false,-1);
    tracep->declBus(c+17,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+18,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+19,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+20,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+114,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+115,"small_E_mantissa5", false,-1, 23,0);
    tracep->declBus(c+21,"added_Mantissa", false,-1, 24,0);
    tracep->declBit(c+116,"small_E_sign", false,-1);
    tracep->declBus(c+22,"leading_1_position", false,-1, 7,0);
    tracep->declBit(c+23,"mantissa_24th", false,-1);
    tracep->declBit(c+24,"mantissa_23rd", false,-1);
    tracep->declBit(c+25,"mantissa_22nd", false,-1);
    tracep->declBus(c+26,"adder_output", false,-1, 24,0);
    tracep->declBus(c+27,"right_frac_tmp", false,-1, 24,0);
    tracep->declBus(c+28,"lefted_frac", false,-1, 24,0);
    tracep->declBus(c+29,"lefted_frac_righted", false,-1, 24,0);
    tracep->declBus(c+30,"frac", false,-1, 22,0);
    tracep->declBus(c+31,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+32,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+33,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBus(c+34,"left_shifting", false,-1, 7,0);
    tracep->declBit(c+35,"R", false,-1);
    tracep->declBit(c+36,"S", false,-1);
    tracep->declBit(c+117,"final_sign", false,-1);
    tracep->declBus(c+37,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+38,"final_mantissa", false,-1, 22,0);
    tracep->declBit(c+39,"final_R", false,-1);
    tracep->declBit(c+40,"final_S", false,-1);
    tracep->declBit(c+41,"G", false,-1);
    tracep->declBit(c+118,"NAN", false,-1);
    tracep->declBit(c+119,"OVFL", false,-1);
    tracep->declBus(c+120,"final_final_mantissa", false,-1, 22,0);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+21,"tmp", false,-1, 24,0);
    tracep->declBus(c+22,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_Multiplier ");
    tracep->declBus(c+96,"alpha", false,-1, 31,0);
    tracep->declBus(c+97,"bravo", false,-1, 31,0);
    tracep->declBus(c+1,"delta", false,-1, 31,0);
    tracep->declBus(c+121,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+122,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+123,"EA", false,-1, 7,0);
    tracep->declBus(c+124,"EB", false,-1, 7,0);
    tracep->declBus(c+125,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+126,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+127,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+128,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+42,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+156,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+129,"EA0", false,-1);
    tracep->declBit(c+130,"EB0", false,-1);
    tracep->declBit(c+131,"EA1", false,-1);
    tracep->declBit(c+132,"EB1", false,-1);
    tracep->declBit(c+43,"E_LeftBig", false,-1);
    tracep->declBit(c+133,"E_RightBig", false,-1);
    tracep->declBit(c+134,"E_Equal", false,-1);
    tracep->declBit(c+135,"SA", false,-1);
    tracep->declBit(c+136,"SB", false,-1);
    tracep->declBit(c+137,"final_sign", false,-1);
    tracep->declBus(c+138,"MA", false,-1, 22,0);
    tracep->declBus(c+139,"MB", false,-1, 22,0);
    tracep->declBus(c+140,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+141,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+142,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+143,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+144,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+145,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+146,"M_RightBig", false,-1);
    tracep->declBit(c+147,"M_LeftBig", false,-1);
    tracep->declBit(c+148,"M_Equal", false,-1);
    tracep->declBit(c+149,"MA0", false,-1);
    tracep->declBit(c+150,"MB0", false,-1);
    tracep->declQuad(c+44,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+46,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+47,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+48,"Until_126", false,-1, 7,0);
    tracep->declBus(c+49,"Maximum_Exp_Cost", false,-1, 7,0);
    tracep->declBus(c+157,"E", false,-1, 8,0);
    tracep->declBus(c+158,"Exp", false,-1, 8,0);
    tracep->declBit(c+50,"Until_126_Carry", false,-1);
    tracep->declBit(c+51,"Maximum_Exp_Cost_Carry", false,-1);
    tracep->declQuad(c+44,"Man1", false,-1, 47,0);
    tracep->declQuad(c+52,"Man2", false,-1, 47,0);
    tracep->declQuad(c+54,"Man3", false,-1, 47,0);
    tracep->declQuad(c+56,"Man4", false,-1, 47,0);
    tracep->declQuad(c+58,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+60,"Man5_cei", false,-1, 47,0);
    tracep->declQuad(c+62,"Man5_ce", false,-1, 47,0);
    tracep->declQuad(c+64,"Man5", false,-1, 47,0);
    tracep->declQuad(c+66,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+68,"Exp1", false,-1, 7,0);
    tracep->declBus(c+69,"Exp2", false,-1, 7,0);
    tracep->declBus(c+159,"Exp3", false,-1, 7,0);
    tracep->declBus(c+160,"Exp4", false,-1, 7,0);
    tracep->declBus(c+70,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+71,"final_Man", false,-1, 47,0);
    tracep->declBus(c+73,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+74,"final_Exp_Carry", false,-1);
    tracep->declBit(c+75,"Exp1_C", false,-1);
    tracep->declBit(c+76,"Exp2_C", false,-1);
    tracep->declBit(c+161,"Exp3_C", false,-1);
    tracep->declBit(c+161,"Exp4_C", false,-1);
    tracep->declBit(c+77,"Exp5_C", false,-1);
    tracep->declBit(c+78,"FINAL_ELB", false,-1);
    tracep->declBit(c+79,"FINAL_ERB", false,-1);
    tracep->declBit(c+80,"FINAL_EEQ", false,-1);
    tracep->declQuad(c+81,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+83,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+85,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+87,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+89,"G", false,-1);
    tracep->declBit(c+90,"R", false,-1);
    tracep->declBit(c+91,"S", false,-1);
    tracep->declBus(c+92,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+93,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+94,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+151,"NAN", false,-1);
    tracep->declBit(c+95,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+44,"tmp", false,-1, 47,0);
    tracep->declBus(c+46,"ret", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->FP32_MAC_Combinatorial__DOT__middle_output),32);
    bufp->fullCData(oldp+2,((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x17U))),8);
    bufp->fullCData(oldp+3,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E),8);
    bufp->fullCData(oldp+4,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift),8);
    bufp->fullBit(oldp+5,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+6,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U)))));
    bufp->fullBit(oldp+7,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig));
    bufp->fullBit(oldp+8,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal));
    bufp->fullBit(oldp+9,((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                           >> 0x1fU)));
    bufp->fullIData(oldp+10,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),23);
    bufp->fullIData(oldp+11,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))),24);
    bufp->fullIData(oldp+12,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),24);
    bufp->fullIData(oldp+13,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1),24);
    bufp->fullIData(oldp+14,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2),24);
    bufp->fullBit(oldp+15,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig));
    bufp->fullBit(oldp+16,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))));
    bufp->fullIData(oldp+17,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa),24);
    bufp->fullIData(oldp+18,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa),24);
    bufp->fullIData(oldp+19,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2),24);
    bufp->fullIData(oldp+20,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+21,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+22,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position),8);
    bufp->fullBit(oldp+23,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                  >> 0x18U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                  >> 0x17U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                  >> 0x16U))));
    bufp->fullIData(oldp+26,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output),25);
    bufp->fullIData(oldp+27,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                            >> 1U))),25);
    bufp->fullIData(oldp+28,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullIData(oldp+29,((0x1ffffffU & (((0x18U 
                                              >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
                                            >> 1U))),25);
    bufp->fullIData(oldp+30,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output)),23);
    bufp->fullIData(oldp+31,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                           >> 1U))),23);
    bufp->fullIData(oldp+32,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                          < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                          ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                          : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                               ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                               << (
                                                   ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                               : 0U)),23);
    bufp->fullIData(oldp+33,((0x7fffffU & (((0x18U 
                                             >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullCData(oldp+34,((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                               < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                               ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                               : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))),8);
    bufp->fullBit(oldp+35,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R));
    bufp->fullBit(oldp+36,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S));
    bufp->fullCData(oldp+37,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent),8);
    bufp->fullIData(oldp+38,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa),23);
    bufp->fullBit(oldp+39,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R));
    bufp->fullBit(oldp+40,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S));
    bufp->fullBit(oldp+41,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G));
    bufp->fullSData(oldp+42,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB),9);
    bufp->fullBit(oldp+43,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig));
    bufp->fullQData(oldp+44,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original),48);
    bufp->fullCData(oldp+46,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position),8);
    bufp->fullCData(oldp+47,((0xffU & ((IData)(0x2eU) 
                                       - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))),8);
    bufp->fullCData(oldp+48,((0xffU & ((IData)(0x80U) 
                                       + (0x1ffU & 
                                          (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
    bufp->fullCData(oldp+49,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x80U)))),8);
    bufp->fullBit(oldp+50,((1U & (((IData)(0x80U) + 
                                   (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                  >> 8U))));
    bufp->fullBit(oldp+51,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                   - (IData)(0x80U)) 
                                  >> 8U))));
    bufp->fullQData(oldp+52,((0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                   >> 1U))),48);
    bufp->fullQData(oldp+54,((0xffffffffffffULL & (
                                                   (0x100U 
                                                    & ((IData)(0x80U) 
                                                       + 
                                                       (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))
                                                    ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original
                                                    : 
                                                   ((0x2fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                     >> 
                                                     (0xffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                                     : 0ULL)))),48);
    bufp->fullQData(oldp+56,(((0x2fU >= (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                     << (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+58,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp),48);
    bufp->fullQData(oldp+60,((((0xffU & ((IData)(0x2eU) 
                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                               >= (0xffU & ((IData)(0x30U) 
                                            + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                               - (IData)(0x80U)))))
                               ? 0ULL : ((0x2fU >= 
                                          (0xffU & 
                                           (((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                            - ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
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
    bufp->fullQData(oldp+62,(((0x2fU >= (0x1ffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                     >> (0x1ffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+64,((0xffffffffffffULL & (
                                                   ((0xffU 
                                                     & ((IData)(0x2eU) 
                                                        - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                        - (IData)(0x80U))))
                                                    ? 
                                                   (((0xffU 
                                                      & ((IData)(0x2eU) 
                                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x30U) 
                                                         + 
                                                         ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x80U)))))
                                                     ? 0ULL
                                                     : 
                                                    ((0x2fU 
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
                                                    : 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x1ffU 
                                                      & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU))))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                                     >> 
                                                     (0x1ffU 
                                                      & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU))))
                                                     : 0ULL)))),48);
    bufp->fullQData(oldp+66,(((0x2fU >= (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                     >> (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))))
                               : 0ULL)),48);
    bufp->fullCData(oldp+68,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)))),8);
    bufp->fullCData(oldp+69,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU))))),8);
    bufp->fullCData(oldp+70,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)) 
                                       - ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))),8);
    bufp->fullQData(oldp+71,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man),48);
    bufp->fullCData(oldp+73,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp),8);
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB)
                                   ? ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                       ? (1U & (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                                >> 8U))
                                       : ((0x2eU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                           ? (1U & 
                                              (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x7fU)) 
                                               >> 8U))
                                           : (1U & 
                                              (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                > (0x1ffU 
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
                                      & ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                          ? (1U & (
                                                   ((IData)(1U) 
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
    bufp->fullBit(oldp+75,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                   - (IData)(0x7fU)) 
                                  >> 8U))));
    bufp->fullBit(oldp+76,((1U & (((IData)(1U) + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                  >> 8U))));
    bufp->fullBit(oldp+77,((1U & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                    - (IData)(0x7fU)) 
                                   - (0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                  >> 8U))));
    bufp->fullBit(oldp+78,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB));
    bufp->fullBit(oldp+79,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB));
    bufp->fullBit(oldp+80,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_EEQ));
    bufp->fullQData(oldp+81,((0x3fffffffffffULL & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)),48);
    bufp->fullQData(oldp+83,((0x7fffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))),48);
    bufp->fullQData(oldp+85,((0xffffffffffffULL & (1ULL 
                                                   + 
                                                   (0x7fffffULL 
                                                    & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                       >> 0x17U))))),48);
    bufp->fullQData(oldp+87,((0x7fffffffffffULL & (
                                                   (1ULL 
                                                    + 
                                                    (0x7fffffULL 
                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                        >> 0x17U))) 
                                                   >> 1U))),48);
    bufp->fullBit(oldp+89,((1U & (IData)((0x7fffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+90,((1U & (IData)((0xffffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+91,((0U != (0x3fffffU & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))));
    bufp->fullSData(oldp+92,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+93,((0x7fffffU & ((((IData)(
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
                                                : ((IData)(1U) 
                                                   + (IData)(
                                                             (0x7fffffULL 
                                                              & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                 >> 0x17U)))))
                                            : (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                          >> 0x17U)))))),23);
    bufp->fullCData(oldp+94,((0xffU & ((((IData)((0xffffffULL 
                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                     >> 0x16U))) 
                                         & (0U != (0x3fffffU 
                                                   & (IData)(
                                                             (0x3fffffffffffULL 
                                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                        | ((IData)(
                                                   (0x7fffffULL 
                                                    & (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                           & (0U == 
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
    bufp->fullBit(oldp+95,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__OVFL));
    bufp->fullIData(oldp+96,(vlSelf->alpha),32);
    bufp->fullIData(oldp+97,(vlSelf->bravo),32);
    bufp->fullIData(oldp+98,(vlSelf->acc),32);
    bufp->fullIData(oldp+99,(vlSelf->delta),32);
    bufp->fullCData(oldp+100,((0xffU & (vlSelf->acc 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+101,((0xffU & ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                         >> 0x17U) 
                                        - (vlSelf->acc 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+102,((0xffU & ((vlSelf->acc 
                                         >> 0x17U) 
                                        - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+103,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                         ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U) 
                                            - (vlSelf->acc 
                                               >> 0x17U))
                                         : ((vlSelf->acc 
                                             >> 0x17U) 
                                            - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                               >> 0x17U))))),8);
    bufp->fullBit(oldp+104,((0U == (0xffU & (vlSelf->acc 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+105,((0xffU == (0xffU & (vlSelf->acc 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+106,(((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U)) < 
                             (0xffU & (vlSelf->acc 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+107,((vlSelf->acc >> 0x1fU)));
    bufp->fullIData(oldp+108,((0x7fffffU & vlSelf->acc)),23);
    bufp->fullIData(oldp+109,((((0U != (0xffU & (vlSelf->acc 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->acc))),24);
    bufp->fullIData(oldp+110,((0x7fffffU & vlSelf->acc)),24);
    bufp->fullBit(oldp+111,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             < (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+112,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             == (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+113,((0U == (0x7fffffU & vlSelf->acc))));
    bufp->fullIData(oldp+114,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              ^ vlSelf->acc) 
                                             >> 0x1fU)
                                             ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                             : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+115,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              ^ vlSelf->acc) 
                                             >> 0x1fU) 
                                            + (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                 ^ vlSelf->acc) 
                                                >> 0x1fU)
                                                ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                                : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->fullBit(oldp+116,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                    | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                       & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                    ? (vlSelf->acc 
                                       >> 0x1fU) : 
                                   (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+117,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                    | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                       & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                    ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x1fU) : 
                                   (vlSelf->acc >> 0x1fU)))));
    bufp->fullBit(oldp+118,(((IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->acc)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->acc)))))));
    bufp->fullBit(oldp+119,((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                               >> 0x1fU) == (vlSelf->acc 
                                             >> 0x1fU)) 
                             & (0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))));
    bufp->fullIData(oldp+120,((0x7fffffU & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R) 
                                              & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S)) 
                                             | (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G) 
                                                 & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R)) 
                                                & (~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S))))
                                             ? (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                  ^ vlSelf->acc) 
                                                 >> 0x1fU)
                                                 ? 
                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(1U) 
                                                 + vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))
                                             : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))),23);
    bufp->fullCData(oldp+121,((0xffU & (vlSelf->alpha 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+122,((0xffU & (vlSelf->bravo 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+123,((0xffU & ((vlSelf->alpha 
                                         >> 0x17U) 
                                        + (0U == (0xffU 
                                                  & (vlSelf->alpha 
                                                     >> 0x17U)))))),8);
    bufp->fullCData(oldp+124,((0xffU & ((vlSelf->bravo 
                                         >> 0x17U) 
                                        + (0U == (0xffU 
                                                  & (vlSelf->bravo 
                                                     >> 0x17U)))))),8);
    bufp->fullCData(oldp+125,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                         ? (vlSelf->alpha 
                                            >> 0x17U)
                                         : (vlSelf->bravo 
                                            >> 0x17U)))),8);
    bufp->fullCData(oldp+126,((0xffU & ((vlSelf->alpha 
                                         >> 0x17U) 
                                        - (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+127,((0xffU & ((vlSelf->bravo 
                                         >> 0x17U) 
                                        - (vlSelf->alpha 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+128,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+129,((0U == (0xffU & (vlSelf->alpha 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+130,((0U == (0xffU & (vlSelf->bravo 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+131,((0xffU == (0xffU & (vlSelf->alpha 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+132,((0xffU == (0xffU & (vlSelf->bravo 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+133,(((0xffU & (vlSelf->alpha 
                                       >> 0x17U)) < 
                             (0xffU & (vlSelf->bravo 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+134,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                 >> 0x17U)) 
                                       < (0xffU & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                      | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+135,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+136,((vlSelf->bravo >> 0x1fU)));
    bufp->fullBit(oldp+137,(((vlSelf->alpha ^ vlSelf->bravo) 
                             >> 0x1fU)));
    bufp->fullIData(oldp+138,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+139,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+140,((((0U != (0xffU & (vlSelf->alpha 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->alpha))),24);
    bufp->fullIData(oldp+141,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+142,((((0U != (0xffU & (vlSelf->bravo 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->bravo))),24);
    bufp->fullIData(oldp+143,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullIData(oldp+144,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->alpha)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->alpha))))
                                ? (0x7fffffU & vlSelf->alpha)
                                : (((0U != (0xffU & 
                                            (vlSelf->alpha 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->alpha)))),24);
    bufp->fullIData(oldp+145,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->bravo)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->bravo))))
                                ? (0x7fffffU & vlSelf->bravo)
                                : (((0U != (0xffU & 
                                            (vlSelf->bravo 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->bravo)))),24);
    bufp->fullBit(oldp+146,(((0x7fffffU & vlSelf->alpha) 
                             < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+147,(((0x7fffffU & vlSelf->alpha) 
                             > (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+148,(((0x7fffffU & vlSelf->alpha) 
                             == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+149,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+150,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+151,(((IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->alpha)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->alpha)))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->bravo)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->bravo)))))));
    bufp->fullBit(oldp+152,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+153,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+154,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+155,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+156,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+157,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E),9);
    bufp->fullSData(oldp+158,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Exp),9);
    bufp->fullCData(oldp+159,(0U),8);
    bufp->fullCData(oldp+160,(1U),8);
    bufp->fullBit(oldp+161,(0U));
}
