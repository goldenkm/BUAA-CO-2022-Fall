`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:13:20 10/26/2022 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] addr,
    input [31:0] write_data,
	 input [31:0] pc,
    input clk,
    input MemWrite,
    input reset,
    output [31:0] DR
    );
	 reg [31:0] ram [1023:0];
	integer i;
	initial begin 
		for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
		end
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
			end
		end
		else begin
			if (MemWrite == 1) begin
				ram[addr[11:2]] <= write_data;
				$display("%d@%h: *%h <= %h", $time, pc, addr, write_data);
			end		
		end
	end
	assign DR = ram[addr[11:2]];

endmodule
