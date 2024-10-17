`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:51:12 11/29/2022 
// Design Name: 
// Module Name:    Cal_Continue 
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
module Cal_Continue(
    input [31:0] data,
    output [5:0] result
    );
	 integer i, max, count;
	 always @(*) begin
		max = 0;
		for(i=0; i<32; i=i+1) begin
			if(data[i] == 1) begin
				count = count + 1;
			end
			else begin
				count = 0;
			end
			if(count > max) begin
				max = count;
			end
		end
	 end
	 assign result = max;


endmodule
