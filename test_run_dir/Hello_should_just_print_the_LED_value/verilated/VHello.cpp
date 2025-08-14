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
    // Body
    vlTOPp->Hello__DOT__linkStageReg_4 = vlTOPp->io_in_4;
    vlTOPp->Hello__DOT__linkStageReg_3 = vlTOPp->io_in_3;
    vlTOPp->Hello__DOT__linkStageReg_2 = vlTOPp->io_in_2;
    vlTOPp->Hello__DOT__linkStageReg_1 = vlTOPp->io_in_1;
    vlTOPp->Hello__DOT__linkStageReg_0 = vlTOPp->io_in_0;
    vlTOPp->Hello__DOT__data_4 = ((1U & ((IData)((vlTOPp->Hello__DOT__linkStageReg_4 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_4 
                                                    >> 0x22U))))
                                   ? (0xfffffffcU & 
                                      ((IData)(vlTOPp->Hello__DOT__linkStageReg_4) 
                                       << 2U)) : (IData)(vlTOPp->Hello__DOT__linkStageReg_4));
    vlTOPp->Hello__DOT__data_3 = ((1U & ((IData)((vlTOPp->Hello__DOT__linkStageReg_3 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_3 
                                                    >> 0x22U))))
                                   ? (0xfffffffcU & 
                                      ((IData)(vlTOPp->Hello__DOT__linkStageReg_3) 
                                       << 2U)) : (IData)(vlTOPp->Hello__DOT__linkStageReg_3));
    vlTOPp->Hello__DOT__data_2 = ((1U & ((IData)((vlTOPp->Hello__DOT__linkStageReg_2 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_2 
                                                    >> 0x22U))))
                                   ? (0xfffffffcU & 
                                      ((IData)(vlTOPp->Hello__DOT__linkStageReg_2) 
                                       << 2U)) : (IData)(vlTOPp->Hello__DOT__linkStageReg_2));
    vlTOPp->Hello__DOT__data_1 = ((1U & ((IData)((vlTOPp->Hello__DOT__linkStageReg_1 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlTOPp->Hello__DOT__linkStageReg_1 
                                                    >> 0x22U))))
                                   ? (0xfffffffcU & 
                                      ((IData)(vlTOPp->Hello__DOT__linkStageReg_1) 
                                       << 2U)) : (IData)(vlTOPp->Hello__DOT__linkStageReg_1));
    vlTOPp->Hello__DOT__data = ((1U & ((IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                >> 0x21U)) 
                                       & (IData)((vlTOPp->Hello__DOT__linkStageReg_0 
                                                  >> 0x22U))))
                                 ? (0xfffffffcU & ((IData)(vlTOPp->Hello__DOT__linkStageReg_0) 
                                                   << 2U))
                                 : (IData)(vlTOPp->Hello__DOT__linkStageReg_0));
    vlTOPp->Hello__DOT__direction_4 = ((1U & ((IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_4 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->Hello__DOT__linkStageReg_4 
                                                         >> 0x22U))))
                                        ? (3U & (vlTOPp->Hello__DOT__data_4 
                                                 >> 0x1eU))
                                        : 0U);
    vlTOPp->Hello__DOT__HPUStageReg_4 = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->Hello__DOT__linkStageReg_4 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Hello__DOT__linkStageReg_4 
                                                                         >> 0x21U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Hello__DOT__linkStageReg_4 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Hello__DOT__data_4)))));
    vlTOPp->Hello__DOT__direction_3 = ((1U & ((IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_3 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->Hello__DOT__linkStageReg_3 
                                                         >> 0x22U))))
                                        ? (3U & (vlTOPp->Hello__DOT__data_3 
                                                 >> 0x1eU))
                                        : 0U);
    vlTOPp->Hello__DOT__HPUStageReg_3 = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->Hello__DOT__linkStageReg_3 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Hello__DOT__linkStageReg_3 
                                                                         >> 0x21U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Hello__DOT__linkStageReg_3 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Hello__DOT__data_3)))));
    vlTOPp->Hello__DOT__direction_2 = ((1U & ((IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_2 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->Hello__DOT__linkStageReg_2 
                                                         >> 0x22U))))
                                        ? (3U & (vlTOPp->Hello__DOT__data_2 
                                                 >> 0x1eU))
                                        : 0U);
    vlTOPp->Hello__DOT__HPUStageReg_2 = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->Hello__DOT__linkStageReg_2 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Hello__DOT__linkStageReg_2 
                                                                         >> 0x21U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Hello__DOT__linkStageReg_2 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Hello__DOT__data_2)))));
    vlTOPp->Hello__DOT__direction_1 = ((1U & ((IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_1 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->Hello__DOT__linkStageReg_1 
                                                         >> 0x22U))))
                                        ? (3U & (vlTOPp->Hello__DOT__data_1 
                                                 >> 0x1eU))
                                        : 0U);
    vlTOPp->Hello__DOT__HPUStageReg_1 = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->Hello__DOT__linkStageReg_1 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Hello__DOT__linkStageReg_1 
                                                                         >> 0x21U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Hello__DOT__linkStageReg_1 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Hello__DOT__data_1)))));
    vlTOPp->Hello__DOT__direction_0 = ((1U & ((IData)(
                                                      (vlTOPp->Hello__DOT__linkStageReg_0 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->Hello__DOT__linkStageReg_0 
                                                         >> 0x22U))))
                                        ? (3U & (vlTOPp->Hello__DOT__data 
                                                 >> 0x1eU))
                                        : 0U);
    vlTOPp->Hello__DOT__HPUStageReg_0 = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->Hello__DOT__linkStageReg_0 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Hello__DOT__linkStageReg_0 
                                                                         >> 0x21U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Hello__DOT__linkStageReg_0 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Hello__DOT__data)))));
    vlTOPp->Hello__DOT___crossbarStageReg_T_9 = ((1U 
                                                  & ((~ 
                                                      ((IData)(
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
                                                                   >> 0x22U)))))
                                                  ? vlTOPp->Hello__DOT__HPUStageReg_4
                                                  : 0ULL);
    vlTOPp->Hello__DOT___crossbarStageReg_T_7 = ((1U 
                                                  & ((~ 
                                                      ((IData)(
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
                                                                   >> 0x22U)))))
                                                  ? vlTOPp->Hello__DOT__HPUStageReg_3
                                                  : 0ULL);
    vlTOPp->Hello__DOT___crossbarStageReg_T_5 = ((1U 
                                                  & ((~ 
                                                      ((IData)(
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
                                                                   >> 0x22U)))))
                                                  ? vlTOPp->Hello__DOT__HPUStageReg_2
                                                  : 0ULL);
    vlTOPp->Hello__DOT___crossbarStageReg_T_3 = ((1U 
                                                  & ((~ 
                                                      ((IData)(
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
                                                                   >> 0x22U)))))
                                                  ? vlTOPp->Hello__DOT__HPUStageReg_1
                                                  : 0ULL);
    vlTOPp->io_out_4 = ((3U == (IData)(vlTOPp->Hello__DOT__direction_3))
                         ? vlTOPp->Hello__DOT__HPUStageReg_3
                         : ((2U == (IData)(vlTOPp->Hello__DOT__direction_2))
                             ? vlTOPp->Hello__DOT__HPUStageReg_2
                             : ((1U == (IData)(vlTOPp->Hello__DOT__direction_1))
                                 ? vlTOPp->Hello__DOT__HPUStageReg_1
                                 : ((0U == (IData)(vlTOPp->Hello__DOT__direction_0))
                                     ? vlTOPp->Hello__DOT__HPUStageReg_0
                                     : 0ULL))));
    vlTOPp->Hello__DOT___crossbarStageReg_T_1 = ((1U 
                                                  & ((~ 
                                                      ((IData)(
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
                                                                   >> 0x22U)))))
                                                  ? vlTOPp->Hello__DOT__HPUStageReg_0
                                                  : 0ULL);
    vlTOPp->io_out_0 = ((0U == (IData)(vlTOPp->Hello__DOT__direction_4))
                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_9
                         : ((0U == (IData)(vlTOPp->Hello__DOT__direction_3))
                             ? vlTOPp->Hello__DOT___crossbarStageReg_T_7
                             : ((0U == (IData)(vlTOPp->Hello__DOT__direction_2))
                                 ? vlTOPp->Hello__DOT___crossbarStageReg_T_5
                                 : ((0U == (IData)(vlTOPp->Hello__DOT__direction_1))
                                     ? vlTOPp->Hello__DOT___crossbarStageReg_T_3
                                     : ((0U == (IData)(vlTOPp->Hello__DOT__direction_0))
                                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_1
                                         : 0ULL)))));
    vlTOPp->io_out_1 = ((1U == (IData)(vlTOPp->Hello__DOT__direction_4))
                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_9
                         : ((1U == (IData)(vlTOPp->Hello__DOT__direction_3))
                             ? vlTOPp->Hello__DOT___crossbarStageReg_T_7
                             : ((1U == (IData)(vlTOPp->Hello__DOT__direction_2))
                                 ? vlTOPp->Hello__DOT___crossbarStageReg_T_5
                                 : ((1U == (IData)(vlTOPp->Hello__DOT__direction_1))
                                     ? vlTOPp->Hello__DOT___crossbarStageReg_T_3
                                     : ((1U == (IData)(vlTOPp->Hello__DOT__direction_0))
                                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_1
                                         : 0ULL)))));
    vlTOPp->io_out_2 = ((2U == (IData)(vlTOPp->Hello__DOT__direction_4))
                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_9
                         : ((2U == (IData)(vlTOPp->Hello__DOT__direction_3))
                             ? vlTOPp->Hello__DOT___crossbarStageReg_T_7
                             : ((2U == (IData)(vlTOPp->Hello__DOT__direction_2))
                                 ? vlTOPp->Hello__DOT___crossbarStageReg_T_5
                                 : ((2U == (IData)(vlTOPp->Hello__DOT__direction_1))
                                     ? vlTOPp->Hello__DOT___crossbarStageReg_T_3
                                     : ((2U == (IData)(vlTOPp->Hello__DOT__direction_0))
                                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_1
                                         : 0ULL)))));
    vlTOPp->io_out_3 = ((3U == (IData)(vlTOPp->Hello__DOT__direction_4))
                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_9
                         : ((3U == (IData)(vlTOPp->Hello__DOT__direction_3))
                             ? vlTOPp->Hello__DOT___crossbarStageReg_T_7
                             : ((3U == (IData)(vlTOPp->Hello__DOT__direction_2))
                                 ? vlTOPp->Hello__DOT___crossbarStageReg_T_5
                                 : ((3U == (IData)(vlTOPp->Hello__DOT__direction_1))
                                     ? vlTOPp->Hello__DOT___crossbarStageReg_T_3
                                     : ((3U == (IData)(vlTOPp->Hello__DOT__direction_0))
                                         ? vlTOPp->Hello__DOT___crossbarStageReg_T_1
                                         : 0ULL)))));
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
    if (VL_UNLIKELY((io_in_0 & 0ULL))) {
        Verilated::overWidthError("io_in_0");}
    if (VL_UNLIKELY((io_in_1 & 0ULL))) {
        Verilated::overWidthError("io_in_1");}
    if (VL_UNLIKELY((io_in_2 & 0ULL))) {
        Verilated::overWidthError("io_in_2");}
    if (VL_UNLIKELY((io_in_3 & 0ULL))) {
        Verilated::overWidthError("io_in_3");}
    if (VL_UNLIKELY((io_in_4 & 0ULL))) {
        Verilated::overWidthError("io_in_4");}
}
#endif  // VL_DEBUG
