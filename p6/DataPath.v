`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:38 10/28/2022 
// Design Name: 
// Module Name:    DataPath 
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
module DataPath(
    input clk,
    input reset,
	 ////////IM and DM////////
	 input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
	 ////////Control Signal////////
	 input [1:0] Jump,
	 input Branch,
	 input [2:0] Branch_sel,
	 input [1:0] MemtoReg,
	 input MemWrite,
	 input [3:0] ALUOp,
	 input ALUSrc,
	 input RegWrite,
	 input [1:0] ExtOp,
	 input [2:0] RegDst,
	 input [2:0] ByteOp,
	 input [3:0] MDUOp,
	 input Start,
	 input [1:0] M_WD_Sel,
	 ////////Stall and Forward Signal////////
	 input Stall,
	 input [2:0] Tnew_D,
	 input [1:0] MF_V1_D_Sel,
	 input [1:0] MF_V2_D_Sel,
	 input [1:0] MF_V1_E_Sel,
	 input [1:0] MF_V2_E_Sel,
	 input MF_V2_M_Sel,
    output [5:0] Op,
    output [5:0] Funct,
	 output [4:0] D_A1,
    output [4:0] D_A2,
    output [4:0] E_A1,
    output [4:0] E_A2,
    output [4:0] M_A2,
    output [4:0] E_WR,
    output [4:0] M_WR,
    output [4:0] W_WR,
    output [2:0] Tnew_E,
    output [2:0] Tnew_M,
    output [2:0] Tnew_W,
	 output RegWrite_E,
	 output RegWrite_M,
	 output RegWrite_W,
	 output MDU_busy,
	 output just_stall,
	 ////////IM and DM////////
	 output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
	 ////////GRF////////
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
    );
	/************************Stage_F*************************/
	wire [31:0] in_pc;
	wire [31:0] F_pc;
	wire en = ~Stall;
	PC pc (
		.in_pc(in_pc),
		.clk(clk),
		.reset(reset),
		.en(en),
		.out_pc(F_pc)
	);
	assign i_inst_addr = F_pc;
	wire [31:0] F_instr = i_inst_rdata;
	/*IM im (
		.F_pc(F_pc),
		.F_instr(F_instr)
	);*/
	wire [31:0] D_instr;
	wire [31:0] D_pc;
	IF_ID_Reg IF_ID(
		.clk(clk),
		.reset(reset),
		.en(en),										
		.F_instr(F_instr),
		.F_pc(F_pc),
		.D_instr(D_instr),
		.D_pc(D_pc)
	);
	/************************Stage_D*************************/
	wire [5:0] op;
	wire [4:0] rs;
	wire [4:0] rt;
   wire [4:0] rd;
   wire [4:0] shamt;
   wire [15:0] imm16;
   wire [5:0] funct;
	wire [25:0] addr26;
	Splitter splitter(
		.Instr(D_instr),
		.op(op),
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.shamt(shamt),
		.imm16(imm16),
		.funct(funct),
		.addr26(addr26)
	);
	assign Op = op;
	assign Funct = funct;
	assign D_A1 = rs;
	assign D_A2 = rt;
	wire [4:0] D_WR, D_WR_tmp;
	MUX4_5bits mux_RegDst(
		.in_a(rt),
		.in_b(rd),
		.in_c(5'd31),
		.in_d(5'd0),
		.slt(RegDst),
		.out(D_WR_tmp)
	);
	wire [31:0] D_RD1;
	wire [31:0] D_RD2;
	wire [31:0] W_WD;
	wire [31:0] W_pc;
	wire RegWrite_D = RegWrite;
	RF rf (
		.clk(clk),
		.reset(reset),
		.pc(W_pc),
		.rs(rs),
		.rt(rt),
		.write_reg(W_WR),
		.write_data(W_WD),
		.RegWrite(RegWrite_W),
		.read_data1(D_RD1),
		.read_data2(D_RD2)
	);
	wire [31:0] D_V1;
	wire [31:0] D_V2;
	wire [31:0] M_WD;
	wire [31:0] E_pc_add_8;
	MUX4_32bits FMux_V1_D(
		.in_a(D_RD1),
		.in_b(E_pc_add_8),
		.in_c(M_WD),
		.in_d(W_WD),
		.slt(MF_V1_D_Sel),
		.out(D_V1)
	);
	MUX4_32bits FMux_V2_D(
		.in_a(D_RD2),
		.in_b(E_pc_add_8),
		.in_c(M_WD),
		.in_d(W_WD),
		.slt(MF_V2_D_Sel),
		.out(D_V2)
	);
	wire zero, bezal;
	CMP cmp(
		.RD1(D_V1),
		.RD2(D_V2),
		.zero(zero),
		.bezal(bezal)
	);
	assign D_WR = (RegDst == 3'b011 && bezal) ? 5'd31 : D_WR_tmp;
	wire [31:0] D_imm32;
	Ext ext (
		.imm16(imm16),
		.ExtOp(ExtOp),
		.imm32(D_imm32)
	);
	assign branch = (Branch_sel == 3'b001 && zero == 1) | (Branch_sel == 3'b010 && zero == 0);
	wire jabs = (Branch_sel == 3'b011);
	wire [31:0] pc_next;
	nPC next_pc (
		.F_pc(F_pc),
		.D_pc(D_pc),
		.D_V1(D_V1),
		.D_V2(D_V2),
		.address26(addr26),
		.imm16(imm16),
		.reg31_data(D_V1),
		.branch(branch),
		.jump(Jump),
		.jabs(jabs),						// Npc is GPR[rs]
		.pc_next(pc_next)
	);
	assign in_pc = pc_next;
	wire [31:0] D_pc_add_8 = D_pc + 32'd8;
	wire clr = Stall;
	wire [31:0] E_V1;
	wire [31:0] E_V2;
	wire [31:0] E_pc;
	wire [31:0] E_imm32;
	wire ALUSrc_D = ALUSrc;
	wire [3:0] ALUOp_D = ALUOp;
	wire MemWrite_D = MemWrite;
	wire [1:0] MemtoReg_D = MemtoReg;
	wire [1:0] M_WD_Sel_D = M_WD_Sel;
	wire ALUSrc_E;
	wire [3:0] ALUOp_E;
	wire MemWrite_E;
	wire [1:0] MemtoReg_E;
	wire [2:0] ByteOp_E;
	wire [3:0] MDUOp_E;
	wire Start_E;
	wire [1:0] M_WD_Sel_E;
	ID_EX_Reg ID_EX(
		.clk(clk),
		.reset(reset),
		.clr(clr),
		.D_A1(D_A1),
		.D_A2(D_A2),
		.D_WR(D_WR),
		.D_V1(D_V1),
		.D_V2(D_V2),
		.D_pc(D_pc),
		.D_pc_add_8(D_pc_add_8),
		.D_imm32(D_imm32),
		.RegWrite_D(RegWrite_D),
		.ALUSrc_D(ALUSrc_D),
		.ALUOp_D(ALUOp_D),
		.MemWrite_D(MemWrite_D),
		.MemtoReg_D(MemtoReg_D),
		.ByteOp_D(ByteOp),
		.MDUOp_D(MDUOp),
		.Start_D(Start),
		.M_WD_Sel_D(M_WD_Sel_D),
		.Tnew_D(Tnew_D),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.E_WR(E_WR),
		.E_V1(E_V1),
		.E_V2(E_V2),
		.E_pc(E_pc),
		.E_pc_add_8(E_pc_add_8),
		.E_imm32(E_imm32),
		.RegWrite_E(RegWrite_E),
		.ALUSrc_E(ALUSrc_E),
		.ALUOp_E(ALUOp_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.ByteOp_E(ByteOp_E),
		.MDUOp_E(MDUOp_E),
		.Start_E(Start_E),
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E)
	);
	/************************Stage_E*************************/
	assign just_stall = (ByteOp_E == 3'b111);					//条件访存无脑阻塞一个周期
	wire [31:0] alu_in_a;
	MUX3_32bits FMux_V1_E(
		.in_a(E_V1),
		.in_b(M_WD),
		.in_c(W_WD),
		.slt(MF_V1_E_Sel),
		.out(alu_in_a)
	);
	wire [31:0] alu_in_b_tmp;
	MUX3_32bits FMux_V2_E(
		.in_a(E_V2),
		.in_b(M_WD),
		.in_c(W_WD),
		.slt(MF_V2_E_Sel),
		.out(alu_in_b_tmp)
	);
	wire [31:0] alu_in_b;
	MUX2_32bits mux_ALUSrc (
		.in_a(alu_in_b_tmp),
		.in_b(E_imm32),
		.slt(ALUSrc_E),
		.out(alu_in_b)
	);
	wire [31:0] E_AO;
	ALU alu (
		.in_a(alu_in_a),
		.in_b(alu_in_b),
		.ALUOp(ALUOp_E),
		.result(E_AO)
	);
	wire [31:0] data_hi;
	wire [31:0] data_lo;
	MDU mdu (
		.clk(clk),
		.reset(reset),
		.in_a(alu_in_a),
		.in_b(alu_in_b),
		.MDUOp(MDUOp_E),
		.start(Start_E),
		.data_hi(data_hi),
		.data_lo(data_lo),
		.busy(Busy)
	);
	wire [31:0] E_MDU_out = (MDUOp_E == 4'b0110) ? data_lo : 
							(MDUOp_E == 4'b0101) ? data_hi :
							0;
	assign MDU_busy = (MDUOp != 0 && (Busy||Start_E));
	wire [31:0] M_V2;
	wire [31:0] M_AO;
	wire [31:0] M_MDU_out;
	wire [31:0] M_pc_add_8;
	wire [31:0] M_pc;
	wire MemWrite_M;
	wire [1:0] MemtoReg_M;
	wire [2:0] ByteOp_M;
	wire [1:0] M_WD_Sel_M;
	wire [4:0] M_WR_tmp;
	EX_MEM_Reg EX_MEM(
		.clk(clk),
		.reset(reset),
		.E_A2(E_A2),
		.E_WR(E_WR),
		.E_V2(alu_in_b_tmp),
		.E_AO(E_AO),
		.E_MDU_out(E_MDU_out),
		.E_pc_add_8(E_pc_add_8),
		.E_pc(E_pc),
		.RegWrite_E(RegWrite_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.ByteOp_E(ByteOp_E),
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E),
		.M_A2(M_A2),
		.M_WR(M_WR_tmp),
		.M_V2(M_V2),
		.M_AO(M_AO),
		.M_MDU_out(M_MDU_out),
		.M_pc_add_8(M_pc_add_8),
		.M_pc(M_pc),
		.RegWrite_M(RegWrite_M),
		.MemWrite_M(MemWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.ByteOp_M(ByteOp_M),
		.M_WD_Sel_M(M_WD_Sel_M),
		.Tnew_M(Tnew_M)
	);
	/************************Stage_M*************************/
	MUX3_32bits mux_M_WD (
		.in_a(M_AO),
		.in_b(M_pc_add_8),
		.in_c(M_MDU_out),
		.slt(M_WD_Sel_M),
		.out(M_WD)
	);
	wire [31:0] WD_tmp;
	MUX2_32bits FMux_V2_M (
		.in_a(M_V2),
		.in_b(W_WD),
		.slt(MF_V2_M_Sel),
		.out(WD_tmp)
	);
	wire [3:0] byteen;
	BE ByteEn(
		.ByteOp(ByteOp_M),
		.addr(M_AO),
		.byteen(byteen)
	);
	assign m_data_addr = (ByteOp_M == 3'b111) ? {M_AO[31:2],2'b0} : M_AO;
	assign m_data_wdata = (byteen == 4'b0001) ? {24'b0,WD_tmp[7:0]} :
									(byteen == 4'b0010) ? {16'b0,WD_tmp[7:0],8'b0} :
									(byteen == 4'b0100) ? {8'b0,WD_tmp[7:0],16'b0} :
									(byteen == 4'b1000) ? {WD_tmp[7:0],24'b0} :
									(byteen == 4'b0011) ? {16'b0,WD_tmp[15:0]} :
									(byteen == 4'b1100) ? {WD_tmp[15:0],16'b0} :
									WD_tmp;
	assign m_data_byteen = byteen; 
	assign m_inst_addr = M_pc;
	wire [31:0] M_DR;
	wire [4:0] M_WR_lwer;
	DE Data_Ext (
		.addr(M_AO),
		.Data_in(m_data_rdata),
		.M_V2(M_V2),
		.ByteOp(ByteOp_M),
		.Data_out(M_DR),
		.M_WR_lwer(M_WR_lwer)
	);
	assign M_WR = (ByteOp_M == 3'b111) ? M_WR_lwer : M_WR_tmp;
	/*DM dm (
		.addr(M_AO),
		.write_data(WD_tmp),
		.pc(M_pc),
		.clk(clk),
		.MemWrite(MemWrite_M),
		.reset(reset),
		.DR(M_DR)
	);*/
	wire [31:0] W_DR;
	wire [31:0] W_pc_add_8;
	wire [31:0] W_AO;
	wire [31:0] W_MDU_out;
	wire [1:0] MemtoReg_W;
	MEM_WB_Reg MEM_WB(
		.clk(clk),
		.reset(reset),
		.M_WR(M_WR),
		.M_DR(M_DR),
		.M_pc(M_pc),
		.M_pc_add_8(M_pc_add_8),
		.M_AO(M_AO),
		.M_MDU_out(M_MDU_out),
		.RegWrite_M(RegWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.Tnew_M(Tnew_M),
		.W_WR(W_WR),
		.W_DR(W_DR),
		.W_pc(W_pc),
		.W_pc_add_8(W_pc_add_8),
		.W_AO(W_AO),
		.W_MDU_out(W_MDU_out),
		.RegWrite_W(RegWrite_W),
		.MemtoReg_W(MemtoReg_W),
		.Tnew_W(Tnew_W)
	);
	/************************Stage_W*************************/
	MUX4_32bits mux_MemtoReg (
		.in_a(W_AO),
		.in_b(W_DR),
		.in_c(W_pc_add_8),
		.in_d(W_MDU_out),
		.slt(MemtoReg_W),
		.out(W_WD)
	);
	assign w_grf_we = RegWrite_W;
	assign w_grf_addr = W_WR;
	assign w_grf_wdata = W_WD;
	assign w_inst_addr = W_pc;
	
endmodule
