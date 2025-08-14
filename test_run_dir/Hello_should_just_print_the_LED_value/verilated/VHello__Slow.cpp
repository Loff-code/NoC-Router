// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHello.h for the primary calling header

#include "VHello.h"
#include "VHello__Syms.h"

//==========

VL_CTOR_IMP(VHello) {
    VHello__Syms* __restrict vlSymsp = __VlSymsp = new VHello__Syms(this, name());
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHello::__Vconfigure(VHello__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VHello::~VHello() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VHello::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VHello::_settle__TOP__2(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_settle__TOP__2\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VHello::_eval_initial(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_eval_initial\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VHello::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::final\n"); );
    // Variables
    VHello__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHello::_eval_settle(VHello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_eval_settle\n"); );
    VHello* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VHello::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_start = VL_RAND_RESET_I(1);
    io_a = VL_RAND_RESET_I(32);
    io_b = VL_RAND_RESET_I(32);
    io_gcd = VL_RAND_RESET_I(32);
    io_done = VL_RAND_RESET_I(1);
    Hello__DOT__stateReg = VL_RAND_RESET_I(3);
    Hello__DOT__a = VL_RAND_RESET_I(32);
    Hello__DOT__b = VL_RAND_RESET_I(32);
    Hello__DOT___GEN_3 = VL_RAND_RESET_I(3);
    Hello__DOT___a_T_1 = VL_RAND_RESET_I(32);
    Hello__DOT___GEN_7 = VL_RAND_RESET_I(32);
    Hello__DOT___GEN_8 = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

void VHello::_configure_coverage(VHello__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHello::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}