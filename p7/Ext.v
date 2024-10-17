`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:51 10/26/2022 
// Design Name: 
// Module Name:    Ext 
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
module Ext(
    input [15:0] imm16,
    input [1:0] ExtOp,
    output [31:0] imm32
    );
	 wire [31:0] zero_front;
	 wire [31:0] sign_ext;
	 wire [31:0] zero_behind;
	 assign zero_front = {16'b0,imm16};
	 assign sign_ext = {{16{imm16[15]}},imm16};
	 assign zero_behind = {imm16, 16'b0};
	assign imm32 = (ExtOp == 2'b01) ? sign_ext :
						(ExtOp == 2'b10) ? zero_behind : 
						zero_front;

endmodule
