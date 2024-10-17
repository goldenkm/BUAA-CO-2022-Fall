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
////Jump////
`define Jal 6'b000011
`define J 6'b000010
////Lui////
`define Lui 6'b001111
////Int////
`define Int 6'b010000
////////Funct////////
`define Nop 6'b000000
`define Jr 6'b001000
`define Add 6'b100000
`define Sub 6'b100010
`define And 6'b100100
`define Or 6'b100101
////P6////
`define Slt 6'b101010
`define Sltu 6'b101011
`define Mult 6'b011000
`define Multu 6'b011001
`define Div 6'b011010
`define Divu 6'b011011
`define Mfhi 6'b010000
`define Mflo 6'b010010
`define Mthi 6'b010001
`define Mtlo 6'b010011
////P7////
`define Eret 6'b011000
`define Syscall 6'b001100
////////25:21////////
`define Mfc0 5'b00000
`define Mtc0 5'b00100
module Control(
    input [31:0] instr,
    output [1:0] jump,
    output branch,
	 output [1:0] branch_sel,
    output [2:0] MemtoReg,
    output MemWrite,
    output [3:0] ALUOp,
    output ALUSrc,
    output RegWrite,
    output [1:0] ExtOp,
    output [1:0] RegDst,
	 output [2:0] ByteOp,
	 output [3:0] MDUOp,
	 output [1:0] M_WD_Sel,
	 output start,
	 output [2:0] Tuse_rs,
	 output [2:0] Tuse_rt,
	 output [2:0] Tnew_D,
	 output CP0_en,
	 output RI,
	 output isEret,
	 output isBorJ,
	 output isSyscall
    );
	wire [5:0] op = instr[31:26];
	wire [5:0] funct = instr[5:0];
	wire [4:0] rs = instr[25:21];
	wire cal_r = (op == `RInstr && funct != `Jr) ? 1 : 0;
	wire cal_i = (op == `Ori || op == `Addi || op == `Andi || op == `Slti) ? 1 : 0;
	wire load = (op == `Lw || op == `Lb || op == `Lh) ? 1 : 0;
	wire store = (op == `Sw || op == `Sb || op == `Sh) ? 1 : 0;
	wire branch_instr = (op == `Beq || op == `Bne) ? 1 : 0;
	wire jr = (op == `RInstr && funct == `Jr) ? 1 : 0;
	wire mtc0 = (op == `Int && rs == `Mtc0);
	wire mfc0 = (op == `Int && rs == `Mfc0);
	wire eret = (op == `Int && funct == `Eret);
	wire syscall = (op == `RInstr && funct == `Syscall);
	assign RegDst = (cal_r) ? 2'b01 : 
							(op == `Jal) ? 2'b10 : 
							2'b00;
	assign ALUSrc = (cal_i || load || store || op == `Lui) ? 1 : 0;
	assign MemtoReg = (load) ? 3'b001 : 
							(op == `Jal) ? 3'b010 :
							((op == `RInstr && funct == `Mflo) || (op == `RInstr && funct == `Mfhi)) ? 3'b011 :
							(mfc0) ? 3'b100 :
							3'b000;
	assign RegWrite = (cal_r || cal_i || load || op == `Lui || op == `Jal || mfc0) ? 1 : 0;
	assign MemWrite = (store) ? 1 : 0;
	assign branch = (branch_instr) ? 1: 0;
	assign ExtOp = (load || store || (op == `Addi)) ? 2'b01 : 
						(op == `Lui) ? 2'b10 : 
						2'b00;
	assign jump = (op == `Jal || op == `J) ? 2'b01 : 
						((op == `RInstr && funct == `Jr)) ? 2'b10 :
						0;
	assign branch_sel = (op == `Beq) ? 2'b01 : 
								(op == `Bne) ? 2'b10 :
								2'b00;
	assign ALUOp = (op == `RInstr && funct == `Add) ? 4'b0010 :  //add
						(op == `RInstr && funct == `Sub) ? 4'b0011 :  //sub
						(op == `RInstr && funct == `And) ? 4'b0000 :	//and
						(op == `RInstr && funct == `Or) ? 4'b0001 :	//or
						(op == `Andi) ? 4'b0000 :		//and
						(op == `Ori) ? 4'b0001 :		//or
						(op == `Addi) ? 4'b0010 :		//add
						(op == `RInstr && funct == `Slt) ? 4'b0100 :			//slt
						(op == `RInstr && funct == `Sltu) ? 4'b0101 :			//slt
						(op == `Slti) ? 4'b0100 :			//slt
						(store || load) ? 4'b0010 : 	//add
						(op == `Lui) ? 4'b0010 :	//add
						4'b0000;
	assign ByteOp = (op == `Sw) ? 3'b001 :
							(op == `Sb) ? 3'b010 :
							(op == `Sh) ? 3'b011 :
							(op == `Lw) ? 3'b100 :
							(op == `Lb) ? 3'b101 :
							(op == `Lh) ? 3'b110 :
							3'b000;
	assign MDUOp = (cal_r && funct == `Mult) ? 4'b0001 :
						(cal_r && funct == `Multu) ? 4'b0010 :
						(cal_r && funct == `Div) ? 4'b0011 :
						(cal_r && funct == `Divu) ? 4'b0100 :
						(cal_r && funct == `Mfhi) ? 4'b0101 :
						(cal_r && funct == `Mflo) ? 4'b0110 :
						(cal_r && funct == `Mthi) ? 4'b0111 :
						(cal_r && funct == `Mtlo) ? 4'b1000 :
						4'b0000;
	assign M_WD_Sel = ((cal_r && funct == `Mflo) || (cal_r && funct == `Mfhi)) ? 2'b10 :
							(op == `Jal) ? 2'b01 :
							2'b00;
	assign start = (cal_r && funct == `Mult) | (cal_r && funct == `Multu) | (cal_r && funct == `Div) | (cal_r && funct == `Divu);
	assign Tuse_rs = (cal_r || cal_i || load || store || op == `Lui) ? 3'b001 :
							(branch_instr || (op == `RInstr && funct == `Jr)) ? 3'b000 :
							3'b011;
	assign Tuse_rt = (cal_r) ? 3'b001 :
							(store || mtc0) ? 3'b010 :
							(branch_instr) ? 3'b000 : 
							3'b011;
	assign Tnew_D = (cal_r || cal_i || op == `Lui) ? 3'b010 :
							(load || mfc0) ? 3'b011 :
							3'b0;
	wire valid_r = (op == `RInstr && (funct == `Nop || funct == `Add || funct == `Sub || funct == `And || funct == `Or || funct == `Slt || funct == `Sltu 
								|| funct == `Mult || funct == `Multu || funct == `Div || funct == `Divu || funct == `Mflo || funct == `Mfhi || funct == `Mtlo || funct == `Mthi));
	assign RI = !(valid_r || cal_i || load || store || branch_instr || jr || op == `Jal || op == `J || op == `Lui || eret || mtc0 || mfc0 || syscall);
	assign isEret = (eret) ? 1 : 0;
	assign isSyscall = (syscall);
	assign isBorJ = (branch || op == `Jal || (op == `RInstr && funct == `Jr) || op == `J) ? 1 : 0;
	assign CP0_en = (mtc0) ? 1 : 0;
							
endmodule
