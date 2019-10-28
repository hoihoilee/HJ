/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Tue May  8 12:55:15 KST 2018
 * 
 */

/* Generation options: */
#ifndef __mkRFile_h__
#define __mkRFile_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkRFile module */
class MOD_mkRFile : public Module {
 
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
  MOD_Reg<tUInt8> INST_rFile_0_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_0_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_0_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_0_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_0_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_0_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_0_lat_0;
  MOD_Wire<tUInt64> INST_rFile_0_lat_1;
  MOD_Reg<tUInt64> INST_rFile_0_rl;
  MOD_Reg<tUInt8> INST_rFile_10_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_10_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_10_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_10_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_10_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_10_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_10_lat_0;
  MOD_Wire<tUInt64> INST_rFile_10_lat_1;
  MOD_Reg<tUInt64> INST_rFile_10_rl;
  MOD_Reg<tUInt8> INST_rFile_11_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_11_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_11_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_11_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_11_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_11_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_11_lat_0;
  MOD_Wire<tUInt64> INST_rFile_11_lat_1;
  MOD_Reg<tUInt64> INST_rFile_11_rl;
  MOD_Reg<tUInt8> INST_rFile_12_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_12_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_12_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_12_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_12_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_12_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_12_lat_0;
  MOD_Wire<tUInt64> INST_rFile_12_lat_1;
  MOD_Reg<tUInt64> INST_rFile_12_rl;
  MOD_Reg<tUInt8> INST_rFile_13_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_13_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_13_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_13_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_13_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_13_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_13_lat_0;
  MOD_Wire<tUInt64> INST_rFile_13_lat_1;
  MOD_Reg<tUInt64> INST_rFile_13_rl;
  MOD_Reg<tUInt8> INST_rFile_14_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_14_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_14_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_14_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_14_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_14_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_14_lat_0;
  MOD_Wire<tUInt64> INST_rFile_14_lat_1;
  MOD_Reg<tUInt64> INST_rFile_14_rl;
  MOD_Reg<tUInt8> INST_rFile_1_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_1_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_1_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_1_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_1_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_1_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_1_lat_0;
  MOD_Wire<tUInt64> INST_rFile_1_lat_1;
  MOD_Reg<tUInt64> INST_rFile_1_rl;
  MOD_Reg<tUInt8> INST_rFile_2_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_2_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_2_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_2_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_2_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_2_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_2_lat_0;
  MOD_Wire<tUInt64> INST_rFile_2_lat_1;
  MOD_Reg<tUInt64> INST_rFile_2_rl;
  MOD_Reg<tUInt8> INST_rFile_3_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_3_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_3_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_3_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_3_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_3_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_3_lat_0;
  MOD_Wire<tUInt64> INST_rFile_3_lat_1;
  MOD_Reg<tUInt64> INST_rFile_3_rl;
  MOD_Reg<tUInt8> INST_rFile_4_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_4_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_4_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_4_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_4_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_4_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_4_lat_0;
  MOD_Wire<tUInt64> INST_rFile_4_lat_1;
  MOD_Reg<tUInt64> INST_rFile_4_rl;
  MOD_Reg<tUInt8> INST_rFile_5_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_5_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_5_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_5_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_5_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_5_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_5_lat_0;
  MOD_Wire<tUInt64> INST_rFile_5_lat_1;
  MOD_Reg<tUInt64> INST_rFile_5_rl;
  MOD_Reg<tUInt8> INST_rFile_6_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_6_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_6_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_6_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_6_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_6_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_6_lat_0;
  MOD_Wire<tUInt64> INST_rFile_6_lat_1;
  MOD_Reg<tUInt64> INST_rFile_6_rl;
  MOD_Reg<tUInt8> INST_rFile_7_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_7_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_7_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_7_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_7_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_7_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_7_lat_0;
  MOD_Wire<tUInt64> INST_rFile_7_lat_1;
  MOD_Reg<tUInt64> INST_rFile_7_rl;
  MOD_Reg<tUInt8> INST_rFile_8_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_8_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_8_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_8_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_8_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_8_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_8_lat_0;
  MOD_Wire<tUInt64> INST_rFile_8_lat_1;
  MOD_Reg<tUInt64> INST_rFile_8_rl;
  MOD_Reg<tUInt8> INST_rFile_9_dummy2_0;
  MOD_Reg<tUInt8> INST_rFile_9_dummy2_1;
  MOD_Wire<tUWide> INST_rFile_9_dummy_0_0;
  MOD_Wire<tUWide> INST_rFile_9_dummy_0_1;
  MOD_Wire<tUWide> INST_rFile_9_dummy_1_0;
  MOD_Wire<tUWide> INST_rFile_9_dummy_1_1;
  MOD_Wire<tUInt64> INST_rFile_9_lat_0;
  MOD_Wire<tUInt64> INST_rFile_9_lat_1;
  MOD_Reg<tUInt64> INST_rFile_9_rl;
 
 /* Constructor */
 public:
  MOD_mkRFile(tSimStateHdl simHdl, char const *name, Module *parent);
 
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
 
 /* Local definitions */
 private:
  tUInt64 DEF_upd__h24804;
  tUInt64 DEF_rFile_14_lat_0_wget____d102;
  tUInt64 DEF_upd__h24743;
  tUInt64 DEF_rFile_13_lat_0_wget____d95;
  tUInt64 DEF_upd__h24682;
  tUInt64 DEF_rFile_12_lat_0_wget____d88;
  tUInt64 DEF_upd__h24621;
  tUInt64 DEF_rFile_11_lat_0_wget____d81;
  tUInt64 DEF_upd__h24560;
  tUInt64 DEF_rFile_10_lat_0_wget____d74;
  tUInt64 DEF_upd__h24499;
  tUInt64 DEF_rFile_9_lat_0_wget____d67;
  tUInt64 DEF_upd__h24438;
  tUInt64 DEF_rFile_8_lat_0_wget____d60;
  tUInt64 DEF_upd__h24377;
  tUInt64 DEF_rFile_7_lat_0_wget____d53;
  tUInt64 DEF_upd__h24316;
  tUInt64 DEF_rFile_6_lat_0_wget____d46;
  tUInt64 DEF_upd__h24255;
  tUInt64 DEF_rFile_5_lat_0_wget____d39;
  tUInt64 DEF_upd__h24194;
  tUInt64 DEF_rFile_4_lat_0_wget____d32;
  tUInt64 DEF_upd__h24133;
  tUInt64 DEF_rFile_3_lat_0_wget____d25;
  tUInt64 DEF_upd__h24072;
  tUInt64 DEF_rFile_2_lat_0_wget____d18;
  tUInt64 DEF_upd__h24011;
  tUInt64 DEF_rFile_1_lat_0_wget____d11;
  tUInt64 DEF_upd__h23950;
  tUInt64 DEF_rFile_0_lat_0_wget____d4;
  tUInt8 DEF_rFile_14_dummy2_1__h24850;
  tUInt8 DEF_rFile_14_dummy2_0__h24839;
  tUInt8 DEF_rFile_14_lat_0_whas____d101;
  tUInt8 DEF_rFile_13_dummy2_1__h24789;
  tUInt8 DEF_rFile_13_dummy2_0__h24778;
  tUInt8 DEF_rFile_13_lat_0_whas____d94;
  tUInt8 DEF_rFile_12_dummy2_1__h24728;
  tUInt8 DEF_rFile_12_dummy2_0__h24717;
  tUInt8 DEF_rFile_12_lat_0_whas____d87;
  tUInt8 DEF_rFile_11_dummy2_1__h24667;
  tUInt8 DEF_rFile_11_dummy2_0__h24656;
  tUInt8 DEF_rFile_11_lat_0_whas____d80;
  tUInt8 DEF_rFile_10_dummy2_1__h24606;
  tUInt8 DEF_rFile_10_dummy2_0__h24595;
  tUInt8 DEF_rFile_10_lat_0_whas____d73;
  tUInt8 DEF_rFile_9_dummy2_1__h24545;
  tUInt8 DEF_rFile_9_dummy2_0__h24534;
  tUInt8 DEF_rFile_9_lat_0_whas____d66;
  tUInt8 DEF_rFile_8_dummy2_1__h24484;
  tUInt8 DEF_rFile_8_dummy2_0__h24473;
  tUInt8 DEF_rFile_8_lat_0_whas____d59;
  tUInt8 DEF_rFile_7_dummy2_1__h24423;
  tUInt8 DEF_rFile_7_dummy2_0__h24412;
  tUInt8 DEF_rFile_7_lat_0_whas____d52;
  tUInt8 DEF_rFile_6_dummy2_1__h24362;
  tUInt8 DEF_rFile_6_dummy2_0__h24351;
  tUInt8 DEF_rFile_6_lat_0_whas____d45;
  tUInt8 DEF_rFile_5_dummy2_1__h24301;
  tUInt8 DEF_rFile_5_dummy2_0__h24290;
  tUInt8 DEF_rFile_5_lat_0_whas____d38;
  tUInt8 DEF_rFile_4_dummy2_1__h24240;
  tUInt8 DEF_rFile_4_dummy2_0__h24229;
  tUInt8 DEF_rFile_4_lat_0_whas____d31;
  tUInt8 DEF_rFile_3_dummy2_1__h24179;
  tUInt8 DEF_rFile_3_dummy2_0__h24168;
  tUInt8 DEF_rFile_3_lat_0_whas____d24;
  tUInt8 DEF_rFile_2_dummy2_1__h24118;
  tUInt8 DEF_rFile_2_dummy2_0__h24107;
  tUInt8 DEF_rFile_2_lat_0_whas____d17;
  tUInt8 DEF_rFile_1_dummy2_1__h24057;
  tUInt8 DEF_rFile_1_dummy2_0__h24046;
  tUInt8 DEF_rFile_1_lat_0_whas____d10;
  tUInt8 DEF_rFile_0_dummy2_1__h23996;
  tUInt8 DEF_rFile_0_dummy2_0__h23985;
  tUInt8 DEF_rFile_0_lat_0_whas____d3;
  tUInt64 DEF_n__read__h16385;
  tUInt64 DEF_n__read__h16383;
  tUInt64 DEF_n__read__h16381;
  tUInt64 DEF_n__read__h16379;
  tUInt64 DEF_n__read__h16377;
  tUInt64 DEF_n__read__h16375;
  tUInt64 DEF_n__read__h16373;
  tUInt64 DEF_n__read__h16371;
  tUInt64 DEF_n__read__h16369;
  tUInt64 DEF_n__read__h16367;
  tUInt64 DEF_n__read__h16365;
  tUInt64 DEF_n__read__h16363;
  tUInt64 DEF_n__read__h16361;
  tUInt64 DEF_n__read__h16359;
  tUInt64 DEF_n__read__h16357;
  tUWide DEF_rFile_14_lat_0_whas__01_CONCAT_IF_rFile_14_lat_ETC___d165;
  tUWide DEF_rFile_13_lat_0_whas__4_CONCAT_IF_rFile_13_lat__ETC___d162;
  tUWide DEF_rFile_12_lat_0_whas__7_CONCAT_IF_rFile_12_lat__ETC___d159;
  tUWide DEF_rFile_11_lat_0_whas__0_CONCAT_IF_rFile_11_lat__ETC___d156;
  tUWide DEF_rFile_10_lat_0_whas__3_CONCAT_IF_rFile_10_lat__ETC___d153;
  tUWide DEF_rFile_9_lat_0_whas__6_CONCAT_IF_rFile_9_lat_0__ETC___d150;
  tUWide DEF_rFile_8_lat_0_whas__9_CONCAT_IF_rFile_8_lat_0__ETC___d147;
  tUWide DEF_rFile_7_lat_0_whas__2_CONCAT_IF_rFile_7_lat_0__ETC___d144;
  tUWide DEF_rFile_6_lat_0_whas__5_CONCAT_IF_rFile_6_lat_0__ETC___d141;
  tUWide DEF_rFile_5_lat_0_whas__8_CONCAT_IF_rFile_5_lat_0__ETC___d138;
  tUWide DEF_rFile_4_lat_0_whas__1_CONCAT_IF_rFile_4_lat_0__ETC___d135;
  tUWide DEF_rFile_3_lat_0_whas__4_CONCAT_IF_rFile_3_lat_0__ETC___d132;
  tUWide DEF_rFile_2_lat_0_whas__7_CONCAT_IF_rFile_2_lat_0__ETC___d129;
  tUWide DEF_rFile_1_lat_0_whas__0_CONCAT_IF_rFile_1_lat_0__ETC___d126;
  tUWide DEF_rFile_0_lat_0_whas_CONCAT_IF_rFile_0_lat_0_wha_ETC___d123;
 
 /* Rules */
 public:
  void RL_rFile_0_canon();
  void RL_rFile_1_canon();
  void RL_rFile_2_canon();
  void RL_rFile_3_canon();
  void RL_rFile_4_canon();
  void RL_rFile_5_canon();
  void RL_rFile_6_canon();
  void RL_rFile_7_canon();
  void RL_rFile_8_canon();
  void RL_rFile_9_canon();
  void RL_rFile_10_canon();
  void RL_rFile_11_canon();
  void RL_rFile_12_canon();
  void RL_rFile_13_canon();
  void RL_rFile_14_canon();
 
 /* Methods */
 public:
  void METH_wrE(tUInt8 ARG_wrE_rindx, tUInt64 ARG_wrE_data);
  tUInt8 METH_RDY_wrE();
  void METH_wrM(tUInt8 ARG_wrM_rindx, tUInt64 ARG_wrM_data);
  tUInt8 METH_RDY_wrM();
  tUInt64 METH_rdA(tUInt8 ARG_rdA_rindx);
  tUInt8 METH_RDY_rdA();
  tUInt64 METH_rdB(tUInt8 ARG_rdB_rindx);
  tUInt8 METH_RDY_rdB();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkRFile &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkRFile &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkRFile &backing);
};

#endif /* ifndef __mkRFile_h__ */
