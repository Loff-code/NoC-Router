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
        tracep->declBit(c+4,"clock", false,-1);
        tracep->declBit(c+5,"reset", false,-1);
        tracep->declBit(c+6,"io_start", false,-1);
        tracep->declBus(c+7,"io_a", false,-1, 31,0);
        tracep->declBus(c+8,"io_b", false,-1, 31,0);
        tracep->declBus(c+9,"io_gcd", false,-1, 31,0);
        tracep->declBit(c+10,"io_done", false,-1);
        tracep->declBit(c+4,"Hello clock", false,-1);
        tracep->declBit(c+5,"Hello reset", false,-1);
        tracep->declBit(c+6,"Hello io_start", false,-1);
        tracep->declBus(c+7,"Hello io_a", false,-1, 31,0);
        tracep->declBus(c+8,"Hello io_b", false,-1, 31,0);
        tracep->declBus(c+9,"Hello io_gcd", false,-1, 31,0);
        tracep->declBit(c+10,"Hello io_done", false,-1);
        tracep->declBus(c+1,"Hello stateReg", false,-1, 2,0);
        tracep->declBus(c+2,"Hello a", false,-1, 31,0);
        tracep->declBus(c+3,"Hello b", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlTOPp->Hello__DOT__stateReg),3);
        tracep->fullIData(oldp+2,(vlTOPp->Hello__DOT__a),32);
        tracep->fullIData(oldp+3,(vlTOPp->Hello__DOT__b),32);
        tracep->fullBit(oldp+4,(vlTOPp->clock));
        tracep->fullBit(oldp+5,(vlTOPp->reset));
        tracep->fullBit(oldp+6,(vlTOPp->io_start));
        tracep->fullIData(oldp+7,(vlTOPp->io_a),32);
        tracep->fullIData(oldp+8,(vlTOPp->io_b),32);
        tracep->fullIData(oldp+9,(vlTOPp->io_gcd),32);
        tracep->fullBit(oldp+10,(vlTOPp->io_done));
    }
}
