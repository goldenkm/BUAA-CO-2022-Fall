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
`define Exc_None 5'd0
module DataPath(
    input clk,
    input reset,
	 input [5:0] HWInt,
	 ////////IM and DM////////
	 input [31:0] i_inst_rdata,
    input [31:0] CPUIn,
	 ////////Control Signal////////
	 input [1:0] Jump,
	 input Branch,
	 input [1:0] Branch_sel,
	 input [2:0] MemtoReg,
	 input MemWrite,
	 input [3:0] ALUOp,
	 input ALUSrc,
	 input RegWrite,
	 input [1:0] ExtOp,
	 input [1:0] RegDst,
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
	 ////////Int and Exc////////
	 input CP0_en,
	 input RI,
	 input isEret,
	 input isBorJ,
	 input isSyscall,
    output [31:0] Instr,
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
	 ////////IM and DM////////
	 output [31:0] i_inst_addr,
    output [31:0] VAdd,
    output [31:0] CPUOut,
    output [3:0] ByteEn,
    output [31:0] m_inst_addr,
	 ////////GRF////////
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
	 ////////Exc and Int////////
	 output [4:0] ExcCode,
	 output [31:0] macro_pc,
	 output D_isEret,
	 output E_CP0_en,
	 output [4:0] E_rd,
	 output M_CP0_en,
	 output [4:0] M_rd
    );
	/************************Stage_F*************************/
	wire [31:0] in_pc;
	wire [31:0] F_pc;
	wire en = ~Stall;
	wire F_AdEL;
	wire req;
	wire [31:0] M_EBase;
	PC pc (
		.in_pc(in_pc),
		.clk(clk),
		.reset(reset),
		.en(en),
		.req(req),
		.EBase(M_EBase),
		.out_pc(F_pc),
		.AdEL(F_AdEL)
	);
	assign i_inst_addr = F_pc;
	wire [31:0] F_instr = i_inst_rdata;
	wire F_BDIn = D_isBorJ;
	/*IM im (
		.F_pc(F_pc),
		.F_instr(F_instr)
	);*/
	wire [31:0] D_instr;
	wire [31:0] D_pc, M_EPCOut;
	wire D_AdEL, D_BDIn, M_isEret;
	IF_ID_Reg IF_ID(
		.clk(clk),
		.reset(reset),
		.en(en),					
		.req(req),
		.M_isEret(M_isEret),
		.EPC(M_EPCOut),
		.EBase(M_EBase),
		.F_instr(F_instr),
		.F_pc(F_pc),
		.F_AdEL(F_AdEL),
		.F_BDIn(F_BDIn),
		.D_instr(D_instr),
		.D_pc(D_pc),
		.D_AdEL(D_AdEL),
		.D_BDIn(D_BDIn)
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
	assign Instr = D_instr;
	assign D_A1 = rs;
	assign D_A2 = rt;
	wire [4:0] reg31 = 5'b11111;
	wire [4:0] D_WR;
	MUX3_5bits mux_RegDst(
		.in_a(rt),
		.in_b(rd),
		.in_c(reg31),
		.slt(RegDst),
		.out(D_WR)
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
	wire zero;
	CMP cmp(
		.RD1(D_V1),
		.RD2(D_V2),
		.zero(zero)
	);
	wire [31:0] D_imm32;
	Ext ext (
		.imm16(imm16),
		.ExtOp(ExtOp),
		.imm32(D_imm32)
	);
	assign branch1 = Branch & zero;
	assign branch2 = Branch & (~zero);
	assign branch = (Branch_sel == 2'b01) ? branch1 :
							(Branch_sel == 2'b10) ? branch2 :
							0;
	wire [31:0] pc_next;
	nPC next_pc (
		.F_pc(F_pc),
		.D_pc(D_pc),
		.M_EPCOut(M_EPCOut),
		.address26(addr26),
		.imm16(imm16),
		.reg31_data(D_V1),
		.branch(branch),
		.jump(Jump),
		.M_isEret(M_isEret),
		.pc_next(pc_next)
	);
	assign in_pc = pc_next;
	wire [31:0] D_pc_add_8 = D_pc + 32'd8;
	wire clr = Stall;
	wire [4:0] D_rd = rd;
	wire [31:0] E_V1;
	wire [31:0] E_V2;
	wire [31:0] E_pc;
	wire [31:0] E_imm32;
	wire ALUSrc_D = ALUSrc;
	wire [3:0] ALUOp_D = ALUOp;
	wire MemWrite_D = MemWrite;
	wire [2:0] MemtoReg_D = MemtoReg;
	wire [1:0] M_WD_Sel_D = M_WD_Sel;
	wire D_RI = RI;
	assign D_isEret = isEret;
	wire D_isBorJ = isBorJ;
	wire D_isSyscall = isSyscall;
	wire D_CP0_en = CP0_en;
	wire ALUSrc_E;
	wire [3:0] ALUOp_E;
	wire MemWrite_E;
	wire [2:0] MemtoReg_E;
	wire [2:0] ByteOp_E;
	wire [3:0] MDUOp_E;
	wire Start_E;
	wire [1:0] M_WD_Sel_E;
	wire E_AdEL, E_RI, E_isBorJ, E_BDIn, E_isSyscall;
	ID_EX_Reg ID_EX(
		.clk(clk),
		.reset(reset),
		.clr(clr),
		.req(req),
		.M_isEret(M_isEret),
		.EPC(M_EPCOut),
		.EBase(M_EBase),
		////////D Stage////////
		.D_A1(D_A1),
		.D_A2(D_A2),
		.D_rd(D_rd),
		.D_WR(D_WR),
		.D_V1(D_V1),
		.D_V2(D_V2),
		.D_pc(D_pc),
		.D_pc_add_8(D_pc_add_8),
		.D_imm32(D_imm32),
		//Control Signal
		.RegWrite_D(RegWrite_D),
		.ALUSrc_D(ALUSrc_D),
		.ALUOp_D(ALUOp_D),
		.MemWrite_D(MemWrite_D),
		.MemtoReg_D(MemtoReg_D),
		.ByteOp_D(ByteOp),
		.MDUOp_D(MDUOp),
		.Start_D(Start),
		//Forward and Stall
		.M_WD_Sel_D(M_WD_Sel_D),
		.Tnew_D(Tnew_D),
		//Int and Exc
		.D_AdEL(D_AdEL),
		.D_RI(D_RI),
		.D_isEret(D_isEret),
		.D_isBorJ(D_isBorJ),
		.D_BDIn(D_BDIn),
		.D_isSyscall(D_isSyscall),
		.D_CP0_en(D_CP0_en),
		////////E Stage////////
		.E_A1(E_A1),
		.E_A2(E_A2),
		.E_rd(E_rd),
		.E_WR(E_WR),
		.E_V1(E_V1),
		.E_V2(E_V2),
		.E_pc(E_pc),
		.E_pc_add_8(E_pc_add_8),
		.E_imm32(E_imm32),
		//Control Signal
		.RegWrite_E(RegWrite_E),
		.ALUSrc_E(ALUSrc_E),
		.ALUOp_E(ALUOp_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.ByteOp_E(ByteOp_E),
		.MDUOp_E(MDUOp_E),
		.Start_E(Start_E),
		//Forward and Stall
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E),
		//Interupt and Exception
		.E_AdEL(E_AdEL),
		.E_RI(E_RI),
		.E_isEret(E_isEret),
		.E_isBorJ(E_isBorJ),
		.E_BDIn(E_BDIn),
		.E_isSyscall(E_isSyscall),
		.E_CP0_en(E_CP0_en)
	);
	/************************Stage_E*************************/
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
	wire E_Ov;
	wire AdEL_Ov;
	ALU alu (
		.in_a(alu_in_a),
		.in_b(alu_in_b),
		.ALUOp(ALUOp_E),
		.ByteOp(ByteOp_E),
		.result(E_AO),
		.Ov(E_Ov)
	);
	wire [31:0] data_hi;
	wire [31:0] data_lo;
	MDU mdu (
		.clk(clk),
		.reset(reset),
		.req(req),
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
	wire [2:0] MemtoReg_M;
	wire [2:0] ByteOp_M;
	wire [1:0] M_WD_Sel_M;
	wire M_AdEL, M_Ov, M_RI, M_BDIn, M_isSyscall;
	EX_MEM_Reg EX_MEM(
		.clk(clk),
		.reset(reset),
		.req(req),
		.EPC(M_EPCOut),
		.EBase(M_EBase),
		////////E Stage////////
		.E_A2(E_A2),
		.E_rd(E_rd),
		.E_WR(E_WR),
		.E_V2(alu_in_b_tmp),
		.E_AO(E_AO),
		.E_MDU_out(E_MDU_out),
		.E_pc_add_8(E_pc_add_8),
		.E_pc(E_pc),
		//Control Signal
		.RegWrite_E(RegWrite_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.ByteOp_E(ByteOp_E),
		// Forward and Stall
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E),
		//Int and Exc
		.E_AdEL(E_AdEL),
		.E_Ov(E_Ov),
		.E_RI(E_RI),
		.E_isEret(E_isEret),
		.E_BDIn(E_BDIn),
		.E_CP0_en(E_CP0_en),
		.E_isSyscall(E_isSyscall),
		////////M Stage////////
		.M_A2(M_A2),
		.M_rd(M_rd),
		.M_WR(M_WR),
		.M_V2(M_V2),
		.M_AO(M_AO),
		.M_MDU_out(M_MDU_out),
		.M_pc_add_8(M_pc_add_8),
		.M_pc(M_pc),
		//Control Signal
		.RegWrite_M(RegWrite_M),
		.MemWrite_M(MemWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.ByteOp_M(ByteOp_M),
		// Forward and Stall
		.M_WD_Sel_M(M_WD_Sel_M),
		.Tnew_M(Tnew_M),
		//Int and Exc
		.M_AdEL(M_AdEL),
		.M_Ov(M_Ov),
		.M_RI(M_RI),
		.M_isEret(M_isEret),
		.M_BDIn(M_BDIn),
		.M_CP0_en(M_CP0_en),
		.M_isSyscall(M_isSyscall)
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
	BE Byte_En(
		.ByteOp(ByteOp_M),
		.addr(M_AO),
		.byteen(byteen)
	);
	assign VAdd = M_AO;
	assign CPUOut = (byteen == 4'b0001) ? {24'b0,WD_tmp[7:0]} :
									(byteen == 4'b0010) ? {16'b0,WD_tmp[7:0],8'b0} :
									(byteen == 4'b0100) ? {8'b0,WD_tmp[7:0],16'b0} :
									(byteen == 4'b1000) ? {WD_tmp[7:0],24'b0} :
									(byteen == 4'b0011) ? {16'b0,WD_tmp[15:0]} :
									(byteen == 4'b1100) ? {WD_tmp[15:0],16'b0} :
									WD_tmp;
	assign ByteEn = (req) ? 0 : byteen; 
	assign m_inst_addr = M_pc;
	wire [31:0] M_DR;
	DE Data_Ext (
		.addr(M_AO),
		.Data_in(CPUIn),
		.ByteOp(ByteOp_M),
		.Data_out(M_DR)
	);
	wire Ov;
	ExcCheck Exc_Check (
		.addr(M_AO),
		.AdEL_Instr(M_AdEL),
		.M_Ov(M_Ov),
		.ByteOp(ByteOp_M),
		.AdEL(AdEL),
		.AdES(AdES),
		.Ov(Ov)
	);
	assign ExcCode = (M_AdEL) ? 5'd4 :		//AdEL取指异常
							(M_RI) ? 5'd10 :
							(Ov) ? 5'd12 :
							(AdEL) ? 5'd4 :		//取数异常
							(AdES) ? 5'd5 :
							(M_isSyscall) ? 5'd8 :
							`Exc_None;
	wire [31:0] M_CP0Out;
	assign macro_pc = M_pc;
	CP0 cp0 (
		.clk(clk),
		.reset(reset),
		.en(M_CP0_en),
		.CP0Add(M_rd),
		.CP0In(WD_tmp),					//attention
		.CP0Out(M_CP0Out),
		.VPC(M_pc),
		.BDIn(M_BDIn),
		.ExcCodeIn(ExcCode),
		.HWInt(HWInt),
		.EXLClr(M_isEret),
		.EPCOut(M_EPCOut),
		.EBaseOut(M_EBase),
		.Req(req)
	);
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
	wire [2:0] MemtoReg_W;
	wire [31:0] W_CP0Out;
	MEM_WB_Reg MEM_WB(
		.clk(clk),
		.reset(reset),
		.req(req),
		.EBase(M_EBase),
		.M_WR(M_WR),
		.M_DR(M_DR),
		.M_pc(M_pc),
		.M_pc_add_8(M_pc_add_8),
		.M_AO(M_AO),
		.M_MDU_out(M_MDU_out),
		.RegWrite_M(RegWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.Tnew_M(Tnew_M),
		.M_CP0Out(M_CP0Out),
		.W_WR(W_WR),
		.W_DR(W_DR),
		.W_pc(W_pc),
		.W_pc_add_8(W_pc_add_8),
		.W_AO(W_AO),
		.W_MDU_out(W_MDU_out),
		.RegWrite_W(RegWrite_W),
		.MemtoReg_W(MemtoReg_W),
		.Tnew_W(Tnew_W),
		.W_CP0Out(W_CP0Out)
	);
	/************************Stage_W*************************/
	MUX5_32bits mux_MemtoReg (
		.in_a(W_AO),
		.in_b(W_DR),
		.in_c(W_pc_add_8),
		.in_d(W_MDU_out),
		.in_e(W_CP0Out),
		.slt(MemtoReg_W),
		.out(W_WD)
	);
	assign w_grf_we = RegWrite_W;
	assign w_grf_addr = W_WR;
	assign w_grf_wdata = W_WD;
	assign w_inst_addr = W_pc;
	
endmodule
