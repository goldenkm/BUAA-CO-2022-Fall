`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:33:08 11/21/2022 
// Design Name: 
// Module Name:    ExcCheck 
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
//ByteOp
`define Sw 3'b001
`define Sb 3'b010
`define Sh 3'b011
`define Lw 3'b100
`define Lb 3'b101
`define Lh 3'b110
//address
`define StartAddr_DM 32'h0000_0000
`define EndAddr_DM 32'h0000_2fff
`define StartAddr_Timer0 32'h0000_7f00
`define EndAddr_Timer0 32'h0000_7f0b
`define StartAddr_Timer1 32'h0000_7f10
`define EndAddr_Timer1 32'h0000_7f1b
module ExcCheck(
    input [31:0] addr,
    input AdEL_Instr,
	 input M_Ov,
    input [2:0] ByteOp,
    output AdEL,
    output AdES,
	 output Ov
    );
	 wire load = (ByteOp == `Lw) | (ByteOp == `Lb) | (ByteOp == `Lh);
	 wire store = (ByteOp == `Sw) | (ByteOp == `Sb) | (ByteOp == `Sh);
	 wire AdEL_Ov = (M_Ov && ByteOp != 0) ? 1 : 0;
	 wire AdEL_Align = (ByteOp == `Lw && addr[1:0] != 0) | (ByteOp == `Lh && addr[0] != 0) 
	 						| (ByteOp == `Sw && addr[1:0] != 0) | (ByteOp == `Sh && addr[0] != 0);
	 wire AdEL_OutOfRange = !((addr >= `StartAddr_DM && addr <= `EndAddr_DM) 
										| (addr >= `StartAddr_Timer0 && addr <= `EndAddr_Timer0) 
										| (addr >= `StartAddr_Timer1 && addr <= `EndAddr_Timer1)
										| (addr >= 32'h0000_7f20 && addr <= 32'h0000_7f23));
	 wire AdEL_Timer = ((ByteOp != `Lw && ByteOp != `Sw) && ((addr >= `StartAddr_Timer0 && addr < 32'h0000_7f20) || (addr>= 32'h0000_7f24)));
	 wire AdEL_SaveCounter = (addr >= 32'h0000_7f08 && addr <= 32'h0000_7f0b) 
									| (addr >= 32'h0000_7f18 && addr <= 32'h0000_7f1b);
	 assign AdEL = (load && (AdEL_Instr || AdEL_Align || AdEL_Timer || AdEL_Ov || AdEL_OutOfRange));
	 assign AdES = (store && (AdEL_Instr || AdEL_Align || AdEL_Timer || AdEL_Ov || AdEL_OutOfRange || AdEL_SaveCounter));
	 assign Ov = (M_Ov && ByteOp == 0);

endmodule
