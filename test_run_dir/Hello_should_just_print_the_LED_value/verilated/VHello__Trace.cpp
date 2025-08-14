// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHello__Syms.h"


void VHello::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHello::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlTOPp->Hello__DOT__linkStageReg_0),35);
            tracep->chgQData(oldp+2,(vlTOPp->Hello__DOT__linkStageReg_1),35);
            tracep->chgQData(oldp+4,(vlTOPp->Hello__DOT__linkStageReg_2),35);
            tracep->chgQData(oldp+6,(vlTOPp->Hello__DOT__linkStageReg_3),35);
            tracep->chgQData(oldp+8,(vlTOPp->Hello__DOT__linkStageReg_4),35);
            tracep->chgBit(oldp+10,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+11,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+12,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                   >> 0x20U)))));
            tracep->chgQData(oldp+13,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_0)) 
                                       << 2U)),34);
            tracep->chgIData(oldp+15,(vlTOPp->Hello__DOT__data),32);
            tracep->chgCData(oldp+16,(vlTOPp->Hello__DOT__direction_0),2);
            tracep->chgBit(oldp+17,((1U & ((~ ((IData)(
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
            tracep->chgQData(oldp+18,(vlTOPp->Hello__DOT__HPUStageReg_0),35);
            tracep->chgBit(oldp+20,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+21,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+22,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                   >> 0x20U)))));
            tracep->chgQData(oldp+23,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_1)) 
                                       << 2U)),34);
            tracep->chgIData(oldp+25,(vlTOPp->Hello__DOT__data_1),32);
            tracep->chgCData(oldp+26,(vlTOPp->Hello__DOT__direction_1),2);
            tracep->chgBit(oldp+27,((1U & ((~ ((IData)(
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
            tracep->chgQData(oldp+28,(vlTOPp->Hello__DOT__HPUStageReg_1),35);
            tracep->chgBit(oldp+30,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+31,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+32,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                   >> 0x20U)))));
            tracep->chgQData(oldp+33,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_2)) 
                                       << 2U)),34);
            tracep->chgIData(oldp+35,(vlTOPp->Hello__DOT__data_2),32);
            tracep->chgCData(oldp+36,(vlTOPp->Hello__DOT__direction_2),2);
            tracep->chgBit(oldp+37,((1U & ((~ ((IData)(
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
            tracep->chgQData(oldp+38,(vlTOPp->Hello__DOT__HPUStageReg_2),35);
            tracep->chgBit(oldp+40,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+41,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+42,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                   >> 0x20U)))));
            tracep->chgQData(oldp+43,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_3)) 
                                       << 2U)),34);
            tracep->chgIData(oldp+45,(vlTOPp->Hello__DOT__data_3),32);
            tracep->chgCData(oldp+46,(vlTOPp->Hello__DOT__direction_3),2);
            tracep->chgBit(oldp+47,((1U & ((~ ((IData)(
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
            tracep->chgQData(oldp+48,(vlTOPp->Hello__DOT__HPUStageReg_3),35);
            tracep->chgBit(oldp+50,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+51,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+52,((1U & (IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                   >> 0x20U)))));
            tracep->chgQData(oldp+53,(((QData)((IData)(vlTOPp->Hello__DOT__linkStageReg_4)) 
                                       << 2U)),34);
            tracep->chgIData(oldp+55,(vlTOPp->Hello__DOT__data_4),32);
            tracep->chgCData(oldp+56,(vlTOPp->Hello__DOT__direction_4),2);
            tracep->chgBit(oldp+57,((1U & ((~ ((IData)(
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
            tracep->chgQData(oldp+58,(vlTOPp->Hello__DOT__HPUStageReg_4),35);
        }
        tracep->chgBit(oldp+60,(vlTOPp->clock));
        tracep->chgBit(oldp+61,(vlTOPp->reset));
        tracep->chgQData(oldp+62,(vlTOPp->io_in_0),35);
        tracep->chgQData(oldp+64,(vlTOPp->io_in_1),35);
        tracep->chgQData(oldp+66,(vlTOPp->io_in_2),35);
        tracep->chgQData(oldp+68,(vlTOPp->io_in_3),35);
        tracep->chgQData(oldp+70,(vlTOPp->io_in_4),35);
        tracep->chgQData(oldp+72,(vlTOPp->io_out_0),35);
        tracep->chgQData(oldp+74,(vlTOPp->io_out_1),35);
        tracep->chgQData(oldp+76,(vlTOPp->io_out_2),35);
        tracep->chgQData(oldp+78,(vlTOPp->io_out_3),35);
        tracep->chgQData(oldp+80,(vlTOPp->io_out_4),35);
    }
}

void VHello::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHello__Syms* __restrict vlSymsp = static_cast<VHello__Syms*>(userp);
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
