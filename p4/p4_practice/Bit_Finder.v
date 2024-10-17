`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:33:02 11/20/2022 
// Design Name: 
// Module Name:    Bit_Finder 
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
`define lowest_1 2'b00
`define lowest_0 2'b01
`define highest_1 2'b10
`define highest_0 2'b11
module Bit_Finder(
    input [31:0] data,
    input [1:0] type,
    output [5:0] result
    );
	 integer a,b,c,d;
	 always @(*) begin			//找后缀0的个数(lowest_1)
		for(a=0; data[a]==0; a=a+1) begin		
		end
	 end
	 always @(*) begin			//找后缀1的个数(lowest_0)
		for(b=0; data[b]==1; b=b+1) begin		
		end
	 end
	 always @(*) begin			//找前缀0的个数（highest_1)
		for(c=31; data[c]==0; c=c-1) begin		
		end
	 end
	 always @(*) begin			//找前缀1的个数(highest_0)
		for(d=31; data[d]==1; d=d-1) begin		
		end
	 end
	assign result = (type == 2'b00) ? a :
							(type == 2'b01) ? b :
							(type == 2'b10) ? c :
							d;

endmodule
