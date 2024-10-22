// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090012_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_24090012_NPC___024ROOT_H_
#define VERILATED_VYSYX_24090012_NPC___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_24090012_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_24090012_NPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(ebreak_flag,0,0);
    CData/*6:0*/ ysyx_24090012_NPC__DOT__opcode;
    CData/*2:0*/ ysyx_24090012_NPC__DOT__func3;
    CData/*6:0*/ ysyx_24090012_NPC__DOT__func7;
    CData/*3:0*/ ysyx_24090012_NPC__DOT__alu_op;
    CData/*4:0*/ __VdlyDim0__ysyx_24090012_NPC__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __VdlySet__ysyx_24090012_NPC__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(mem_data,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(exit_code,31,0);
    IData/*31:0*/ ysyx_24090012_NPC__DOT__imm;
    IData/*31:0*/ ysyx_24090012_NPC__DOT__rs1_data;
    IData/*31:0*/ ysyx_24090012_NPC__DOT__rs2_data;
    IData/*31:0*/ ysyx_24090012_NPC__DOT__result;
    IData/*31:0*/ ysyx_24090012_NPC__DOT__next_pc;
    IData/*31:0*/ __Vfunc_ysyx_24090012_NPC__DOT__exu__DOT__pmem_read__2__Vfuncout;
    IData/*31:0*/ __VdlyVal__ysyx_24090012_NPC__DOT__regfile__DOT__rf__v0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24090012_NPC__DOT__regfile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24090012_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090012_NPC___024root(Vysyx_24090012_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_24090012_NPC___024root();
    VL_UNCOPYABLE(Vysyx_24090012_NPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
