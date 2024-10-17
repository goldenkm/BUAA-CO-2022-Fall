`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:59 10/25/2022 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] macroscopic_pc,
	 ////IM////
	 input [31:0] i_inst_rdata,
	 output [31:0] i_inst_addr,
	 ////DM////
    output [31:0] m_data_addr,
	 input [31:0] m_data_rdata,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
	 ////Int////
	 output [31:0] m_int_addr,
	 output [3:0] m_int_byteen,
	 ////M_PC////
    output [31:0] m_inst_addr,
	 ////GRF////
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
	 ////W_PC////
    output [31:0] w_inst_addr
    );
	wire [31:0] VAdd;
	wire [5:0] HWInt;
	wire [31:0] Bridge_out, CPUOut, TC0_out, TC1_out;
	wire [3:0] ByteEn;
	wire [31:2] TC0_addr, TC1_addr;
	wire IntReq;
	wire TC0_we, TC1_we, TC0_int, TC1_int;
	assign HWInt = {3'b0, interrupt, TC1_int, TC0_int};
	CPU cpu (
		.clk(clk),
		.reset(reset),
		.i_inst_rdata(i_inst_rdata),
		.i_inst_addr(i_inst_addr),
		.CPUIn(Bridge_out),
		.HWInt(HWInt),
		.VAdd(VAdd),
		.CPUOut(CPUOut),
		.ByteEn(ByteEn),
		.IntReq(IntReq),
		.m_inst_addr(m_inst_addr),
		.w_grf_we(w_grf_we),
		.w_grf_addr(w_grf_addr),
		.w_grf_wdata(w_grf_wdata),
		.w_inst_addr(w_inst_addr),
		.macro_pc(macroscopic_pc)
	);
	Bridge bridge (
		////input////
		.VAdd(VAdd),
		.ByteEn(ByteEn),
		.CPUOut(CPUOut),
		.TC0_out(TC0_out),
		.TC1_out(TC1_out),
		.m_data_rdata(m_data_rdata),
		////output////
		.m_data_addr(m_data_addr),
		.m_data_byteen(m_data_byteen),
		.m_data_wdata(m_data_wdata),
		.m_int_addr(m_int_addr),
		.m_int_byteen(m_int_byteen),
		.TC0_addr(TC0_addr),
		.TC1_addr(TC1_addr),
		.TC0_we(TC0_we),
		.TC1_we(TC1_we),
		.Bridge_out(Bridge_out)
	);
	TC timer0 (
		.clk(clk),
		.reset(reset),
		.Addr(TC0_addr),
		.WE(TC0_we),
		.Din(m_data_wdata),
		.Dout(TC0_out),
		.IRQ(TC0_int)
	);
	TC timer1 (
		.clk(clk),
		.reset(reset),
		.Addr(TC1_addr),
		.WE(TC1_we),
		.Din(m_data_wdata),
		.Dout(TC1_out),
		.IRQ(TC1_int)
	);
		
endmodule





