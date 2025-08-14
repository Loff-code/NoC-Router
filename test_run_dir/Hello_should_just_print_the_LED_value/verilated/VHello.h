// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHELLO_H_
#define _VHELLO_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VHello__Syms;
class VHello_VerilatedVcd;


//----------

VL_MODULE(VHello) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_start,0,0);
    VL_OUT8(io_done,0,0);
    VL_IN(io_a,31,0);
    VL_IN(io_b,31,0);
    VL_OUT(io_gcd,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ Hello__DOT__stateReg;
    CData/*2:0*/ Hello__DOT___GEN_3;
    CData/*2:0*/ Hello__DOT___GEN_8;
    IData/*31:0*/ Hello__DOT__a;
    IData/*31:0*/ Hello__DOT__b;
    IData/*31:0*/ Hello__DOT___a_T_1;
    IData/*31:0*/ Hello__DOT___GEN_7;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHello__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHello);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHello(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHello();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VHello__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHello__Syms* symsp, bool first);
  private:
    static QData _change_request(VHello__Syms* __restrict vlSymsp);
    static QData _change_request_1(VHello__Syms* __restrict vlSymsp);
    void _configure_coverage(VHello__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHello__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHello__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHello__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VHello__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VHello__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
