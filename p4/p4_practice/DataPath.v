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
	 input [1:0] Jump,
	 input [1:0] Branch_sel,
	 input [1:0] MemtoReg,
	 input MemWrite,
	 input [3:0] ALUOp,
	 input ALUSrc,
	 input [1:0] RegWrite,
	 input [1:0] ExtOp,
	 input [1:0] RegDst,
	 input [2:0] DMOp, 
    output [5:0] op,
    output [5:0] funct
    );
	wire [31:0] in_pc;
	wire [31:0] out_pc;
	PC pc (
		.in_pc(in_pc),
		.clk(clk),
		.reset(reset),
		.out_pc(out_pc)
	);
	wire [31:0] addr_im;
	wire [4:0] rs;
	wire [4:0] rt;
   wire [4:0] rd;
   wire [4:0] shamt;
   wire [15:0] imm16;
	wire [25:0] address26;
	wire [31:0] instr;
	IM im (
		.addr_im(out_pc),
		.op(op),
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.shamt(shamt),
		.imm16(imm16),
		.funct(funct),
		.address26(address26),
		.instr(instr)
	);
	wire [4:0] reg31 = 5'b11111;
	wire [4:0] write_reg;
	MUX3_5bits mux_RegDst(
		.in_a(rt),
		.in_b(rd),
		.in_c(reg31),
		.slt(RegDst),
		.out(write_reg)
	);
	wire [31:0] read_data1;
	wire [31:0] read_data2;
	wire [31:0] write_data;
	wire reg_write = (RegWrite == 2'b01 || (RegWrite == 2'b10 && bnezalc == 1)) ? 1 : 0;
	RF rf (
		.clk(clk),
		.reset(reset),
		.instr(instr),
		.rs(rs),
		.rt(rt),
		.write_reg(write_reg),
		.write_data(write_data),
		.RegWrite(reg_write),
		.read_data1(read_data1),
		.read_data2(read_data2)
	);
	wire [31:0] imm32;
	Ext ext (
		.imm16(imm16),
		.ExtOp(ExtOp),
		.imm32(imm32)
	);
	wire [31:0] alu_in_b;
	MUX2_32bits mux_ALUSrc (
		.in_a(read_data2),
		.in_b(imm32),
		.slt(ALUSrc),
		.out(alu_in_b)
	);
	wire zero,bnezalc;
	wire [31:0] result;
	ALU alu (
		.in_a(read_data1),
		.in_b(alu_in_b),
		.shamt(shamt),
		.imm16(imm16),
		.ALUOp(ALUOp),
		.result(result),
		.zero(zero),
		.bnezalc(bnezalc)
	);
	wire [31:0] read_data;
	DM dm (
		.DMOp(DMOp),
		.addr(result),
		.write_data(read_data2),
		.instr(instr),
		.clk(clk),
		.MemWrite(MemWrite),
		.reset(reset),
		.read_data(read_data)
	);
	wire [31:0] pc_add_4;
	MUX3_32bits mux_MemtoReg (
		.in_a(result),
		.in_b(read_data),
		.in_c(pc_add_4),
		.slt(MemtoReg),
		.out(write_data)
	);
	assign branch1 = ((Branch_sel == 2'b10 && zero == 0) 
								|| (Branch_sel == 2'b01 && zero == 1) 
								|| (Branch_sel == 2'b11 && bnezalc == 1)) ? 1 : 0;
	wire [31:0] pc_next;
	nPC next_pc (
		.pc_now(out_pc),
		.address26(address26),
		.imm32(imm32),
		.reg31_data(read_data1),
		.branch(branch1),
		.jump(Jump),
		.pc_next(pc_next),
		.pc_add_4(pc_add_4)
	);
	assign in_pc = pc_next;
endmodule
