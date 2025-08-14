// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHello.h for the primary calling header

#include "VHello.h"
#include "VHello__Syms.h"

//==========

void VHello::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHello::eval\n"); );
    VHello__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Hello.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VHello::_eval_initial_loop(VHello__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Hello.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VHello::_sequent__TOP__1(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_sequent__TOP__1\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__Hello__DOT__stateReg;
    // Body
    __Vdly__Hello__DOT__stateReg = vlTOPp->Hello__DOT__stateReg;
    if (vlTOPp->reset) {
        __Vdly__Hello__DOT__stateReg = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Hello__DOT__stateReg))) {
            if (vlTOPp->io_start) {
                __Vdly__Hello__DOT__stateReg = 1U;
            }
        } else {
            __Vdly__Hello__DOT__stateReg = ((1U == (IData)(vlTOPp->Hello__DOT__stateReg))
                                             ? ((vlTOPp->Hello__DOT__a 
                                                 != vlTOPp->Hello__DOT__b)
                                                 ? (IData)(vlTOPp->Hello__DOT___GEN_3)
                                                 : 4U)
                                             : ((2U 
                                                 == (IData)(vlTOPp->Hello__DOT__stateReg))
                                                 ? 1U
                                                 : (IData)(vlTOPp->Hello__DOT___GEN_8)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Hello__DOT__a = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Hello__DOT__stateReg))) {
            if (vlTOPp->io_start) {
                vlTOPp->Hello__DOT__a = vlTOPp->io_a;
            }
        } else {
            if ((1U != (IData)(vlTOPp->Hello__DOT__stateReg))) {
                if ((2U == (IData)(vlTOPp->Hello__DOT__stateReg))) {
                    vlTOPp->Hello__DOT__a = vlTOPp->Hello__DOT___a_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Hello__DOT__b = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Hello__DOT__stateReg))) {
            if (vlTOPp->io_start) {
                vlTOPp->Hello__DOT__b = vlTOPp->io_b;
            }
        } else {
            if ((1U != (IData)(vlTOPp->Hello__DOT__stateReg))) {
                if ((2U != (IData)(vlTOPp->Hello__DOT__stateReg))) {
                    vlTOPp->Hello__DOT__b = vlTOPp->Hello__DOT___GEN_7;
                }
            }
        }
    }
    vlTOPp->Hello__DOT__stateReg = __Vdly__Hello__DOT__stateReg;
    vlTOPp->Hello__DOT___GEN_8 = ((3U == (IData)(vlTOPp->Hello__DOT__stateReg))
                                   ? 1U : (IData)(vlTOPp->Hello__DOT__stateReg));
    vlTOPp->io_done = ((0U != (IData)(vlTOPp->Hello__DOT__stateReg)) 
                       & ((1U != (IData)(vlTOPp->Hello__DOT__stateReg)) 
                          & ((2U != (IData)(vlTOPp->Hello__DOT__stateReg)) 
                             & ((3U != (IData)(vlTOPp->Hello__DOT__stateReg)) 
                                & (4U == (IData)(vlTOPp->Hello__DOT__stateReg))))));
    vlTOPp->Hello__DOT___GEN_3 = ((vlTOPp->Hello__DOT__a 
                                   > vlTOPp->Hello__DOT__b)
                                   ? 2U : 3U);
    vlTOPp->Hello__DOT___a_T_1 = (vlTOPp->Hello__DOT__a 
                                  - vlTOPp->Hello__DOT__b);
    vlTOPp->io_gcd = ((0U == (IData)(vlTOPp->Hello__DOT__stateReg))
                       ? 0U : ((1U == (IData)(vlTOPp->Hello__DOT__stateReg))
                                ? 0U : ((2U == (IData)(vlTOPp->Hello__DOT__stateReg))
                                         ? 0U : ((3U 
                                                  == (IData)(vlTOPp->Hello__DOT__stateReg))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->Hello__DOT__stateReg))
                                                   ? vlTOPp->Hello__DOT__a
                                                   : 0U)))));
    vlTOPp->Hello__DOT___GEN_7 = ((3U == (IData)(vlTOPp->Hello__DOT__stateReg))
                                   ? (vlTOPp->Hello__DOT__b 
                                      - vlTOPp->Hello__DOT__a)
                                   : vlTOPp->Hello__DOT__b);
}

void VHello::_eval(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_eval\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VHello::_change_request(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_change_request\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VHello::_change_request_1(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_change_request_1\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHello::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_start & 0xfeU))) {
        Verilated::overWidthError("io_start");}
}
#endif  // VL_DEBUG
