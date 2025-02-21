`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:24:35 11/13/2022 
// Design Name: 
// Module Name:    cal_1 
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
module Bit_Adder(
    input [31:0] data,
    output [5:0] count
    );
	 assign count = data[0] + data[1] + data[2] + data[3] + data[4] + data[5] + data[6] + data[7] +
							data[8] + data[9] + data[10] + data[11] + data[12] + data[13] + data[14] + data[15] +
							data[16] + data[17] + data[18] + data[19] + data[20] + data[21] + data[22] + data[23] +
							data[24] + data[25] + data[26] + data[27] + data[28] + data[29] + data[30] + data[31];

endmodule
