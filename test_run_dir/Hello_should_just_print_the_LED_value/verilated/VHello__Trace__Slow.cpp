// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHello__Syms.h"


//======================

void VHello::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHello::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHello::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHello::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHello::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+61,"clock", false,-1);
        tracep->declBit(c+62,"reset", false,-1);
        tracep->declQuad(c+63,"io_in_0", false,-1, 34,0);
        tracep->declQuad(c+65,"io_in_1", false,-1, 34,0);
        tracep->declQuad(c+67,"io_in_2", false,-1, 34,0);
        tracep->declQuad(c+69,"io_in_3", false,-1, 34,0);
        tracep->declQuad(c+71,"io_in_4", false,-1, 34,0);
        tracep->declQuad(c+73,"io_out_0", false,-1, 34,0);
        tracep->declQuad(c+75,"io_out_1", false,-1, 34,0);
        tracep->declQuad(c+77,"io_out_2", false,-1, 34,0);
        tracep->declQuad(c+79,"io_out_3", false,-1, 34,0);
        tracep->declQuad(c+81,"io_out_4", false,-1, 34,0);
        tracep->declBit(c+61,"Hello clock", false,-1);
        tracep->declBit(c+62,"Hello reset", false,-1);
        tracep->declQuad(c+63,"Hello io_in_0", false,-1, 34,0);
        tracep->declQuad(c+65,"Hello io_in_1", false,-1, 34,0);
        tracep->declQuad(c+67,"Hello io_in_2", false,-1, 34,0);
        tracep->declQuad(c+69,"Hello io_in_3", false,-1, 34,0);
        tracep->declQuad(c+71,"Hello io_in_4", false,-1, 34,0);
        tracep->declQuad(c+73,"Hello io_out_0", false,-1, 34,0);
        tracep->declQuad(c+75,"Hello io_out_1", false,-1, 34,0);
        tracep->declQuad(c+77,"Hello io_out_2", false,-1, 34,0);
        tracep->declQuad(c+79,"Hello io_out_3", false,-1, 34,0);
        tracep->declQuad(c+81,"Hello io_out_4", false,-1, 34,0);
        tracep->declQuad(c+1,"Hello linkStageReg_0", false,-1, 34,0);
        tracep->declQuad(c+3,"Hello linkStageReg_1", false,-1, 34,0);
        tracep->declQuad(c+5,"Hello linkStageReg_2", false,-1, 34,0);
        tracep->declQuad(c+7,"Hello linkStageReg_3", false,-1, 34,0);
        tracep->declQuad(c+9,"Hello linkStageReg_4", false,-1, 34,0);
        tracep->declBit(c+11,"Hello valid", false,-1);
        tracep->declBit(c+12,"Hello header", false,-1);
        tracep->declBit(c+13,"Hello end_", false,-1);
        tracep->declQuad(c+14,"Hello headerData", false,-1, 33,0);
        tracep->declBus(c+16,"Hello data", false,-1, 31,0);
        tracep->declBus(c+17,"Hello direction_0", false,-1, 1,0);
        tracep->declBit(c+18,"Hello ongoing_0", false,-1);
        tracep->declQuad(c+19,"Hello HPUStageReg_0", false,-1, 34,0);
        tracep->declBit(c+21,"Hello valid_1", false,-1);
        tracep->declBit(c+22,"Hello header_1", false,-1);
        tracep->declBit(c+23,"Hello end_1", false,-1);
        tracep->declQuad(c+24,"Hello headerData_1", false,-1, 33,0);
        tracep->declBus(c+26,"Hello data_1", false,-1, 31,0);
        tracep->declBus(c+27,"Hello direction_1", false,-1, 1,0);
        tracep->declBit(c+28,"Hello ongoing_1", false,-1);
        tracep->declQuad(c+29,"Hello HPUStageReg_1", false,-1, 34,0);
        tracep->declBit(c+31,"Hello valid_2", false,-1);
        tracep->declBit(c+32,"Hello header_2", false,-1);
        tracep->declBit(c+33,"Hello end_2", false,-1);
        tracep->declQuad(c+34,"Hello headerData_2", false,-1, 33,0);
        tracep->declBus(c+36,"Hello data_2", false,-1, 31,0);
        tracep->declBus(c+37,"Hello direction_2", false,-1, 1,0);
        tracep->declBit(c+38,"Hello ongoing_2", false,-1);
        tracep->declQuad(c+39,"Hello HPUStageReg_2", false,-1, 34,0);
        tracep->declBit(c+41,"Hello valid_3", false,-1);
        tracep->declBit(c+42,"Hello header_3", false,-1);
        tracep->declBit(c+43,"Hello end_3", false,-1);
        tracep->declQuad(c+44,"Hello headerData_3", false,-1, 33,0);
        tracep->declBus(c+46,"Hello data_3", false,-1, 31,0);
        tracep->declBus(c+47,"Hello direction_3", false,-1, 1,0);
        tracep->declBit(c+48,"Hello ongoing_3", false,-1);
        tracep->declQuad(c+49,"Hello HPUStageReg_3", false,-1, 34,0);
        tracep->declBit(c+51,"Hello valid_4", false,-1);
        tracep->declBit(c+52,"Hello header_4", false,-1);
        tracep->declBit(c+53,"Hello end_4", false,-1);
        tracep->declQuad(c+54,"Hello headerData_4", false,-1, 33,0);
        tracep->declBus(c+56,"Hello data_4", false,-1, 31,0);
        tracep->declBus(c+57,"Hello direction_4", false,-1, 1,0);
        tracep->declBit(c+58,"Hello ongoing_4", false,-1);
        tracep->declQuad(c+59,"Hello HPUStageReg_4", false,-1, 34,0);
    }
}

void VHello::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHello::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHello::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlTOPp->Hello__DOT__linkStageReg_0),35);
        tracep->fullQData(oldp+3,(vlTOPp->Hello__DOT__linkStageReg_1),35);
        tracep->fullQData(oldp+5,(vlTOPp->Hello__DOT__linkStageReg_2),35);
        tracep->fullQData(oldp+7,(vlTOPp->Hello__DOT__linkStageReg_3),35);
        tracep->fullQData(oldp+9,(vlTOPp->Hello__DOT__linkStageReg_4),35);
        tracep->fullBit(oldp+11,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                >> 0x22U)))));
        tracep->fullBit(oldp+12,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+13,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                >> 0x20U)))));
        tracep->fullQData(oldp+14,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_0)) 
                                    << 2U)),34);
        tracep->fullIData(oldp+16,(vlTOPp->Hello__DOT__data),32);
        tracep->fullCData(oldp+17,(vlTOPp->Hello__DOT__direction_0),2);
        tracep->fullBit(oldp+18,((1U & ((~ ((IData)(
                                                    (vlTOPp->Hello__DOT__linkStageReg_0 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_0 
                                                       >> 0x22U)))) 
                                        & ((IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_0 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlTOPp->Hello__DOT__linkStageReg_0 
                                                      >> 0x22U)))))));
        tracep->fullQData(oldp+19,(vlTOPp->Hello__DOT__HPUStageReg_0),35);
        tracep->fullBit(oldp+21,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                >> 0x22U)))));
        tracep->fullBit(oldp+22,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+23,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                >> 0x20U)))));
        tracep->fullQData(oldp+24,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_1)) 
                                    << 2U)),34);
        tracep->fullIData(oldp+26,(vlTOPp->Hello__DOT__data_1),32);
        tracep->fullCData(oldp+27,(vlTOPp->Hello__DOT__direction_1),2);
        tracep->fullBit(oldp+28,((1U & ((~ ((IData)(
                                                    (vlTOPp->Hello__DOT__linkStageReg_1 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_1 
                                                       >> 0x22U)))) 
                                        & ((IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_1 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlTOPp->Hello__DOT__linkStageReg_1 
                                                      >> 0x22U)))))));
        tracep->fullQData(oldp+29,(vlTOPp->Hello__DOT__HPUStageReg_1),35);
        tracep->fullBit(oldp+31,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                >> 0x22U)))));
        tracep->fullBit(oldp+32,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+33,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                >> 0x20U)))));
        tracep->fullQData(oldp+34,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_2)) 
                                    << 2U)),34);
        tracep->fullIData(oldp+36,(vlTOPp->Hello__DOT__data_2),32);
        tracep->fullCData(oldp+37,(vlTOPp->Hello__DOT__direction_2),2);
        tracep->fullBit(oldp+38,((1U & ((~ ((IData)(
                                                    (vlTOPp->Hello__DOT__linkStageReg_2 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_2 
                                                       >> 0x22U)))) 
                                        & ((IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_2 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlTOPp->Hello__DOT__linkStageReg_2 
                                                      >> 0x22U)))))));
        tracep->fullQData(oldp+39,(vlTOPp->Hello__DOT__HPUStageReg_2),35);
        tracep->fullBit(oldp+41,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                >> 0x22U)))));
        tracep->fullBit(oldp+42,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+43,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                >> 0x20U)))));
        tracep->fullQData(oldp+44,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_3)) 
                                    << 2U)),34);
        tracep->fullIData(oldp+46,(vlTOPp->Hello__DOT__data_3),32);
        tracep->fullCData(oldp+47,(vlTOPp->Hello__DOT__direction_3),2);
        tracep->fullBit(oldp+48,((1U & ((~ ((IData)(
                                                    (vlTOPp->Hello__DOT__linkStageReg_3 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_3 
                                                       >> 0x22U)))) 
                                        & ((IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_3 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlTOPp->Hello__DOT__linkStageReg_3 
                                                      >> 0x22U)))))));
        tracep->fullQData(oldp+49,(vlTOPp->Hello__DOT__HPUStageReg_3),35);
        tracep->fullBit(oldp+51,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                >> 0x22U)))));
        tracep->fullBit(oldp+52,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+53,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                >> 0x20U)))));
        tracep->fullQData(oldp+54,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_4)) 
                                    << 2U)),34);
        tracep->fullIData(oldp+56,(vlTOPp->Hello__DOT__data_4),32);
        tracep->fullCData(oldp+57,(vlTOPp->Hello__DOT__direction_4),2);
        tracep->fullBit(oldp+58,((1U & ((~ ((IData)(
                                                    (vlTOPp->Hello__DOT__linkStageReg_4 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_4 
                                                       >> 0x22U)))) 
                                        & ((IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_4 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlTOPp->Hello__DOT__linkStageReg_4 
                                                      >> 0x22U)))))));
        tracep->fullQData(oldp+59,(vlTOPp->Hello__DOT__HPUStageReg_4),35);
        tracep->fullBit(oldp+61,(vlTOPp->clock));
        tracep->fullBit(oldp+62,(vlTOPp->reset));
        tracep->fullQData(oldp+63,(vlTOPp->io_in_0),35);
        tracep->fullQData(oldp+65,(vlTOPp->io_in_1),35);
        tracep->fullQData(oldp+67,(vlTOPp->io_in_2),35);
        tracep->fullQData(oldp+69,(vlTOPp->io_in_3),35);
        tracep->fullQData(oldp+71,(vlTOPp->io_in_4),35);
        tracep->fullQData(oldp+73,(vlTOPp->io_out_0),35);
        tracep->fullQData(oldp+75,(vlTOPp->io_out_1),35);
        tracep->fullQData(oldp+77,(vlTOPp->io_out_2),35);
        tracep->fullQData(oldp+79,(vlTOPp->io_out_3),35);
        tracep->fullQData(oldp+81,(vlTOPp->io_out_4),35);
    }
}
