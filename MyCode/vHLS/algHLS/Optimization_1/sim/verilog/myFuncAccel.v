// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="myFuncAccel,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.750000,HLS_SYN_LAT=126001,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=5,HLS_SYN_FF=763,HLS_SYN_LUT=1369,HLS_VERSION=2018_3}" *)

module myFuncAccel (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        size,
        dim,
        threshold,
        data0_req_din,
        data0_req_full_n,
        data0_req_write,
        data0_rsp_empty_n,
        data0_rsp_read,
        data0_address,
        data0_datain,
        data0_dataout,
        data0_size,
        data1_req_din,
        data1_req_full_n,
        data1_req_write,
        data1_rsp_empty_n,
        data1_rsp_read,
        data1_address,
        data1_datain,
        data1_dataout,
        data1_size,
        data2_req_din,
        data2_req_full_n,
        data2_req_write,
        data2_rsp_empty_n,
        data2_rsp_read,
        data2_address,
        data2_datain,
        data2_dataout,
        data2_size
);

parameter    ap_ST_fsm_state1 = 39'd1;
parameter    ap_ST_fsm_state2 = 39'd2;
parameter    ap_ST_fsm_state3 = 39'd4;
parameter    ap_ST_fsm_state4 = 39'd8;
parameter    ap_ST_fsm_state5 = 39'd16;
parameter    ap_ST_fsm_state6 = 39'd32;
parameter    ap_ST_fsm_state7 = 39'd64;
parameter    ap_ST_fsm_state8 = 39'd128;
parameter    ap_ST_fsm_state9 = 39'd256;
parameter    ap_ST_fsm_state10 = 39'd512;
parameter    ap_ST_fsm_state11 = 39'd1024;
parameter    ap_ST_fsm_state12 = 39'd2048;
parameter    ap_ST_fsm_state13 = 39'd4096;
parameter    ap_ST_fsm_state14 = 39'd8192;
parameter    ap_ST_fsm_state15 = 39'd16384;
parameter    ap_ST_fsm_state16 = 39'd32768;
parameter    ap_ST_fsm_state17 = 39'd65536;
parameter    ap_ST_fsm_state18 = 39'd131072;
parameter    ap_ST_fsm_state19 = 39'd262144;
parameter    ap_ST_fsm_state20 = 39'd524288;
parameter    ap_ST_fsm_state21 = 39'd1048576;
parameter    ap_ST_fsm_state22 = 39'd2097152;
parameter    ap_ST_fsm_state23 = 39'd4194304;
parameter    ap_ST_fsm_state24 = 39'd8388608;
parameter    ap_ST_fsm_state25 = 39'd16777216;
parameter    ap_ST_fsm_state26 = 39'd33554432;
parameter    ap_ST_fsm_state27 = 39'd67108864;
parameter    ap_ST_fsm_state28 = 39'd134217728;
parameter    ap_ST_fsm_state29 = 39'd268435456;
parameter    ap_ST_fsm_state30 = 39'd536870912;
parameter    ap_ST_fsm_state31 = 39'd1073741824;
parameter    ap_ST_fsm_state32 = 39'd2147483648;
parameter    ap_ST_fsm_state33 = 39'd4294967296;
parameter    ap_ST_fsm_state34 = 39'd8589934592;
parameter    ap_ST_fsm_state35 = 39'd17179869184;
parameter    ap_ST_fsm_state36 = 39'd34359738368;
parameter    ap_ST_fsm_state37 = 39'd68719476736;
parameter    ap_ST_fsm_state38 = 39'd137438953472;
parameter    ap_ST_fsm_state39 = 39'd274877906944;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] size;
input  [31:0] dim;
input  [31:0] threshold;
output   data0_req_din;
input   data0_req_full_n;
output   data0_req_write;
input   data0_rsp_empty_n;
output   data0_rsp_read;
output  [31:0] data0_address;
input  [31:0] data0_datain;
output  [31:0] data0_dataout;
output  [31:0] data0_size;
output   data1_req_din;
input   data1_req_full_n;
output   data1_req_write;
input   data1_rsp_empty_n;
output   data1_rsp_read;
output  [31:0] data1_address;
input  [31:0] data1_datain;
output  [31:0] data1_dataout;
output  [31:0] data1_size;
output   data2_req_din;
input   data2_req_full_n;
output   data2_req_write;
input   data2_rsp_empty_n;
output   data2_rsp_read;
output  [31:0] data2_address;
input  [31:0] data2_datain;
output  [31:0] data2_dataout;
output  [31:0] data2_size;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data0_req_write;
reg data0_rsp_read;
reg data1_req_write;
reg data1_rsp_read;
reg data2_req_din;
reg data2_req_write;
reg data2_rsp_read;
reg[31:0] data2_address;
reg[31:0] data2_dataout;

(* fsm_encoding = "none" *) reg   [38:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [31:0] reg_180;
wire    ap_CS_fsm_state8;
reg    ap_block_state8;
wire    ap_CS_fsm_state13;
reg    ap_block_state13;
wire    ap_CS_fsm_state18;
reg    ap_block_state18;
reg   [31:0] reg_185;
wire   [31:0] grp_fu_171_p2;
reg   [31:0] reg_190;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state22;
wire   [31:0] grp_fu_166_p2;
reg   [31:0] reg_196;
wire    ap_CS_fsm_state27;
wire    ap_CS_fsm_state32;
wire   [9:0] i_1_fu_208_p2;
reg   [9:0] i_1_reg_336;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_fu_202_p2;
reg    ap_block_state2;
reg   [31:0] data2_addr_reg_341;
reg   [31:0] data1_addr_reg_347;
wire   [2:0] k_fu_245_p2;
reg   [2:0] k_reg_356;
wire    ap_CS_fsm_state6;
wire   [0:0] tmp_6_fu_239_p2;
wire   [0:0] is_0iter_fu_274_p2;
reg   [0:0] is_0iter_reg_367;
reg   [31:0] data0_addr_read_3_reg_371;
wire    ap_CS_fsm_state19;
reg    ap_block_state19;
reg   [31:0] data1_addr_read_3_reg_376;
reg   [31:0] tmp_17_3_reg_381;
wire    ap_CS_fsm_state23;
wire   [0:0] tmp_8_fu_280_p2;
reg   [0:0] tmp_8_reg_386;
wire    ap_CS_fsm_state35;
reg    ap_block_state35;
wire   [2:0] l_fu_286_p2;
reg   [2:0] l_reg_390;
reg   [31:0] data2_addr_read_reg_395;
reg   [9:0] i_reg_133;
wire    ap_CS_fsm_state39;
reg    ap_block_state39;
reg   [2:0] k_1_reg_144;
wire    ap_CS_fsm_state33;
wire    ap_CS_fsm_state5;
reg   [2:0] l_1_reg_155;
wire    ap_CS_fsm_state34;
wire    ap_CS_fsm_state36;
wire   [0:0] tmp_13_fu_327_p2;
wire   [63:0] tmp_4_fu_222_p1;
wire   [63:0] tmp_s_fu_263_p1;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state37;
wire    ap_CS_fsm_state38;
reg   [31:0] grp_fu_166_p0;
reg   [31:0] grp_fu_166_p1;
wire    ap_CS_fsm_state28;
reg   [31:0] grp_fu_171_p0;
reg   [31:0] grp_fu_171_p1;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state20;
wire   [11:0] tmp_1_fu_214_p3;
wire   [1:0] tmp_3_fu_251_p1;
wire   [3:0] tmp_7_fu_255_p3;
wire   [31:0] data2_load_to_int_fu_292_p1;
wire   [7:0] tmp_9_fu_295_p4;
wire   [22:0] tmp_10_fu_305_p1;
wire   [0:0] notrhs_fu_315_p2;
wire   [0:0] notlhs_fu_309_p2;
wire   [0:0] tmp_11_fu_321_p2;
wire   [0:0] tmp_12_fu_175_p2;
reg    grp_fu_166_ce;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state21;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state25;
wire    ap_CS_fsm_state26;
wire    ap_CS_fsm_state29;
wire    ap_CS_fsm_state30;
wire    ap_CS_fsm_state31;
reg    grp_fu_171_ce;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
reg   [38:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 39'd1;
end

myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
myFuncAccel_fadd_32ns_32ns_32_5_full_dsp_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_166_p0),
    .din1(grp_fu_166_p1),
    .ce(grp_fu_166_ce),
    .dout(grp_fu_166_p2)
);

myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
myFuncAccel_fmul_32ns_32ns_32_4_max_dsp_1_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_171_p0),
    .din1(grp_fu_171_p1),
    .ce(grp_fu_171_ce),
    .dout(grp_fu_171_p2)
);

myFuncAccel_fcmp_32ns_32ns_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
myFuncAccel_fcmp_32ns_32ns_1_1_1_U3(
    .din0(data2_addr_read_reg_395),
    .din1(32'd1120403456),
    .opcode(5'd2),
    .dout(tmp_12_fu_175_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((~((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1)) & (1'b1 == ap_CS_fsm_state39))) begin
        i_reg_133 <= i_1_reg_336;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_133 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((data2_req_full_n == 1'b1)) begin
        if ((1'b1 == ap_CS_fsm_state5)) begin
            k_1_reg_144 <= 3'd0;
        end else if ((1'b1 == ap_CS_fsm_state33)) begin
            k_1_reg_144 <= k_reg_356;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_13_fu_327_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state36))) begin
        l_1_reg_155 <= l_reg_390;
    end else if ((1'b1 == ap_CS_fsm_state34)) begin
        l_1_reg_155 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19))) begin
        data0_addr_read_3_reg_371 <= data0_datain;
        data1_addr_read_3_reg_376 <= data1_datain;
    end
end

always @ (posedge ap_clk) begin
    if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0))) begin
        data1_addr_reg_347[11 : 2] <= tmp_4_fu_222_p1[11 : 2];
        data2_addr_reg_341[11 : 2] <= tmp_4_fu_222_p1[11 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (1'b1 == ap_CS_fsm_state35) & (tmp_8_fu_280_p2 == 1'd0))) begin
        data2_addr_read_reg_395 <= data2_datain;
    end
end

always @ (posedge ap_clk) begin
    if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2))) begin
        i_1_reg_336 <= i_1_fu_208_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd0))) begin
        is_0iter_reg_367 <= is_0iter_fu_274_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        k_reg_356 <= k_fu_245_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (1'b1 == ap_CS_fsm_state35))) begin
        l_reg_390 <= l_fu_286_p2;
        tmp_8_reg_386 <= tmp_8_fu_280_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state18)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)))) begin
        reg_180 <= data0_datain;
        reg_185 <= data1_datain;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state12))) begin
        reg_190 <= grp_fu_171_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17))) begin
        reg_196 <= grp_fu_166_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        tmp_17_3_reg_381 <= grp_fu_171_p2;
    end
end

always @ (*) begin
    if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd0))) begin
        data0_req_write = 1'b1;
    end else begin
        data0_req_write = 1'b0;
    end
end

always @ (*) begin
    if (((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state18)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)))) begin
        data0_rsp_read = 1'b1;
    end else begin
        data0_rsp_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd0))) begin
        data1_req_write = 1'b1;
    end else begin
        data1_req_write = 1'b0;
    end
end

always @ (*) begin
    if (((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state18)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8)))) begin
        data1_rsp_read = 1'b1;
    end else begin
        data1_rsp_read = 1'b0;
    end
end

always @ (*) begin
    if ((((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33) & (is_0iter_reg_367 == 1'd1)) | (~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (tmp_8_fu_280_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state35)) | ((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd1)))) begin
        data2_address = data2_addr_reg_341;
    end else if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0))) begin
        data2_address = tmp_4_fu_222_p1;
    end else begin
        data2_address = 'bx;
    end
end

always @ (*) begin
    if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33))) begin
        data2_dataout = reg_196;
    end else if ((((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | (~((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1)) & (tmp_8_reg_386 == 1'd1) & (1'b1 == ap_CS_fsm_state39)) | (~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (tmp_8_fu_280_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state35)) | (~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0)))) begin
        data2_dataout = 32'd0;
    end else begin
        data2_dataout = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd1))) begin
        data2_req_din = 1'b0;
    end else if ((((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33) & (is_0iter_reg_367 == 1'd1)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33)) | (~((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1)) & (tmp_8_reg_386 == 1'd1) & (1'b1 == ap_CS_fsm_state39)) | (~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (tmp_8_fu_280_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state35)) | (~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0)))) begin
        data2_req_din = 1'b1;
    end else begin
        data2_req_din = 1'b0;
    end
end

always @ (*) begin
    if ((((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33) & (is_0iter_reg_367 == 1'd1)) | ((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33)) | (~((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1)) & (tmp_8_reg_386 == 1'd1) & (1'b1 == ap_CS_fsm_state39)) | (~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (tmp_8_fu_280_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state35)) | ((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd1)) | (~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0)))) begin
        data2_req_write = 1'b1;
    end else begin
        data2_req_write = 1'b0;
    end
end

always @ (*) begin
    if ((~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (1'b1 == ap_CS_fsm_state35) & (tmp_8_fu_280_p2 == 1'd0))) begin
        data2_rsp_read = 1'b1;
    end else begin
        data2_rsp_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state31) | (1'b1 == ap_CS_fsm_state30) | (1'b1 == ap_CS_fsm_state29) | (1'b1 == ap_CS_fsm_state26) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state28) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state18)) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13)))) begin
        grp_fu_166_ce = 1'b1;
    end else begin
        grp_fu_166_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state28) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18))) begin
        grp_fu_166_p0 = reg_196;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        grp_fu_166_p0 = reg_190;
    end else begin
        grp_fu_166_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        grp_fu_166_p1 = tmp_17_3_reg_381;
    end else if (((1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18))) begin
        grp_fu_166_p1 = reg_190;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        grp_fu_166_p1 = 32'd0;
    end else begin
        grp_fu_166_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state12) | (~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)))) begin
        grp_fu_171_ce = 1'b1;
    end else begin
        grp_fu_171_ce = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        grp_fu_171_p0 = data0_addr_read_3_reg_371;
    end else if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state19))) begin
        grp_fu_171_p0 = reg_180;
    end else begin
        grp_fu_171_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        grp_fu_171_p1 = data1_addr_read_3_reg_376;
    end else if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state19))) begin
        grp_fu_171_p1 = reg_185;
    end else begin
        grp_fu_171_p1 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if ((~((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0)) & (1'b1 == ap_CS_fsm_state2) & (tmp_fu_202_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (tmp_6_fu_239_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state34;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            if ((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            if ((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            if ((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state18))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state19 : begin
            if ((~((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state33))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state33;
            end
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            if ((~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (tmp_8_fu_280_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state35))) begin
                ap_NS_fsm = ap_ST_fsm_state37;
            end else if ((~(((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1))) & (1'b1 == ap_CS_fsm_state35) & (tmp_8_fu_280_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state36;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state35;
            end
        end
        ap_ST_fsm_state36 : begin
            if (((1'b1 == ap_CS_fsm_state36) & (tmp_13_fu_327_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state35;
            end
        end
        ap_ST_fsm_state37 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37))) begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state37;
            end
        end
        ap_ST_fsm_state38 : begin
            if (((data2_req_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38))) begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end
        end
        ap_ST_fsm_state39 : begin
            if ((~((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1)) & (1'b1 == ap_CS_fsm_state39))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];

assign ap_CS_fsm_state28 = ap_CS_fsm[32'd27];

assign ap_CS_fsm_state29 = ap_CS_fsm[32'd28];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state30 = ap_CS_fsm[32'd29];

assign ap_CS_fsm_state31 = ap_CS_fsm[32'd30];

assign ap_CS_fsm_state32 = ap_CS_fsm[32'd31];

assign ap_CS_fsm_state33 = ap_CS_fsm[32'd32];

assign ap_CS_fsm_state34 = ap_CS_fsm[32'd33];

assign ap_CS_fsm_state35 = ap_CS_fsm[32'd34];

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd35];

assign ap_CS_fsm_state37 = ap_CS_fsm[32'd36];

assign ap_CS_fsm_state38 = ap_CS_fsm[32'd37];

assign ap_CS_fsm_state39 = ap_CS_fsm[32'd38];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state13 = ((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state18 = ((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state19 = ((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state2 = ((data2_req_full_n == 1'b0) & (tmp_fu_202_p2 == 1'd0));
end

always @ (*) begin
    ap_block_state35 = (((data2_rsp_empty_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd0)) | ((data2_req_full_n == 1'b0) & (tmp_8_fu_280_p2 == 1'd1)));
end

always @ (*) begin
    ap_block_state39 = ((data2_req_full_n == 1'b0) & (tmp_8_reg_386 == 1'd1));
end

always @ (*) begin
    ap_block_state8 = ((data1_rsp_empty_n == 1'b0) | (data0_rsp_empty_n == 1'b0));
end

assign data0_address = tmp_s_fu_263_p1;

assign data0_dataout = 32'd0;

assign data0_req_din = 1'b0;

assign data0_size = 32'd4;

assign data1_address = data1_addr_reg_347;

assign data1_dataout = 32'd0;

assign data1_req_din = 1'b0;

assign data1_size = 32'd4;

assign data2_load_to_int_fu_292_p1 = data2_addr_read_reg_395;

assign data2_size = 32'd4;

assign i_1_fu_208_p2 = (i_reg_133 + 10'd1);

assign is_0iter_fu_274_p2 = ((k_1_reg_144 == 3'd0) ? 1'b1 : 1'b0);

assign k_fu_245_p2 = (k_1_reg_144 + 3'd1);

assign l_fu_286_p2 = (l_1_reg_155 + 3'd1);

assign notlhs_fu_309_p2 = ((tmp_9_fu_295_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notrhs_fu_315_p2 = ((tmp_10_fu_305_p1 == 23'd0) ? 1'b1 : 1'b0);

assign tmp_10_fu_305_p1 = data2_load_to_int_fu_292_p1[22:0];

assign tmp_11_fu_321_p2 = (notrhs_fu_315_p2 | notlhs_fu_309_p2);

assign tmp_13_fu_327_p2 = (tmp_12_fu_175_p2 & tmp_11_fu_321_p2);

assign tmp_1_fu_214_p3 = {{i_reg_133}, {2'd0}};

assign tmp_3_fu_251_p1 = k_1_reg_144[1:0];

assign tmp_4_fu_222_p1 = tmp_1_fu_214_p3;

assign tmp_6_fu_239_p2 = ((k_1_reg_144 == 3'd4) ? 1'b1 : 1'b0);

assign tmp_7_fu_255_p3 = {{tmp_3_fu_251_p1}, {2'd0}};

assign tmp_8_fu_280_p2 = ((l_1_reg_155 == 3'd4) ? 1'b1 : 1'b0);

assign tmp_9_fu_295_p4 = {{data2_load_to_int_fu_292_p1[30:23]}};

assign tmp_fu_202_p2 = ((i_reg_133 == 10'd1000) ? 1'b1 : 1'b0);

assign tmp_s_fu_263_p1 = tmp_7_fu_255_p3;

always @ (posedge ap_clk) begin
    data2_addr_reg_341[1:0] <= 2'b00;
    data2_addr_reg_341[31:12] <= 20'b00000000000000000000;
    data1_addr_reg_347[1:0] <= 2'b00;
    data1_addr_reg_347[31:12] <= 20'b00000000000000000000;
end

endmodule //myFuncAccel
