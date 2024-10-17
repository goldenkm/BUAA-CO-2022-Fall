`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:31:25 11/05/2022 
// Design Name: 
// Module Name:    PC_Select 
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
`define RInstr 6'b000000
`define Beq 6'b000100
`define Jal 6'b000011
`define Jr 6'b001000
module PC_Select(
    input [31:0] F_pc_add_4,
    input [31:0] npc,
	 input npc_sel,
    input [31:0] Instr,
    output [31:0] pc_next
    );
	 /*wire [5:0] op = D_Instr[31:26];
	 wire [5:0] funct = D_Instr[5:0];
	 wire npc_sel = ( op == `Jal || op == `Beq || (op == `RInstr && funct == `Jr)) ? 1 : 0;*/
	 assign pc_next = (npc_sel == 1) ? npc : F_pc_add_4;
endmodule
