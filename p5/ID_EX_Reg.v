`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:23 11/03/2022 
// Design Name: 
// Module Name:    ID_EX_Reg 
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
module ID_EX_Reg(
    input clk,
    input reset,
    input clr,														//stall
    input [4:0] D_WR,
	 input [4:0] D_A1,
	 input [4:0] D_A2,
    input [31:0] D_V1,
    input [31:0] D_V2,
    input [31:0] D_pc,
    input [31:0] D_pc_add_8,
	 input [4:0] D_shamt,
    input [31:0] D_imm32,
	 input RegWrite_D,
	 input ALUSrc_D,
	 input [3:0] ALUOp_D,
	 input MemWrite_D,
	 input [2:0] DMOp_D,
	 input [1:0] RegDst_D,
	 input [2:0] Tnew_D,
  	 input [1:0] MemtoReg_D,
	 input [1:0] M_WD_Sel_D,
	 input D_bpnal,
	 output [4:0] E_A1,
	 output [4:0] E_A2,
    output [4:0] E_WR,
    output [31:0] E_V1,
    output [31:0] E_V2,
    output [31:0] E_pc,
    output [31:0] E_pc_add_8,
	 output [4:0] E_shamt,
    output [31:0] E_imm32,
	 output RegWrite_E,
	 output ALUSrc_E,
	 output [3:0] ALUOp_E,
	 output MemWrite_E,
	 output [1:0] MemtoReg_E,
	 output [2:0] DMOp_E,
	 output [1:0] RegDst_E,
	 output [2:0] Tnew_E,
	 output [1:0] M_WD_Sel_E,
	 output E_bpnal
    );
	 reg [31:0] pc;
	 reg [31:0] pc_add_8;
	 reg [4:0] a1;
	 reg [4:0] a2;
	 reg [4:0] wr;
	 reg [31:0] v1;
	 reg [31:0] v2;
	 reg [4:0] shamt;
	 reg [31:0] imm32;
	 reg RegWrite;
	 reg ALUSrc;
	 reg [3:0] ALUOp;
	 reg MemWrite;
	 reg [2:0] DMOp;
	 reg [1:0] RegDst;
	 reg [1:0] MemtoReg;
	 reg [2:0] Tnew;
	 reg [1:0] M_WD_Sel;
	 reg bpnal;
	 always @(posedge clk) begin
		if (reset == 1) begin
			pc <= 32'h00003000;
			pc_add_8 <= 32'h00003008;
			a1 <= 0;
			a2 <= 0;
			wr <= 0;
			v1 <= 0;
			v2 <= 0;
			shamt <= 0;
			imm32 <= 0;
			RegWrite <= 0;
			ALUSrc <= 0;
			ALUOp <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			DMOp <= 0;
			RegDst <= 0;
			Tnew <= 0;
			M_WD_Sel <= 0;
			bpnal <= 0;
		end
		else begin 
			if (clr == 1) begin
				pc <= 32'h00003000;
				pc_add_8 <= 32'h00003008;
				a1 <= 0;
				a2 <= 0;
				wr <= 0;
				v1 <= 0;
				v2 <= 0;
				shamt <= 0;
				imm32 <= 0;
				RegWrite <= 0;
				ALUSrc <= 0;
				ALUOp <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				DMOp <= 0;
				Tnew <= 0;
				M_WD_Sel <= 0;
				bpnal <= 0;
			end
			else begin
				pc <= D_pc;
				pc_add_8 <= D_pc_add_8;
				a1 <= D_A1;
				a2 <= D_A2;
				wr <= D_WR;
				v1 <= D_V1;
				v2 <= D_V2;
				shamt <= D_shamt;
				imm32 <= D_imm32;
				RegWrite <= RegWrite_D;
				ALUSrc <= ALUSrc_D;
				ALUOp <= ALUOp_D;
				MemWrite <= MemWrite_D;
				MemtoReg <= MemtoReg_D;
				DMOp <= DMOp_D;
				RegDst <= RegDst_D;
				Tnew <= Tnew_D;
				M_WD_Sel <= M_WD_Sel_D;
				bpnal <= D_bpnal;
			end
		end
	 end
	 assign E_pc = pc;
	 assign E_pc_add_8 = pc_add_8;
	 assign E_A1 = a1;
	 assign E_A2 = a2;
	 assign E_WR = wr;
	 assign E_V1 = v1;
	 assign E_V2 = v2;
	 assign E_shamt = shamt;
	 assign E_imm32 = imm32;
	 assign RegWrite_E = RegWrite;
	 assign ALUSrc_E = ALUSrc;
	 assign ALUOp_E = ALUOp;
	 assign MemWrite_E = MemWrite;
	 assign MemtoReg_E = MemtoReg;
	 assign DMOp_E = DMOp;
	 assign RegDst_E = RegDst;
	 assign Tnew_E = (Tnew >= 1) ? (Tnew - 1): 0;
	 assign M_WD_Sel_E = M_WD_Sel;
	 assign E_bpnal = bpnal;

endmodule
