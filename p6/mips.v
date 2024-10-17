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
	 input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
    );
	wire [5:0] op;
   wire [5:0] funct;
   wire [1:0] jump;
   wire branch;
	wire [2:0] branch_sel;
   wire [1:0] MemtoReg;
   wire MemWrite;
   wire [3:0] ALUOp;
   wire ALUSrc;
   wire RegWrite;
   wire [1:0] ExtOp;
   wire [2:0] RegDst;
	wire [2:0] ByteOp;
	wire [3:0] MDUOp;
	wire start;
	wire MDU_busy;
	wire just_stall;
	wire [2:0] Tuse_rs, Tuse_rt;
	wire [2:0] Tnew_D, Tnew_E, Tnew_M, Tnew_W;
	wire [4:0] D_A1, D_A2, E_A1, E_A2, M_A2;
	wire [4:0] E_WR, M_WR, W_WR;
	wire [1:0] MF_V1_D_Sel, MF_V2_D_Sel, MF_V1_E_Sel, MF_V2_E_Sel, M_WD_Sel;
	wire MF_V2_M_Sel;
	Control CU (
		////////input////////
		.op(op),
		.funct(funct),
		////////output////////
		.jump(jump),
		.branch(branch),
		.branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.ByteOp(ByteOp),
		.MDUOp(MDUOp),
		.M_WD_Sel(M_WD_Sel),
		.start(start),
		.Tuse_rs(Tuse_rs),
		.Tuse_rt(Tuse_rt),
		.Tnew_D(Tnew_D)
	);
	HazardControl HCU (
		.D_A1(D_A1),
		.D_A2(D_A2),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.M_A2(M_A2),
		.E_WR(E_WR),
		.M_WR(M_WR),
		.W_WR(W_WR),
		.Tuse_rs(Tuse_rs),
		.Tuse_rt(Tuse_rt),
		.Tnew_E(Tnew_E),
		.Tnew_M(Tnew_M),
		.Tnew_W(Tnew_W),
		.RegWrite_E(RegWrite_E),
		.RegWrite_M(RegWrite_M),
		.RegWrite_W(RegWrite_W),
		.MDU_busy(MDU_busy),
		.just_stall(just_stall),
		.Stall(Stall),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel)
	);
	DataPath datapath (
		////////input///////
		.clk(clk),
		.reset(reset),
		.i_inst_rdata(i_inst_rdata),
		.m_data_rdata(m_data_rdata),
		.Jump(jump),
		.Branch(branch),
		.Branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.ByteOp(ByteOp),
		.MDUOp(MDUOp),
		.M_WD_Sel(M_WD_Sel),
		.Start(start),
		.Stall(Stall),
		.Tnew_D(Tnew_D),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel),
		////////output////////
		.Op(op),
		.Funct(funct),
		.D_A1(D_A1),
		.D_A2(D_A2),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.M_A2(M_A2),
		.E_WR(E_WR),
		.M_WR(M_WR),
		.W_WR(W_WR),
		.Tnew_E(Tnew_E),
		.Tnew_M(Tnew_M),
		.Tnew_W(Tnew_W),
		.RegWrite_E(RegWrite_E),
		.RegWrite_M(RegWrite_M),
		.RegWrite_W(RegWrite_W),
		.MDU_busy(MDU_busy),
		.just_stall(just_stall),
		.i_inst_addr(i_inst_addr),
		.m_data_addr(m_data_addr),
		.m_data_byteen(m_data_byteen),
		.m_data_wdata(m_data_wdata),
		.m_inst_addr(m_inst_addr),
		.w_grf_we(w_grf_we),
		.w_grf_addr(w_grf_addr),
		.w_grf_wdata(w_grf_wdata),
		.w_inst_addr(w_inst_addr)
	);
		
endmodule





