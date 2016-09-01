// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _HWA_func_HH_
#define _HWA_func_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "HWA_func_srem_32ns_32ns_32_35_seq.h"

namespace ap_rtl {

struct HWA_func : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_in< sc_lv<32> > y;
    sc_out< sc_lv<32> > id;
    sc_out< sc_logic > id_ap_vld;
    sc_out< sc_lv<32> > out_r;
    sc_out< sc_logic > out_r_ap_vld;


    // Module declarations
    HWA_func(sc_module_name name);
    SC_HAS_PROCESS(HWA_func);

    ~HWA_func();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    HWA_func_srem_32ns_32ns_32_35_seq<0,35,32,32,32>* HWA_func_srem_32ns_32ns_32_35_seq_U0;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_lv<32> > grp_fu_86_p2;
    sc_signal< sc_lv<32> > c_reg_57;
    sc_signal< sc_lv<32> > b_reg_67;
    sc_signal< sc_lv<1> > tmp_fu_80_p2;
    sc_signal< sc_lv<32> > grp_fu_86_p0;
    sc_signal< sc_lv<32> > grp_fu_86_p1;
    sc_signal< sc_logic > HWA_func_srem_32ns_32ns_32_35_seq_U0_ap_start;
    sc_signal< sc_logic > grp_fu_86_ce;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_st1_fsm_0;
    static const sc_lv<6> ap_ST_st2_fsm_1;
    static const sc_lv<6> ap_ST_st3_fsm_2;
    static const sc_lv<6> ap_ST_st4_fsm_3;
    static const sc_lv<6> ap_ST_st5_fsm_4;
    static const sc_lv<6> ap_ST_st6_fsm_5;
    static const sc_lv<6> ap_ST_st7_fsm_6;
    static const sc_lv<6> ap_ST_st8_fsm_7;
    static const sc_lv<6> ap_ST_st9_fsm_8;
    static const sc_lv<6> ap_ST_st10_fsm_9;
    static const sc_lv<6> ap_ST_st11_fsm_10;
    static const sc_lv<6> ap_ST_st12_fsm_11;
    static const sc_lv<6> ap_ST_st13_fsm_12;
    static const sc_lv<6> ap_ST_st14_fsm_13;
    static const sc_lv<6> ap_ST_st15_fsm_14;
    static const sc_lv<6> ap_ST_st16_fsm_15;
    static const sc_lv<6> ap_ST_st17_fsm_16;
    static const sc_lv<6> ap_ST_st18_fsm_17;
    static const sc_lv<6> ap_ST_st19_fsm_18;
    static const sc_lv<6> ap_ST_st20_fsm_19;
    static const sc_lv<6> ap_ST_st21_fsm_20;
    static const sc_lv<6> ap_ST_st22_fsm_21;
    static const sc_lv<6> ap_ST_st23_fsm_22;
    static const sc_lv<6> ap_ST_st24_fsm_23;
    static const sc_lv<6> ap_ST_st25_fsm_24;
    static const sc_lv<6> ap_ST_st26_fsm_25;
    static const sc_lv<6> ap_ST_st27_fsm_26;
    static const sc_lv<6> ap_ST_st28_fsm_27;
    static const sc_lv<6> ap_ST_st29_fsm_28;
    static const sc_lv<6> ap_ST_st30_fsm_29;
    static const sc_lv<6> ap_ST_st31_fsm_30;
    static const sc_lv<6> ap_ST_st32_fsm_31;
    static const sc_lv<6> ap_ST_st33_fsm_32;
    static const sc_lv<6> ap_ST_st34_fsm_33;
    static const sc_lv<6> ap_ST_st35_fsm_34;
    static const sc_lv<6> ap_ST_st36_fsm_35;
    static const sc_lv<32> ap_const_lv32_7D;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_HWA_func_srem_32ns_32ns_32_35_seq_U0_ap_start();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_86_ce();
    void thread_grp_fu_86_p0();
    void thread_grp_fu_86_p1();
    void thread_id();
    void thread_id_ap_vld();
    void thread_out_r();
    void thread_out_r_ap_vld();
    void thread_tmp_fu_80_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif