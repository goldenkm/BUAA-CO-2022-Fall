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
    input [31:0] addr_im,
    output [5:0] op,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [4:0] shamt,
    output [15:0] imm16,
    output [5:0] funct,
	 output [25:0] address26,
	 output [31:0] instr
    );
	reg [31:0] rom [1023:0];
	initial begin
		$readmemh("code.txt", rom);
	end
	wire [31:0] addr1;
	wire [31:0] addr_im1 = addr_im - 32'h00003000;
	assign addr1 = rom[addr_im1[11:2]];
	assign op = addr1[31:26];
	assign rs = addr1[25:21];
	assign rt = addr1[20:16];
	assign rd = addr1[15:11];
	assign shamt = addr1[10:6];
	assign funct = addr1[5:0];
	assign imm16 = addr1[15:0];
	assign address26 = addr1[25:0];
	assign instr = addr_im;
endmodule
