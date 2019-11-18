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
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U2;
    myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U3;
    myFuncAccel_fcmp_32ns_32ns_1_1_1<1,1,32,32,1>* myFuncAccel_fcmp_32ns_32ns_1_1_1_U4;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_reg_116;
    sc_signal< sc_lv<32> > reg_145;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_reg_437;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state21_pp0_stage3_iter1;
    sc_signal< bool > ap_block_state37_pp0_stage3_iter2;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_state25_pp0_stage7_iter1;
    sc_signal< bool > ap_block_state41_pp0_stage7_iter2;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< bool > ap_block_state13_pp0_stage11_iter0;
    sc_signal< bool > ap_block_state29_pp0_stage11_iter1;
    sc_signal< bool > ap_block_state45_pp0_stage11_iter2;
    sc_signal< bool > ap_block_pp0_stage11_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage15;
    sc_signal< bool > ap_block_state17_pp0_stage15_iter0;
    sc_signal< bool > ap_block_state33_pp0_stage15_iter1;
    sc_signal< sc_lv<1> > tmp_reg_437_pp0_iter2_reg;
    sc_signal< bool > ap_block_state49_pp0_stage15_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage15_11001;
    sc_signal< sc_lv<32> > reg_150;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state22_pp0_stage4_iter1;
    sc_signal< bool > ap_block_state38_pp0_stage4_iter2;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_state10_pp0_stage8_iter0;
    sc_signal< bool > ap_block_state26_pp0_stage8_iter1;
    sc_signal< bool > ap_block_state42_pp0_stage8_iter2;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< bool > ap_block_state14_pp0_stage12_iter0;
    sc_signal< bool > ap_block_state30_pp0_stage12_iter1;
    sc_signal< bool > ap_block_state46_pp0_stage12_iter2;
    sc_signal< bool > ap_block_pp0_stage12_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state34_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state50_pp0_stage0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > reg_155;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_state23_pp0_stage5_iter1;
    sc_signal< bool > ap_block_state39_pp0_stage5_iter2;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_state11_pp0_stage9_iter0;
    sc_signal< bool > ap_block_state27_pp0_stage9_iter1;
    sc_signal< bool > ap_block_state43_pp0_stage9_iter2;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    sc_signal< bool > ap_block_state15_pp0_stage13_iter0;
    sc_signal< bool > ap_block_state31_pp0_stage13_iter1;
    sc_signal< bool > ap_block_state47_pp0_stage13_iter2;
    sc_signal< bool > ap_block_pp0_stage13_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< sc_lv<1> > tmp_reg_437_pp0_iter1_reg;
    sc_signal< bool > ap_block_state19_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state35_pp0_stage1_iter2;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<32> > reg_160;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_state24_pp0_stage6_iter1;
    sc_signal< bool > ap_block_state40_pp0_stage6_iter2;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_state12_pp0_stage10_iter0;
    sc_signal< bool > ap_block_state28_pp0_stage10_iter1;
    sc_signal< bool > ap_block_state44_pp0_stage10_iter2;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< bool > ap_block_state16_pp0_stage14_iter0;
    sc_signal< bool > ap_block_state32_pp0_stage14_iter1;
    sc_signal< bool > ap_block_state48_pp0_stage14_iter2;
    sc_signal< bool > ap_block_pp0_stage14_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state20_pp0_stage2_iter1;
    sc_signal< bool > ap_block_state36_pp0_stage2_iter2;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<32> > grp_fu_132_p2;
    sc_signal< sc_lv<32> > reg_165;
    sc_signal< sc_lv<32> > reg_171;
    sc_signal< sc_lv<32> > reg_177;
    sc_signal< sc_lv<32> > grp_fu_127_p2;
    sc_signal< sc_lv<32> > reg_183;
    sc_signal< sc_lv<32> > reg_188;
    sc_signal< sc_lv<32> > reg_194;
    sc_signal< sc_lv<32> > reg_199;
    sc_signal< sc_lv<32> > reg_204;
    sc_signal< sc_lv<32> > grp_fu_136_p2;
    sc_signal< sc_lv<32> > reg_209;
    sc_signal< sc_lv<1> > tmp_fu_214_p2;
    sc_signal< sc_lv<10> > i_1_fu_220_p2;
    sc_signal< sc_lv<10> > i_1_reg_441;
    sc_signal< sc_lv<12> > tmp_1_fu_226_p3;
    sc_signal< sc_lv<12> > tmp_1_reg_446;
    sc_signal< sc_lv<32> > data2_addr_reg_451;
    sc_signal< sc_lv<32> > data2_addr_reg_451_pp0_iter1_reg;
    sc_signal< sc_lv<32> > data2_addr_reg_451_pp0_iter2_reg;
    sc_signal< sc_lv<32> > data1_addr_read_reg_462;
    sc_signal< sc_lv<32> > data1_addr_read_1_reg_467;
    sc_signal< sc_lv<32> > data1_addr_read_2_reg_472;
    sc_signal< sc_lv<32> > data1_addr_read_3_reg_477;
    sc_signal< sc_lv<32> > tmp_19_0_2_reg_482;
    sc_signal< sc_lv<32> > tmp_19_0_3_reg_487;
    sc_signal< sc_lv<32> > tmp_19_1_2_reg_492;
    sc_signal< sc_lv<32> > tmp_19_1_3_reg_497;
    sc_signal< sc_lv<32> > tmp_19_2_2_reg_502;
    sc_signal< sc_lv<32> > tmp_19_2_3_reg_507;
    sc_signal< sc_lv<32> > tmp_19_3_2_reg_512;
    sc_signal< sc_lv<32> > tmp_19_3_3_reg_517;
    sc_signal< sc_lv<32> > tempVal_1_0_3_reg_522;
    sc_signal< sc_lv<1> > grp_fu_140_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_529;
    sc_signal< sc_lv<32> > tempVal_1_1_3_reg_534;
    sc_signal< sc_lv<1> > tmp_26_fu_331_p2;
    sc_signal< sc_lv<1> > tmp_26_reg_541;
    sc_signal< sc_lv<32> > tempVal_1_2_3_reg_546;
    sc_signal< sc_lv<1> > tmp_19_reg_553;
    sc_signal< sc_lv<32> > tempVal_1_3_3_reg_558;
    sc_signal< sc_lv<1> > tmp_27_fu_418_p2;
    sc_signal< sc_lv<1> > tmp_27_reg_565;
    sc_signal< sc_lv<32> > tmp_7_fu_428_p3;
    sc_signal< sc_lv<32> > tmp_7_reg_570;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage15_subdone;
    sc_signal< sc_lv<10> > ap_phi_mux_i_phi_fu_120_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_4_fu_234_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<32> > grp_fu_127_p0;
    sc_signal< sc_lv<32> > grp_fu_127_p1;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< bool > ap_block_pp0_stage12;
    sc_signal< bool > ap_block_pp0_stage13;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< bool > ap_block_pp0_stage11;
    sc_signal< bool > ap_block_pp0_stage14;
    sc_signal< bool > ap_block_pp0_stage15;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<32> > grp_fu_132_p0;
    sc_signal< sc_lv<32> > grp_fu_132_p1;
    sc_signal< sc_lv<32> > grp_fu_136_p0;
    sc_signal< sc_lv<32> > grp_fu_136_p1;
    sc_signal< sc_lv<32> > grp_fu_140_p0;
    sc_signal< sc_lv<32> > tempVal_1_0_3_to_int_fu_250_p1;
    sc_signal< sc_lv<8> > tmp_3_fu_253_p4;
    sc_signal< sc_lv<23> > tmp_6_fu_263_p1;
    sc_signal< sc_lv<1> > notrhs_fu_273_p2;
    sc_signal< sc_lv<1> > notlhs_fu_267_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_279_p2;
    sc_signal< sc_lv<32> > tempVal_1_1_3_to_int_fu_290_p1;
    sc_signal< sc_lv<8> > tmp_11_fu_293_p4;
    sc_signal< sc_lv<23> > tmp_12_fu_303_p1;
    sc_signal< sc_lv<1> > notrhs6_fu_313_p2;
    sc_signal< sc_lv<1> > notlhs5_fu_307_p2;
    sc_signal< sc_lv<1> > tmp_13_fu_319_p2;
    sc_signal< sc_lv<1> > tmp_15_fu_325_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_285_p2;
    sc_signal< sc_lv<32> > tempVal_1_2_3_to_int_fu_337_p1;
    sc_signal< sc_lv<8> > tmp_16_fu_340_p4;
    sc_signal< sc_lv<23> > tmp_17_fu_350_p1;
    sc_signal< sc_lv<1> > notrhs8_fu_360_p2;
    sc_signal< sc_lv<1> > notlhs7_fu_354_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_366_p2;
    sc_signal< sc_lv<32> > tempVal_1_3_3_to_int_fu_377_p1;
    sc_signal< sc_lv<8> > tmp_21_fu_380_p4;
    sc_signal< sc_lv<23> > tmp_22_fu_390_p1;
    sc_signal< sc_lv<1> > notrhs1_fu_400_p2;
    sc_signal< sc_lv<1> > notlhs9_fu_394_p2;
    sc_signal< sc_lv<1> > tmp_23_fu_406_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_412_p2;
    sc_signal< sc_lv<1> > tmp_20_fu_372_p2;
    sc_signal< sc_lv<1> > tmp_28_fu_424_p2;
    sc_signal< sc_logic > grp_fu_127_ce;
    sc_signal< sc_logic > grp_fu_132_ce;
    sc_signal< sc_logic > grp_fu_136_ce;
    sc_signal< bool > ap_block_pp0_stage12_00001;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< bool > ap_block_pp0_stage4_00001;
    sc_signal< bool > ap_block_pp0_stage8_00001;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_pp0_stage0;
    static const sc_lv<18> ap_ST_fsm_pp0_stage1;
    static const sc_lv<18> ap_ST_fsm_pp0_stage2;
    static const sc_lv<18> ap_ST_fsm_pp0_stage3;
    static const sc_lv<18> ap_ST_fsm_pp0_stage4;
    static const sc_lv<18> ap_ST_fsm_pp0_stage5;
    static const sc_lv<18> ap_ST_fsm_pp0_stage6;
    static const sc_lv<18> ap_ST_fsm_pp0_stage7;
    static const sc_lv<18> ap_ST_fsm_pp0_stage8;
    static const sc_lv<18> ap_ST_fsm_pp0_stage9;
    static const sc_lv<18> ap_ST_fsm_pp0_stage10;
    static const sc_lv<18> ap_ST_fsm_pp0_stage11;
    static const sc_lv<18> ap_ST_fsm_pp0_stage12;
    static const sc_lv<18> ap_ST_fsm_pp0_stage13;
    static const sc_lv<18> ap_ST_fsm_pp0_stage14;
    static const sc_lv<18> ap_ST_fsm_pp0_stage15;
    static const sc_lv<18> ap_ST_fsm_state51;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_3;
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
    static const sc_lv<32> ap_const_lv32_11;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage15();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state51();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11();
    void thread_ap_block_pp0_stage11_11001();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12();
    void thread_ap_block_pp0_stage12_00001();
    void thread_ap_block_pp0_stage12_11001();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13();
    void thread_ap_block_pp0_stage13_11001();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14();
    void thread_ap_block_pp0_stage14_11001();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage15();
    void thread_ap_block_pp0_stage15_11001();
    void thread_ap_block_pp0_stage15_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_00001();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_00001();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_state10_pp0_stage8_iter0();
    void thread_ap_block_state11_pp0_stage9_iter0();
    void thread_ap_block_state12_pp0_stage10_iter0();
    void thread_ap_block_state13_pp0_stage11_iter0();
    void thread_ap_block_state14_pp0_stage12_iter0();
    void thread_ap_block_state15_pp0_stage13_iter0();
    void thread_ap_block_state16_pp0_stage14_iter0();
    void thread_ap_block_state17_pp0_stage15_iter0();
    void thread_ap_block_state18_pp0_stage0_iter1();
    void thread_ap_block_state19_pp0_stage1_iter1();
    void thread_ap_block_state20_pp0_stage2_iter1();
    void thread_ap_block_state21_pp0_stage3_iter1();
    void thread_ap_block_state22_pp0_stage4_iter1();
    void thread_ap_block_state23_pp0_stage5_iter1();
    void thread_ap_block_state24_pp0_stage6_iter1();
    void thread_ap_block_state25_pp0_stage7_iter1();
    void thread_ap_block_state26_pp0_stage8_iter1();
    void thread_ap_block_state27_pp0_stage9_iter1();
    void thread_ap_block_state28_pp0_stage10_iter1();
    void thread_ap_block_state29_pp0_stage11_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state30_pp0_stage12_iter1();
    void thread_ap_block_state31_pp0_stage13_iter1();
    void thread_ap_block_state32_pp0_stage14_iter1();
    void thread_ap_block_state33_pp0_stage15_iter1();
    void thread_ap_block_state34_pp0_stage0_iter2();
    void thread_ap_block_state35_pp0_stage1_iter2();
    void thread_ap_block_state36_pp0_stage2_iter2();
    void thread_ap_block_state37_pp0_stage3_iter2();
    void thread_ap_block_state38_pp0_stage4_iter2();
    void thread_ap_block_state39_pp0_stage5_iter2();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state40_pp0_stage6_iter2();
    void thread_ap_block_state41_pp0_stage7_iter2();
    void thread_ap_block_state42_pp0_stage8_iter2();
    void thread_ap_block_state43_pp0_stage9_iter2();
    void thread_ap_block_state44_pp0_stage10_iter2();
    void thread_ap_block_state45_pp0_stage11_iter2();
    void thread_ap_block_state46_pp0_stage12_iter2();
    void thread_ap_block_state47_pp0_stage13_iter2();
    void thread_ap_block_state48_pp0_stage14_iter2();
    void thread_ap_block_state49_pp0_stage15_iter2();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state50_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_phi_fu_120_p4();
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
    void thread_grp_fu_136_ce();
    void thread_grp_fu_136_p0();
    void thread_grp_fu_136_p1();
    void thread_grp_fu_140_p0();
    void thread_i_1_fu_220_p2();
    void thread_notlhs5_fu_307_p2();
    void thread_notlhs7_fu_354_p2();
    void thread_notlhs9_fu_394_p2();
    void thread_notlhs_fu_267_p2();
    void thread_notrhs1_fu_400_p2();
    void thread_notrhs6_fu_313_p2();
    void thread_notrhs8_fu_360_p2();
    void thread_notrhs_fu_273_p2();
    void thread_tempVal_1_0_3_to_int_fu_250_p1();
    void thread_tempVal_1_1_3_to_int_fu_290_p1();
    void thread_tempVal_1_2_3_to_int_fu_337_p1();
    void thread_tempVal_1_3_3_to_int_fu_377_p1();
    void thread_tmp_10_fu_285_p2();
    void thread_tmp_11_fu_293_p4();
    void thread_tmp_12_fu_303_p1();
    void thread_tmp_13_fu_319_p2();
    void thread_tmp_15_fu_325_p2();
    void thread_tmp_16_fu_340_p4();
    void thread_tmp_17_fu_350_p1();
    void thread_tmp_18_fu_366_p2();
    void thread_tmp_1_fu_226_p3();
    void thread_tmp_20_fu_372_p2();
    void thread_tmp_21_fu_380_p4();
    void thread_tmp_22_fu_390_p1();
    void thread_tmp_23_fu_406_p2();
    void thread_tmp_25_fu_412_p2();
    void thread_tmp_26_fu_331_p2();
    void thread_tmp_27_fu_418_p2();
    void thread_tmp_28_fu_424_p2();
    void thread_tmp_3_fu_253_p4();
    void thread_tmp_4_fu_234_p1();
    void thread_tmp_6_fu_263_p1();
    void thread_tmp_7_fu_428_p3();
    void thread_tmp_9_fu_279_p2();
    void thread_tmp_fu_214_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
