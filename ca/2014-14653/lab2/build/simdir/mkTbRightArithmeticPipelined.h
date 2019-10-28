/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Mon Apr  9 21:46:02 KST 2018
 * 
 */

/* Generation options: */
#ifndef __mkTbRightArithmeticPipelined_h__
#define __mkTbRightArithmeticPipelined_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTbRightArithmeticPipelined module */
class MOD_mkTbRightArithmeticPipelined : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Fifo<tUWide> INST_bsrap_bsrp_fifo1;
  MOD_Fifo<tUWide> INST_bsrap_bsrp_fifo2;
  MOD_Fifo<tUWide> INST_bsrap_bsrp_fifo3;
  MOD_Fifo<tUWide> INST_bsrap_bsrp_fifo4;
  MOD_Fifo<tUWide> INST_bsrap_bsrp_fifo5;
  MOD_Fifo<tUWide> INST_bsrap_bsrp_inFifo;
  MOD_Fifo<tUInt64> INST_bsrap_bsrp_outFifo;
  MOD_Reg<tUInt32> INST_correct;
  MOD_Reg<tUInt32> INST_input_cycle;
  MOD_Reg<tUInt32> INST_output_cycle;
  MOD_Reg<tUInt8> INST_randomShift_init;
  MOD_Reg<tUInt8> INST_randomVal_init;
  MOD_Fifo<tUWide> INST_valFifo;
 
 /* Constructor */
 public:
  MOD_mkTbRightArithmeticPipelined(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt32 DEF_x__h23364;
  tUInt32 DEF_x__h22977;
  tUInt8 DEF_output_cycle_05_EQ_128___d106;
 
 /* Local definitions */
 private:
  tUWide DEF_x__h14804;
  tUWide DEF_x__h11276;
  tUWide DEF_x__h7752;
  tUWide DEF_x__h690;
  tUWide DEF_x__h4236;
  tUInt64 DEF_x__h22711;
  tUInt64 DEF_TASK_getRandom___d98;
  tUWide DEF_TASK_getRandom_8_CONCAT_TASK_getRandom_9_BITS__ETC___d101;
  tUWide DEF_bsrap_bsrp_fifo5_first____d79;
  tUWide DEF_bsrap_bsrp_fifo4_first____d67;
  tUWide DEF_bsrap_bsrp_fifo3_first____d54;
  tUWide DEF_bsrap_bsrp_fifo2_first____d40;
  tUWide DEF_bsrap_bsrp_fifo1_first____d24;
  tUWide DEF_bsrap_bsrp_inFifo_first____d4;
  tUWide DEF_ab__h23144;
  tUWide DEF_TASK_getRandom_8_CONCAT_TASK_getRandom_9_BITS__ETC___d103;
 
 /* Rules */
 public:
  void RL_bsrap_bsrp_shift1();
  void RL_bsrap_bsrp_shift2();
  void RL_bsrap_bsrp_shift3();
  void RL_bsrap_bsrp_shift4();
  void RL_bsrap_bsrp_shift5();
  void RL_bsrap_bsrp_shift6();
  void RL_randomVal_initialize();
  void RL_randomShift_initialize();
  void RL_test_request();
  void RL_test_response();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTbRightArithmeticPipelined &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTbRightArithmeticPipelined &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTbRightArithmeticPipelined &backing);
};

#endif /* ifndef __mkTbRightArithmeticPipelined_h__ */
