`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:55 10/26/2022 
// Design Name: 
// Module Name:    RF 
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
module RF(
	 input clk,
	 input reset,
	 input [31:0] pc,
    input [4:0] rs,
    input [4:0] rt,
    input [4:0] write_reg,
    input [31:0] write_data,
    input RegWrite,
    output [31:0] read_data1,
    output [31:0] read_data2
    );
	 reg [31:0] rf [31:0];
	 integer i;
	 initial begin
		for(i = 0;i < 32 ;i = i+1) begin
				rf[i] <= 32'b0;
			end
	 end
	 always @(posedge clk) begin
		if(reset == 1) begin 
			for(i = 0;i < 32 ;i = i+1) begin
				rf[i] <= 32'b0;
			end
		end
		else begin
			if(RegWrite == 1) begin
				if(write_reg != 0) begin
					rf[write_reg] <= write_data;
					$display("%d@%h: $%d <= %h", $time, pc, write_reg, write_data);
				end
			end
		end
	 end
	 assign read_data1 = (rs == 5'b0) ? 32'b0 : rf[rs];
	 assign read_data2 = (rt == 5'b0) ? 32'b0 : rf[rt];
endmodule
