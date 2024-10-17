`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:29 10/26/2022 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] F_pc,
	 output [31:0] F_instr
    );
	reg [31:0] rom [4095:0];
	initial begin
		/*if(F_pc == 32'hffff6ffff) begin
		$display("%h",F_instr);
		end*/
		$readmemh("code.txt", rom);
	end
	wire [31:0] addr_im1 = F_pc - 32'h00003000;
	assign F_instr = rom[addr_im1[13:2]];
	
endmodule
