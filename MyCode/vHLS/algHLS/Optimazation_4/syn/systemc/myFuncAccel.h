// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myFuncAccel_HH_
#define _myFuncAccel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1.h"
#include "myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1.h"
#include "myFuncAccel_fcmp_32ns_32ns_1_1_1.h"

namespace ap_rtl {

struct myFuncAccel : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > size;
    sc_in< sc_lv<32> > dim;
    sc_in< sc_lv<32> > threshold;
    sc_out< sc_logic > data0_req_din;
    sc_in< sc_logic > data0_req_full_n;
    sc_out< sc_logic > data0_req_write;
    sc_in< sc_logic > data0_rsp_empty_n;
    sc_out< sc_logic > data0_rsp_read;
    sc_out< sc_lv<32> > data0_address;
    sc_in< sc_lv<32> > data0_datain;
    sc_out< sc_lv<32> > data0_dataout;
    sc_out< sc_lv<32> > data0_size;
    sc_out< sc_logic > data1_req_din;
    sc_in< sc_logic > data1_req_full_n;
    sc_out< sc_logic > data1_req_write;
    sc_in< sc_logic > data1_rsp_empty_n;
    sc_out< sc_logic > data1_rsp_read;
    sc_out< sc_lv<32> > data1_address;
    sc_in< sc_lv<32> > data1_datain;
    sc_out< sc_lv<32> > data1_dataout;
    sc_out< sc_lv<32> > data1_size;
    sc_out< sc_logic > data2_req_din;
    sc_in< sc_logic > data2_req_full_n;
    sc_out< sc_logic > data2_req_write;
    sc_in< sc_logic > data2_rsp_empty_n;
    sc_out< sc_logic > data2_rsp_read;
    sc_out< sc_lv<32> > data2_address;
    sc_in< sc_lv<32> > data2_datain;
    sc_out< sc_lv<32> > data2_dataout;
    sc_out< sc_lv<32> > data2_size;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    myFuncAccel(sc_module_name name);
    SC_HAS_PROCESS(myFuncAccel);

    ~myFuncAccel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1_U1;
    myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1_U2;
    myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1_U3;
    myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1_U4;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U5;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U6;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U7;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U8;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U9;
    myFuncAccel_fcmp_32ns_32ns_1_1_1<1,1,32,32,1>* myFuncAccel_fcmp_32ns_32ns_1_1_1_U10;
    sc_signal< sc_lv<23> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_1_reg_116;
    sc_signal< sc_lv<32> > grp_fu_163_p2;
    sc_signal< sc_lv<32> > reg_172;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<1> > tmp_s_reg_480;
    sc_signal< bool > ap_block_state22_pp0_stage3_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state26_pp0_stage3_iter1;
    sc_signal< bool > ap_block_state30_pp0_stage3_iter2;
    sc_signal< bool > ap_block_state34_pp0_stage3_iter3;
    sc_signal< bool > ap_block_state38_pp0_stage3_iter4;
    sc_signal< bool > ap_block_state42_pp0_stage3_iter5;
    sc_signal< bool > ap_block_state46_pp0_stage3_iter6;
    sc_signal< bool > ap_block_state50_pp0_stage3_iter7;
    sc_signal< bool > ap_block_state54_pp0_stage3_iter8;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter9_reg;
    sc_signal< bool > ap_block_state58_pp0_stage3_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter8_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state35_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state39_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state43_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state47_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state51_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state55_pp0_stage0_iter9;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state20_pp0_stage1_iter0;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter1_reg;
    sc_signal< bool > ap_block_state24_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state28_pp0_stage1_iter2;
    sc_signal< bool > ap_block_state32_pp0_stage1_iter3;
    sc_signal< bool > ap_block_state36_pp0_stage1_iter4;
    sc_signal< bool > ap_block_state40_pp0_stage1_iter5;
    sc_signal< bool > ap_block_state44_pp0_stage1_iter6;
    sc_signal< bool > ap_block_state48_pp0_stage1_iter7;
    sc_signal< bool > ap_block_state52_pp0_stage1_iter8;
    sc_signal< bool > ap_block_state56_pp0_stage1_iter9;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state21_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state25_pp0_stage2_iter1;
    sc_signal< bool > ap_block_state29_pp0_stage2_iter2;
    sc_signal< bool > ap_block_state33_pp0_stage2_iter3;
    sc_signal< bool > ap_block_state37_pp0_stage2_iter4;
    sc_signal< bool > ap_block_state41_pp0_stage2_iter5;
    sc_signal< bool > ap_block_state45_pp0_stage2_iter6;
    sc_signal< bool > ap_block_state49_pp0_stage2_iter7;
    sc_signal< bool > ap_block_state53_pp0_stage2_iter8;
    sc_signal< bool > ap_block_state57_pp0_stage2_iter9;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<32> > data0_read_reg_400;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > data0_read_1_reg_405;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > data0_read_2_reg_410;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > data0_read_3_reg_415;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > data0_read_4_reg_420;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > data0_read_5_reg_425;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > data0_read_6_reg_430;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > data0_read_7_reg_435;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > data0_read_8_reg_440;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > data0_read_9_reg_445;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > data0_read_10_reg_450;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<32> > data0_read_11_reg_455;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > data0_read_12_reg_460;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > data0_read_13_reg_465;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > data0_read_14_reg_470;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > data0_read_15_reg_475;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<1> > tmp_s_fu_177_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_480_pp0_iter7_reg;
    sc_signal< sc_lv<10> > i_fu_183_p2;
    sc_signal< sc_lv<10> > i_reg_484;
    sc_signal< sc_lv<12> > tmp_1_fu_189_p3;
    sc_signal< sc_lv<12> > tmp_1_reg_489;
    sc_signal< sc_lv<32> > data2_addr_reg_500;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter1_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter2_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter3_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter4_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter5_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter6_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter7_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_500_pp0_iter8_reg;
    sc_signal< sc_lv<32> > data1_addr_read_reg_505;
    sc_signal< sc_lv<32> > data1_addr_read_1_reg_513;
    sc_signal< sc_lv<32> > data1_addr_read_2_reg_521;
    sc_signal< sc_lv<32> > data1_addr_read_3_reg_529;
    sc_signal< sc_lv<32> > grp_fu_147_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_537;
    sc_signal< sc_lv<32> > grp_fu_151_p2;
    sc_signal< sc_lv<32> > tmp_34_1_reg_542;
    sc_signal< sc_lv<32> > grp_fu_155_p2;
    sc_signal< sc_lv<32> > tmp_34_2_reg_547;
    sc_signal< sc_lv<32> > grp_fu_159_p2;
    sc_signal< sc_lv<32> > tmp_34_3_reg_552;
    sc_signal< sc_lv<32> > tmp_34_0_1_reg_557;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<32> > tmp_34_0_1_reg_557_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_1_1_reg_562;
    sc_signal< sc_lv<32> > tmp_34_1_1_reg_562_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_2_1_reg_567;
    sc_signal< sc_lv<32> > tmp_34_2_1_reg_567_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_3_1_reg_572;
    sc_signal< sc_lv<32> > tmp_34_3_1_reg_572_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_0_2_reg_577;
    sc_signal< sc_lv<32> > tmp_34_0_2_reg_577_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_0_2_reg_577_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_1_2_reg_582;
    sc_signal< sc_lv<32> > tmp_34_1_2_reg_582_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_1_2_reg_582_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_2_2_reg_587;
    sc_signal< sc_lv<32> > tmp_34_2_2_reg_587_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_2_2_reg_587_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_3_2_reg_592;
    sc_signal< sc_lv<32> > tmp_34_3_2_reg_592_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_3_2_reg_592_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_0_3_reg_597;
    sc_signal< sc_lv<32> > tmp_34_0_3_reg_597_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_0_3_reg_597_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_0_3_reg_597_pp0_iter5_reg;
    sc_signal< sc_lv<32> > tmp_34_1_3_reg_602;
    sc_signal< sc_lv<32> > tmp_34_1_3_reg_602_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_1_3_reg_602_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_1_3_reg_602_pp0_iter5_reg;
    sc_signal< sc_lv<32> > tmp_34_2_3_reg_607;
    sc_signal< sc_lv<32> > tmp_34_2_3_reg_607_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_2_3_reg_607_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_2_3_reg_607_pp0_iter5_reg;
    sc_signal< sc_lv<32> > tmp_34_3_3_reg_612;
    sc_signal< sc_lv<32> > tmp_34_3_3_reg_612_pp0_iter3_reg;
    sc_signal< sc_lv<32> > tmp_34_3_3_reg_612_pp0_iter4_reg;
    sc_signal< sc_lv<32> > tmp_34_3_3_reg_612_pp0_iter5_reg;
    sc_signal< sc_lv<32> > grp_fu_127_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_617;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<32> > grp_fu_132_p2;
    sc_signal< sc_lv<32> > tmp_35_1_reg_622;
    sc_signal< sc_lv<32> > grp_fu_137_p2;
    sc_signal< sc_lv<32> > tmp_35_2_reg_627;
    sc_signal< sc_lv<32> > grp_fu_142_p2;
    sc_signal< sc_lv<32> > tmp_35_3_reg_632;
    sc_signal< sc_lv<32> > tmp_35_0_1_reg_637;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<32> > tmp_35_1_1_reg_642;
    sc_signal< sc_lv<32> > tmp_35_2_1_reg_647;
    sc_signal< sc_lv<32> > tmp_35_3_1_reg_652;
    sc_signal< sc_lv<32> > tmp_35_0_2_reg_657;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<32> > tmp_35_1_2_reg_662;
    sc_signal< sc_lv<32> > tmp_35_2_2_reg_667;
    sc_signal< sc_lv<32> > tmp_35_3_2_reg_672;
    sc_signal< sc_lv<32> > tmp_35_0_3_reg_677;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_lv<32> > tmp_35_0_3_reg_677_pp0_iter7_reg;
    sc_signal< sc_lv<32> > tmp_35_1_3_reg_684;
    sc_signal< sc_lv<32> > tmp_35_1_3_reg_684_pp0_iter7_reg;
    sc_signal< sc_lv<32> > tmp_35_2_3_reg_691;
    sc_signal< sc_lv<32> > tmp_35_2_3_reg_691_pp0_iter7_reg;
    sc_signal< sc_lv<32> > tmp_35_3_3_reg_698;
    sc_signal< sc_lv<32> > tmp_35_3_3_reg_698_pp0_iter7_reg;
    sc_signal< sc_lv<1> > grp_fu_167_p2;
    sc_signal< sc_lv<1> > tmp_10_reg_705;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<1> > tmp_27_fu_294_p2;
    sc_signal< sc_lv<1> > tmp_27_reg_710;
    sc_signal< sc_lv<1> > tmp_20_reg_715;
    sc_signal< sc_lv<1> > tmp_28_fu_381_p2;
    sc_signal< sc_lv<1> > tmp_28_reg_720;
    sc_signal< sc_lv<32> > tmp_5_fu_391_p3;
    sc_signal< sc_lv<32> > tmp_5_reg_725;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state19;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<10> > ap_phi_mux_i_1_phi_fu_120_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_2_fu_197_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<32> > grp_fu_127_p0;
    sc_signal< sc_lv<32> > grp_fu_127_p1;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<32> > grp_fu_132_p0;
    sc_signal< sc_lv<32> > grp_fu_132_p1;
    sc_signal< sc_lv<32> > grp_fu_137_p0;
    sc_signal< sc_lv<32> > grp_fu_137_p1;
    sc_signal< sc_lv<32> > grp_fu_142_p0;
    sc_signal< sc_lv<32> > grp_fu_142_p1;
    sc_signal< sc_lv<32> > grp_fu_147_p0;
    sc_signal< sc_lv<32> > grp_fu_147_p1;
    sc_signal< sc_lv<32> > grp_fu_151_p0;
    sc_signal< sc_lv<32> > grp_fu_151_p1;
    sc_signal< sc_lv<32> > grp_fu_155_p0;
    sc_signal< sc_lv<32> > grp_fu_155_p1;
    sc_signal< sc_lv<32> > grp_fu_159_p0;
    sc_signal< sc_lv<32> > grp_fu_159_p1;
    sc_signal< sc_lv<32> > grp_fu_163_p0;
    sc_signal< sc_lv<32> > grp_fu_163_p1;
    sc_signal< sc_lv<32> > grp_fu_167_p0;
    sc_signal< sc_lv<32> > tmp_35_0_3_to_int_fu_213_p1;
    sc_signal< sc_lv<8> > tmp_8_fu_216_p4;
    sc_signal< sc_lv<23> > tmp_9_fu_226_p1;
    sc_signal< sc_lv<1> > notrhs_fu_236_p2;
    sc_signal< sc_lv<1> > notlhs_fu_230_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_242_p2;
    sc_signal< sc_lv<32> > tmp_35_1_3_to_int_fu_253_p1;
    sc_signal< sc_lv<8> > tmp_12_fu_256_p4;
    sc_signal< sc_lv<23> > tmp_13_fu_266_p1;
    sc_signal< sc_lv<1> > notrhs6_fu_276_p2;
    sc_signal< sc_lv<1> > notlhs5_fu_270_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_282_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_288_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_248_p2;
    sc_signal< sc_lv<32> > tmp_35_2_3_to_int_fu_300_p1;
    sc_signal< sc_lv<8> > tmp_17_fu_303_p4;
    sc_signal< sc_lv<23> > tmp_18_fu_313_p1;
    sc_signal< sc_lv<1> > notrhs8_fu_323_p2;
    sc_signal< sc_lv<1> > notlhs7_fu_317_p2;
    sc_signal< sc_lv<1> > tmp_19_fu_329_p2;
    sc_signal< sc_lv<32> > tmp_35_3_3_to_int_fu_340_p1;
    sc_signal< sc_lv<8> > tmp_22_fu_343_p4;
    sc_signal< sc_lv<23> > tmp_23_fu_353_p1;
    sc_signal< sc_lv<1> > notrhs1_fu_363_p2;
    sc_signal< sc_lv<1> > notlhs9_fu_357_p2;
    sc_signal< sc_lv<1> > tmp_24_fu_369_p2;
    sc_signal< sc_lv<1> > tmp_26_fu_375_p2;
    sc_signal< sc_lv<1> > tmp_21_fu_335_p2;
    sc_signal< sc_lv<1> > tmp_29_fu_387_p2;
    sc_signal< sc_logic > grp_fu_127_ce;
    sc_signal< sc_logic > grp_fu_132_ce;
    sc_signal< sc_logic > grp_fu_137_ce;
    sc_signal< sc_logic > grp_fu_142_ce;
    sc_signal< sc_logic > grp_fu_147_ce;
    sc_signal< sc_logic > grp_fu_151_ce;
    sc_signal< sc_logic > grp_fu_155_ce;
    sc_signal< sc_logic > grp_fu_159_ce;
    sc_signal< sc_logic > grp_fu_163_ce;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< bool > ap_block_pp0_stage1_00001;
    sc_signal< bool > ap_block_pp0_stage2_00001;
    sc_signal< bool > ap_block_pp0_stage3_00001;
    sc_signal< sc_logic > ap_CS_fsm_state59;
    sc_signal< sc_lv<23> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<23> ap_ST_fsm_state1;
    static const sc_lv<23> ap_ST_fsm_state2;
    static const sc_lv<23> ap_ST_fsm_state3;
    static const sc_lv<23> ap_ST_fsm_state4;
    static const sc_lv<23> ap_ST_fsm_state5;
    static const sc_lv<23> ap_ST_fsm_state6;
    static const sc_lv<23> ap_ST_fsm_state7;
    static const sc_lv<23> ap_ST_fsm_state8;
    static const sc_lv<23> ap_ST_fsm_state9;
    static const sc_lv<23> ap_ST_fsm_state10;
    static const sc_lv<23> ap_ST_fsm_state11;
    static const sc_lv<23> ap_ST_fsm_state12;
    static const sc_lv<23> ap_ST_fsm_state13;
    static const sc_lv<23> ap_ST_fsm_state14;
    static const sc_lv<23> ap_ST_fsm_state15;
    static const sc_lv<23> ap_ST_fsm_state16;
    static const sc_lv<23> ap_ST_fsm_state17;
    static const sc_lv<23> ap_ST_fsm_state18;
    static const sc_lv<23> ap_ST_fsm_pp0_stage0;
    static const sc_lv<23> ap_ST_fsm_pp0_stage1;
    static const sc_lv<23> ap_ST_fsm_pp0_stage2;
    static const sc_lv<23> ap_ST_fsm_pp0_stage3;
    static const sc_lv<23> ap_ST_fsm_state59;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<1> ap_const_lv1_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_42C80000;
    static const sc_lv<10> ap_const_lv10_3E8;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<5> ap_const_lv5_5;
    static const sc_lv<32> ap_const_lv32_16;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state59();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_00001();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_00001();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_00001();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_state19_pp0_stage0_iter0();
    void thread_ap_block_state20_pp0_stage1_iter0();
    void thread_ap_block_state21_pp0_stage2_iter0();
    void thread_ap_block_state22_pp0_stage3_iter0();
    void thread_ap_block_state23_pp0_stage0_iter1();
    void thread_ap_block_state24_pp0_stage1_iter1();
    void thread_ap_block_state25_pp0_stage2_iter1();
    void thread_ap_block_state26_pp0_stage3_iter1();
    void thread_ap_block_state27_pp0_stage0_iter2();
    void thread_ap_block_state28_pp0_stage1_iter2();
    void thread_ap_block_state29_pp0_stage2_iter2();
    void thread_ap_block_state30_pp0_stage3_iter2();
    void thread_ap_block_state31_pp0_stage0_iter3();
    void thread_ap_block_state32_pp0_stage1_iter3();
    void thread_ap_block_state33_pp0_stage2_iter3();
    void thread_ap_block_state34_pp0_stage3_iter3();
    void thread_ap_block_state35_pp0_stage0_iter4();
    void thread_ap_block_state36_pp0_stage1_iter4();
    void thread_ap_block_state37_pp0_stage2_iter4();
    void thread_ap_block_state38_pp0_stage3_iter4();
    void thread_ap_block_state39_pp0_stage0_iter5();
    void thread_ap_block_state40_pp0_stage1_iter5();
    void thread_ap_block_state41_pp0_stage2_iter5();
    void thread_ap_block_state42_pp0_stage3_iter5();
    void thread_ap_block_state43_pp0_stage0_iter6();
    void thread_ap_block_state44_pp0_stage1_iter6();
    void thread_ap_block_state45_pp0_stage2_iter6();
    void thread_ap_block_state46_pp0_stage3_iter6();
    void thread_ap_block_state47_pp0_stage0_iter7();
    void thread_ap_block_state48_pp0_stage1_iter7();
    void thread_ap_block_state49_pp0_stage2_iter7();
    void thread_ap_block_state50_pp0_stage3_iter7();
    void thread_ap_block_state51_pp0_stage0_iter8();
    void thread_ap_block_state52_pp0_stage1_iter8();
    void thread_ap_block_state53_pp0_stage2_iter8();
    void thread_ap_block_state54_pp0_stage3_iter8();
    void thread_ap_block_state55_pp0_stage0_iter9();
    void thread_ap_block_state56_pp0_stage1_iter9();
    void thread_ap_block_state57_pp0_stage2_iter9();
    void thread_ap_block_state58_pp0_stage3_iter9();
    void thread_ap_condition_pp0_exit_iter0_state19();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_1_phi_fu_120_p4();
    void thread_ap_ready();
    void thread_data0_address();
    void thread_data0_dataout();
    void thread_data0_req_din();
    void thread_data0_req_write();
    void thread_data0_rsp_read();
    void thread_data0_size();
    void thread_data1_address();
    void thread_data1_dataout();
    void thread_data1_req_din();
    void thread_data1_req_write();
    void thread_data1_rsp_read();
    void thread_data1_size();
    void thread_data2_address();
    void thread_data2_dataout();
    void thread_data2_req_din();
    void thread_data2_req_write();
    void thread_data2_rsp_read();
    void thread_data2_size();
    void thread_grp_fu_127_ce();
    void thread_grp_fu_127_p0();
    void thread_grp_fu_127_p1();
    void thread_grp_fu_132_ce();
    void thread_grp_fu_132_p0();
    void thread_grp_fu_132_p1();
    void thread_grp_fu_137_ce();
    void thread_grp_fu_137_p0();
    void thread_grp_fu_137_p1();
    void thread_grp_fu_142_ce();
    void thread_grp_fu_142_p0();
    void thread_grp_fu_142_p1();
    void thread_grp_fu_147_ce();
    void thread_grp_fu_147_p0();
    void thread_grp_fu_147_p1();
    void thread_grp_fu_151_ce();
    void thread_grp_fu_151_p0();
    void thread_grp_fu_151_p1();
    void thread_grp_fu_155_ce();
    void thread_grp_fu_155_p0();
    void thread_grp_fu_155_p1();
    void thread_grp_fu_159_ce();
    void thread_grp_fu_159_p0();
    void thread_grp_fu_159_p1();
    void thread_grp_fu_163_ce();
    void thread_grp_fu_163_p0();
    void thread_grp_fu_163_p1();
    void thread_grp_fu_167_p0();
    void thread_i_fu_183_p2();
    void thread_notlhs5_fu_270_p2();
    void thread_notlhs7_fu_317_p2();
    void thread_notlhs9_fu_357_p2();
    void thread_notlhs_fu_230_p2();
    void thread_notrhs1_fu_363_p2();
    void thread_notrhs6_fu_276_p2();
    void thread_notrhs8_fu_323_p2();
    void thread_notrhs_fu_236_p2();
    void thread_tmp_11_fu_248_p2();
    void thread_tmp_12_fu_256_p4();
    void thread_tmp_13_fu_266_p1();
    void thread_tmp_14_fu_282_p2();
    void thread_tmp_16_fu_288_p2();
    void thread_tmp_17_fu_303_p4();
    void thread_tmp_18_fu_313_p1();
    void thread_tmp_19_fu_329_p2();
    void thread_tmp_1_fu_189_p3();
    void thread_tmp_21_fu_335_p2();
    void thread_tmp_22_fu_343_p4();
    void thread_tmp_23_fu_353_p1();
    void thread_tmp_24_fu_369_p2();
    void thread_tmp_26_fu_375_p2();
    void thread_tmp_27_fu_294_p2();
    void thread_tmp_28_fu_381_p2();
    void thread_tmp_29_fu_387_p2();
    void thread_tmp_2_fu_197_p1();
    void thread_tmp_35_0_3_to_int_fu_213_p1();
    void thread_tmp_35_1_3_to_int_fu_253_p1();
    void thread_tmp_35_2_3_to_int_fu_300_p1();
    void thread_tmp_35_3_3_to_int_fu_340_p1();
    void thread_tmp_3_fu_242_p2();
    void thread_tmp_5_fu_391_p3();
    void thread_tmp_8_fu_216_p4();
    void thread_tmp_9_fu_226_p1();
    void thread_tmp_s_fu_177_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
