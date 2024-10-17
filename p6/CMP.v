`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:15 11/03/2022 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input [31:0] RD1,
    input [31:0] RD2,
    output zero,
	 output bezal
    );
	 assign zero = (RD1 == RD2) ? 1 : 0;
	 assign bezal = ($signed(RD2) >= 0) ? 1 : 0;

endmodule
