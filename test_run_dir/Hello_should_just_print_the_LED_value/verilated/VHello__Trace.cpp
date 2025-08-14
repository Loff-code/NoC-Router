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
            tracep->chgCData(oldp+0,(vlTOPp->Hello__DOT__stateReg),3);
            tracep->chgIData(oldp+1,(vlTOPp->Hello__DOT__a),32);
            tracep->chgIData(oldp+2,(vlTOPp->Hello__DOT__b),32);
        }
        tracep->chgBit(oldp+3,(vlTOPp->clock));
        tracep->chgBit(oldp+4,(vlTOPp->reset));
        tracep->chgBit(oldp+5,(vlTOPp->io_start));
        tracep->chgIData(oldp+6,(vlTOPp->io_a),32);
        tracep->chgIData(oldp+7,(vlTOPp->io_b),32);
        tracep->chgIData(oldp+8,(vlTOPp->io_gcd),32);
        tracep->chgBit(oldp+9,(vlTOPp->io_done));
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
