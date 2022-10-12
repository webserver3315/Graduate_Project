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
    tracep->declBus(c+93,"alpha", false,-1, 31,0);
    tracep->declBus(c+94,"bravo", false,-1, 31,0);
    tracep->declBus(c+95,"acc", false,-1, 31,0);
    tracep->declBus(c+96,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_MAC_Combinatorial ");
    tracep->declBus(c+93,"alpha", false,-1, 31,0);
    tracep->declBus(c+94,"bravo", false,-1, 31,0);
    tracep->declBus(c+95,"acc", false,-1, 31,0);
    tracep->declBus(c+96,"delta", false,-1, 31,0);
    tracep->declBus(c+1,"middle_output", false,-1, 31,0);
    tracep->pushNamePrefix("My_Adder ");
    tracep->declBus(c+1,"alpha", false,-1, 31,0);
    tracep->declBus(c+95,"bravo", false,-1, 31,0);
    tracep->declBus(c+96,"delta", false,-1, 31,0);
    tracep->declBus(c+2,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+97,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+2,"EA", false,-1, 7,0);
    tracep->declBus(c+97,"EB", false,-1, 7,0);
    tracep->declBus(c+3,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+98,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+99,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+100,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+101,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+149,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+150,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+151,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+152,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+4,"EA0", false,-1);
    tracep->declBit(c+102,"EB0", false,-1);
    tracep->declBit(c+5,"EA1", false,-1);
    tracep->declBit(c+103,"EB1", false,-1);
    tracep->declBit(c+6,"E_LeftBig", false,-1);
    tracep->declBit(c+104,"E_RightBig", false,-1);
    tracep->declBit(c+7,"E_Equal", false,-1);
    tracep->declBit(c+8,"SA", false,-1);
    tracep->declBit(c+105,"SB", false,-1);
    tracep->declBus(c+9,"MA", false,-1, 22,0);
    tracep->declBus(c+106,"MB", false,-1, 22,0);
    tracep->declBus(c+10,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+11,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+107,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+108,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+12,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+13,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+109,"M_RightBig", false,-1);
    tracep->declBit(c+14,"M_LeftBig", false,-1);
    tracep->declBit(c+110,"M_Equal", false,-1);
    tracep->declBit(c+15,"MA0", false,-1);
    tracep->declBit(c+111,"MB0", false,-1);
    tracep->declBus(c+16,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+17,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+112,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+18,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+113,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+114,"small_E_mantissa5", false,-1, 23,0);
    tracep->declBus(c+19,"added_Mantissa", false,-1, 24,0);
    tracep->declBus(c+20,"leading_1_position", false,-1, 7,0);
    tracep->declBit(c+21,"mantissa_24th", false,-1);
    tracep->declBit(c+22,"mantissa_23rd", false,-1);
    tracep->declBit(c+23,"mantissa_22nd", false,-1);
    tracep->declBus(c+19,"adder_output", false,-1, 24,0);
    tracep->declBus(c+24,"right_frac_tmp", false,-1, 24,0);
    tracep->declBus(c+25,"lefted_frac", false,-1, 24,0);
    tracep->declBus(c+26,"lefted_frac_righted", false,-1, 24,0);
    tracep->declBus(c+27,"frac", false,-1, 22,0);
    tracep->declBus(c+28,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+29,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+30,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBus(c+31,"left_shifting", false,-1, 7,0);
    tracep->declBit(c+153,"G", false,-1);
    tracep->declBit(c+154,"R", false,-1);
    tracep->declBit(c+155,"S", false,-1);
    tracep->declBus(c+115,"R_mask", false,-1, 23,0);
    tracep->declBit(c+116,"final_sign", false,-1);
    tracep->declBus(c+32,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+117,"final_mantissa", false,-1, 22,0);
    tracep->declBus(c+33,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+34,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+118,"NAN", false,-1);
    tracep->declBit(c+119,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+19,"tmp", false,-1, 24,0);
    tracep->declBus(c+20,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_Multiplier ");
    tracep->declBus(c+93,"alpha", false,-1, 31,0);
    tracep->declBus(c+94,"bravo", false,-1, 31,0);
    tracep->declBus(c+1,"delta", false,-1, 31,0);
    tracep->declBus(c+120,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+121,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+35,"EA", false,-1, 7,0);
    tracep->declBus(c+36,"EB", false,-1, 7,0);
    tracep->declBus(c+122,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+123,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+124,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+125,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+37,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+156,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+126,"EA0", false,-1);
    tracep->declBit(c+127,"EB0", false,-1);
    tracep->declBit(c+128,"EA1", false,-1);
    tracep->declBit(c+129,"EB1", false,-1);
    tracep->declBit(c+38,"E_LeftBig", false,-1);
    tracep->declBit(c+130,"E_RightBig", false,-1);
    tracep->declBit(c+131,"E_Equal", false,-1);
    tracep->declBit(c+132,"SA", false,-1);
    tracep->declBit(c+133,"SB", false,-1);
    tracep->declBit(c+134,"final_sign", false,-1);
    tracep->declBus(c+135,"MA", false,-1, 22,0);
    tracep->declBus(c+136,"MB", false,-1, 22,0);
    tracep->declBus(c+137,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+138,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+139,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+140,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+141,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+142,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+143,"M_RightBig", false,-1);
    tracep->declBit(c+144,"M_LeftBig", false,-1);
    tracep->declBit(c+145,"M_Equal", false,-1);
    tracep->declBit(c+146,"MA0", false,-1);
    tracep->declBit(c+147,"MB0", false,-1);
    tracep->declQuad(c+39,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+41,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+42,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+43,"Until_126", false,-1, 7,0);
    tracep->declBus(c+44,"Maximum_Exp_Cost", false,-1, 7,0);
    tracep->declBus(c+157,"E", false,-1, 8,0);
    tracep->declBus(c+158,"Exp", false,-1, 8,0);
    tracep->declBit(c+45,"Until_126_Carry", false,-1);
    tracep->declBit(c+46,"Maximum_Exp_Cost_Carry", false,-1);
    tracep->declQuad(c+39,"Man1", false,-1, 47,0);
    tracep->declQuad(c+47,"Man2", false,-1, 47,0);
    tracep->declQuad(c+49,"Man3", false,-1, 47,0);
    tracep->declQuad(c+51,"Man4", false,-1, 47,0);
    tracep->declQuad(c+53,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+55,"Man5_cei", false,-1, 47,0);
    tracep->declQuad(c+57,"Man5_ce", false,-1, 47,0);
    tracep->declQuad(c+59,"Man5", false,-1, 47,0);
    tracep->declQuad(c+61,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+63,"Exp1", false,-1, 7,0);
    tracep->declBus(c+64,"Exp2", false,-1, 7,0);
    tracep->declBus(c+159,"Exp3", false,-1, 7,0);
    tracep->declBus(c+160,"Exp4", false,-1, 7,0);
    tracep->declBus(c+65,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+66,"final_Man", false,-1, 47,0);
    tracep->declBus(c+68,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+69,"final_Exp_Carry", false,-1);
    tracep->declBit(c+70,"Exp1_C", false,-1);
    tracep->declBit(c+71,"Exp2_C", false,-1);
    tracep->declBit(c+161,"Exp3_C", false,-1);
    tracep->declBit(c+161,"Exp4_C", false,-1);
    tracep->declBit(c+72,"Exp5_C", false,-1);
    tracep->declBus(c+73,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+74,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+75,"DEBUG_ELB", false,-1);
    tracep->declBit(c+76,"DEBUG_ERB", false,-1);
    tracep->declBit(c+77,"DEBUG_EEQ", false,-1);
    tracep->declQuad(c+78,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+80,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+82,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+84,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+86,"G", false,-1);
    tracep->declBit(c+87,"R", false,-1);
    tracep->declBit(c+88,"S", false,-1);
    tracep->declBus(c+89,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+90,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+91,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+148,"NAN", false,-1);
    tracep->declBit(c+92,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+39,"tmp", false,-1, 47,0);
    tracep->declBus(c+41,"ret", false,-1, 7,0);
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
    bufp->fullBit(oldp+4,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+5,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U)))));
    bufp->fullBit(oldp+6,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig));
    bufp->fullBit(oldp+7,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal));
    bufp->fullBit(oldp+8,((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                           >> 0x1fU)));
    bufp->fullIData(oldp+9,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),23);
    bufp->fullIData(oldp+10,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))),24);
    bufp->fullIData(oldp+11,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),24);
    bufp->fullIData(oldp+12,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1),24);
    bufp->fullIData(oldp+13,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2),24);
    bufp->fullBit(oldp+14,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig));
    bufp->fullBit(oldp+15,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))));
    bufp->fullIData(oldp+16,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa),24);
    bufp->fullIData(oldp+17,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa),24);
    bufp->fullIData(oldp+18,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+19,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+20,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position),8);
    bufp->fullBit(oldp+21,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x18U))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x17U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x16U))));
    bufp->fullIData(oldp+24,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                            >> 1U))),25);
    bufp->fullIData(oldp+25,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullIData(oldp+26,((0x1ffffffU & (((0x18U 
                                              >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
                                            >> 1U))),25);
    bufp->fullIData(oldp+27,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)),23);
    bufp->fullIData(oldp+28,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                           >> 1U))),23);
    bufp->fullIData(oldp+29,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                          < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                          ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                          : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                               ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                               << (
                                                   ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                               : 0U)),23);
    bufp->fullIData(oldp+30,((0x7fffffU & (((0x18U 
                                             >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullCData(oldp+31,((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                               < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                               ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                               : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))),8);
    bufp->fullCData(oldp+32,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent),8);
    bufp->fullCData(oldp+33,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+34,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullCData(oldp+35,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA),8);
    bufp->fullCData(oldp+36,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB),8);
    bufp->fullSData(oldp+37,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB),9);
    bufp->fullBit(oldp+38,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig));
    bufp->fullQData(oldp+39,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original),48);
    bufp->fullCData(oldp+41,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position),8);
    bufp->fullCData(oldp+42,((0xffU & ((IData)(0x2eU) 
                                       - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))),8);
    bufp->fullCData(oldp+43,((0xffU & ((IData)(0x80U) 
                                       + (0x1ffU & 
                                          (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
    bufp->fullCData(oldp+44,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x80U)))),8);
    bufp->fullBit(oldp+45,((1U & (((IData)(0x80U) + 
                                   (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                  >> 8U))));
    bufp->fullBit(oldp+46,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                   - (IData)(0x80U)) 
                                  >> 8U))));
    bufp->fullQData(oldp+47,((0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                   >> 1U))),48);
    bufp->fullQData(oldp+49,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man3),48);
    bufp->fullQData(oldp+51,(((0x2fU >= (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                     << (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+53,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp),48);
    bufp->fullQData(oldp+55,((((0xffU & ((IData)(0x2eU) 
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
    bufp->fullQData(oldp+57,(((0x2fU >= (0x1ffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                     >> (0x1ffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+59,((0xffffffffffffULL & (
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
    bufp->fullQData(oldp+61,(((0x2fU >= (0xffU & ((IData)(0x80U) 
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
    bufp->fullCData(oldp+63,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)))),8);
    bufp->fullCData(oldp+64,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU))))),8);
    bufp->fullCData(oldp+65,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)) 
                                       - ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))),8);
    bufp->fullQData(oldp+66,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man),48);
    bufp->fullCData(oldp+68,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp),8);
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB)
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
                                   : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB)) 
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
    bufp->fullBit(oldp+70,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                   - (IData)(0x7fU)) 
                                  >> 8U))));
    bufp->fullBit(oldp+71,((1U & (((IData)(1U) + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                  >> 8U))));
    bufp->fullBit(oldp+72,((1U & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                    - (IData)(0x7fU)) 
                                   - (0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                  >> 8U))));
    bufp->fullCData(oldp+73,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+74,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+75,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB));
    bufp->fullBit(oldp+76,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB));
    bufp->fullBit(oldp+77,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_EEQ));
    bufp->fullQData(oldp+78,((0x3fffffffffffULL & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)),48);
    bufp->fullQData(oldp+80,((0x7fffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))),48);
    bufp->fullQData(oldp+82,((0xffffffffffffULL & (1ULL 
                                                   + 
                                                   (0x7fffffULL 
                                                    & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                       >> 0x17U))))),48);
    bufp->fullQData(oldp+84,((0x7fffffffffffULL & (
                                                   (1ULL 
                                                    + 
                                                    (0x7fffffULL 
                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                        >> 0x17U))) 
                                                   >> 1U))),48);
    bufp->fullBit(oldp+86,((1U & (IData)((0x7fffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+87,((1U & (IData)((0xffffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+88,((0U != (0x3fffffU & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))));
    bufp->fullSData(oldp+89,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+90,((0x7fffffU & ((((IData)(
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
    bufp->fullCData(oldp+91,((0xffU & ((((IData)((0xffffffULL 
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
    bufp->fullBit(oldp+92,(((0xfeU < ((0x100U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB)
                                                   ? 
                                                  ((0x2fU 
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
                                                   : 
                                                  ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB)) 
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
    bufp->fullIData(oldp+93,(vlSelf->alpha),32);
    bufp->fullIData(oldp+94,(vlSelf->bravo),32);
    bufp->fullIData(oldp+95,(vlSelf->acc),32);
    bufp->fullIData(oldp+96,(vlSelf->delta),32);
    bufp->fullCData(oldp+97,((0xffU & (vlSelf->acc 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+98,((0xffU & ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                        >> 0x17U) - 
                                       (vlSelf->acc 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+99,((0xffU & ((vlSelf->acc 
                                        >> 0x17U) - 
                                       (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+100,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                         ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U) 
                                            - (vlSelf->acc 
                                               >> 0x17U))
                                         : ((vlSelf->acc 
                                             >> 0x17U) 
                                            - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                               >> 0x17U))))),8);
    bufp->fullCData(oldp+101,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+102,((0U == (0xffU & (vlSelf->acc 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+103,((0xffU == (0xffU & (vlSelf->acc 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+104,(((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x17U)) < 
                             (0xffU & (vlSelf->acc 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+105,((vlSelf->acc >> 0x1fU)));
    bufp->fullIData(oldp+106,((0x7fffffU & vlSelf->acc)),23);
    bufp->fullIData(oldp+107,((((0U != (0xffU & (vlSelf->acc 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->acc))),24);
    bufp->fullIData(oldp+108,((0x7fffffU & vlSelf->acc)),24);
    bufp->fullBit(oldp+109,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             < (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+110,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             == (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+111,((0U == (0x7fffffU & vlSelf->acc))));
    bufp->fullIData(oldp+112,((((0xffU == (0xffU & 
                                           (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                            >> 0x17U))) 
                                | (0xffU == (0xffU 
                                             & (vlSelf->acc 
                                                >> 0x17U))))
                                ? 0xffffffU : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa)),24);
    bufp->fullIData(oldp+113,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              ^ vlSelf->acc) 
                                             >> 0x1fU)
                                             ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                             : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+114,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              ^ vlSelf->acc) 
                                             >> 0x1fU) 
                                            + (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                 ^ vlSelf->acc) 
                                                >> 0x1fU)
                                                ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                                : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->fullIData(oldp+115,(((0x17U >= (0xffU & (
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
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
                                                << 
                                                (0xffU 
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
    bufp->fullBit(oldp+116,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                    | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                       & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                    ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x1fU) : 
                                   (vlSelf->acc >> 0x1fU)))));
    bufp->fullIData(oldp+117,((0x7fffffU & (((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
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
                                                 : 
                                                (((IData)(
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
    bufp->fullCData(oldp+120,((0xffU & (vlSelf->alpha 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+121,((0xffU & (vlSelf->bravo 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+122,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                         ? (vlSelf->alpha 
                                            >> 0x17U)
                                         : (vlSelf->bravo 
                                            >> 0x17U)))),8);
    bufp->fullCData(oldp+123,((0xffU & ((vlSelf->alpha 
                                         >> 0x17U) 
                                        - (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+124,((0xffU & ((vlSelf->bravo 
                                         >> 0x17U) 
                                        - (vlSelf->alpha 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+125,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+126,((0U == (0xffU & (vlSelf->alpha 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+127,((0U == (0xffU & (vlSelf->bravo 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+128,((0xffU == (0xffU & (vlSelf->alpha 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+129,((0xffU == (0xffU & (vlSelf->bravo 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+130,(((0xffU & (vlSelf->alpha 
                                       >> 0x17U)) < 
                             (0xffU & (vlSelf->bravo 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+131,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                 >> 0x17U)) 
                                       < (0xffU & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                      | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+132,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+133,((vlSelf->bravo >> 0x1fU)));
    bufp->fullBit(oldp+134,(((vlSelf->alpha ^ vlSelf->bravo) 
                             >> 0x1fU)));
    bufp->fullIData(oldp+135,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+136,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+137,((((0U != (0xffU & (vlSelf->alpha 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->alpha))),24);
    bufp->fullIData(oldp+138,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+139,((((0U != (0xffU & (vlSelf->bravo 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->bravo))),24);
    bufp->fullIData(oldp+140,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullIData(oldp+141,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->alpha)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->alpha))))
                                ? (0x7fffffU & vlSelf->alpha)
                                : (((0U != (0xffU & 
                                            (vlSelf->alpha 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->alpha)))),24);
    bufp->fullIData(oldp+142,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->bravo)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->bravo))))
                                ? (0x7fffffU & vlSelf->bravo)
                                : (((0U != (0xffU & 
                                            (vlSelf->bravo 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->bravo)))),24);
    bufp->fullBit(oldp+143,(((0x7fffffU & vlSelf->alpha) 
                             < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+144,(((0x7fffffU & vlSelf->alpha) 
                             > (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+145,(((0x7fffffU & vlSelf->alpha) 
                             == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+146,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+147,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+148,((((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA)) 
                              & (0U != (0x7fffffU & vlSelf->alpha))) 
                             | ((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB)) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->bravo))))));
    bufp->fullBit(oldp+149,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+150,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+151,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+152,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB_minus_254),9);
    bufp->fullBit(oldp+153,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G));
    bufp->fullBit(oldp+154,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R));
    bufp->fullBit(oldp+155,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S));
    bufp->fullSData(oldp+156,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+157,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E),9);
    bufp->fullSData(oldp+158,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Exp),9);
    bufp->fullCData(oldp+159,(0U),8);
    bufp->fullCData(oldp+160,(1U),8);
    bufp->fullBit(oldp+161,(0U));
}
