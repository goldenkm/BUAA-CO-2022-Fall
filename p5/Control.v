`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:45 10/25/2022 
// Design Name: 
// Module Name:    Control 
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
////////Op////////
////cal_r////
`define RInstr 6'b000000
////cal_i////
`define Ori 6'b001101
`define Addi 6'b001000
`define Andi 6'b001100
`define Slti 6'b001010
////load////
`define Lw 6'b100011
`define Lb 6'b100000
`define Lh 6'b100001
////store////
`define Sw 6'b101011
`define Sb 6'b101000
`define Sh 6'b101001
////branch////
`define Beq 6'b000100
`define Bne 6'b000101
////Jal////
`define Jal 6'b000011
////Lui////
`define Lui 6'b001111
////////Funct////////
`define Jr 6'b001000
`define Add 6'b100000
`define Sub 6'b100010
`define And 6'b100100
`define Or 6'b100101
`define Sll 6'b000000
////////Non-exist instruction////////
`define Swc 6'b101010
`define Bpnal 6'b101100
`define Lhogez 6'b110011
module Control(
    input [5:0] op,
	 input [5:0] funct,
    output [1:0] jump,
    output branch,
	 output [2:0] branch_sel,
    output [1:0] MemtoReg,
    output MemWrite,
    output [3:0] ALUOp,
    output ALUSrc,
    output RegWrite,
    output [1:0] ExtOp,
    output [1:0] RegDst,
	 output [2:0] DMOp,
	 output [2:0] Tuse_rs,
	 output [2:0] Tuse_rt,
	 output [2:0] Tnew_D
    );
	wire cal_r = ((op == `RInstr && funct != `Jr && funct != `Sll) || op == `Swc) ? 1 : 0;
	wire cal_i = (op == `Ori) ? 1 : 0;
	wire shift = (op == `RInstr && op == `Sll) ? 1: 0;
	wire load = (op == `Lw || op == `Lb || op == `Lh || op == `Lhogez) ? 1 : 0;
	wire store = (op == `Sw || op == `Sb || op == `Sh) ? 1 : 0;
	wire branch_instr = (op == `Beq || op == `Bne || op == `Bpnal) ? 1 : 0;
	assign RegDst = (cal_r) ? 2'b01 : 
							(op == `Jal) ? 2'b10 : 
							(op == `Bpnal) ? 2'b11 :
							2'b00;
	assign ALUSrc = (cal_i || load || store || op == `Lui) ? 1 : 0;
	assign MemtoReg = (load) ? 2'b01 : 
							(op == `Jal|| op == `Bpnal) ? 2'b10 :
							2'b00;
	assign RegWrite = (cal_r || cal_i || load || op == `Lui || op == `Jal || op == `Bpnal) ? 1 : 0;
	assign MemWrite = (store) ? 1 : 0;
	assign branch = (branch_instr) ? 1: 0;
	assign ExtOp = (op == `Lw || op == `Sw) ? 2'b01 : 
						(op == `Lui) ? 2'b10 : 
						2'b00;
	assign jump = (op == `Jal) ? 2'b01 : 
						(op == `RInstr && funct == `Jr) ? 2'b10 :
						0;
	assign branch_sel = (op == `Bpnal) ? 3'b100 :				//条件跳转+条件链接
								(op == `Beq) ? 3'b001 : 
								(op == `Bne) ? 3'b010 :
								2'b00;
	assign ALUOp = (op == `RInstr && funct == `Add) ? 4'b0010 :  //add
						(op == `RInstr && funct == `Sub) ? 4'b0011 :  //sub
						(op == `Ori) ? 4'b0001 :		//or
						(load || store) ? 4'b0010 : 	//add
						(branch_instr) ? 4'b0011 :   //sub
						(op == `Lui) ? 4'b0010 :	//add
						(op == `RInstr && funct == `Sll) ? 4'b0100 :		//sll
						(op == `Swc) ? 4'b1111 :		//swc
						4'b0010;
	assign DMOp = (op == `Sw) ? 3'b001 :
						(op == `Sb) ? 3'b010 :
						(op == `Sh) ? 3'b011 :
						(op == `Lw) ? 3'b100 :
						(op == `Lb) ? 3'b101 :
						(op == `Lh) ? 3'b110 :
						(op == `Lhogez) ? 3'b111 :
						3'b000;
	assign Tuse_rs = (cal_r || cal_i || load || store || op == `Lui) ? 3'b001 :
							(branch_instr || (op == `RInstr && funct == `Jr)) ? 3'b000 :
							3'b011;
	assign Tuse_rt = (cal_r || shift) ? 3'b001 :
							(store) ? 3'b010 :
							(branch_instr) ? 3'b000 : 
							3'b011;
	assign Tnew_D = (cal_r || cal_i || op == `Lui || shift) ? 3'b010 :
							(load) ? 3'b011 :
							3'b0;
							
endmodule
