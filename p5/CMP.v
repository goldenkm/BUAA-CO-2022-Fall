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
	 output bpnal
    );
	 assign zero = (RD1 == RD2) ? 1 : 0;
	 assign bpnal = (RD1[31] == RD1[0]) & (RD1[30] == RD1[1]) & (RD1[29] == RD1[2]) & (RD1[28] == RD1[3]) &
								(RD1[27] == RD1[4]) & (RD1[26] == RD1[5]) & (RD1[25] == RD1[6]) & (RD1[24] == RD1[7]) &
								(RD1[23] == RD1[8]) & (RD1[22] == RD1[9]) & (RD1[21] == RD1[10]) & (RD1[20] == RD1[11]) &
								(RD1[19] == RD1[12]) & (RD1[18] == RD1[13]) & (RD1[17] == RD1[14]) & (RD1[16] == RD1[15]);

endmodule
