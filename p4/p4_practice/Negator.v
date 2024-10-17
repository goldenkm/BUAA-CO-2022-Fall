`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:22 11/20/2022 
// Design Name: 
// Module Name:    Negator 
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
module Negator(
    input [31:0] data,
    output [31:0] result
    );
	 wire [31:0] tmp = ~data[30:0];
	 assign result = (data[31] == 1) ? {data[31], tmp} : data;


endmodule
