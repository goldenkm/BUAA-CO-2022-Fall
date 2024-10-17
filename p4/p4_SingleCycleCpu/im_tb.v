`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:57:53 10/26/2022
// Design Name:   IM
// Module Name:   /home/co-eda/p4_SingleCycleCpu/im_tb.v
// Project Name:  p4_SingleCycleCpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module im_tb;

	// Inputs
	reg [31:0] addr_im;

	// Outputs
	wire [5:0] op;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] shamt;
	wire [15:0] imm16;
	wire [5:0] funct;
	wire [25:0] address26;
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.addr_im(addr_im), 
		.op(op), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.shamt(shamt), 
		.imm16(imm16), 
		.funct(funct), 
		.address26(address26), 
		.instr(instr)
	);

	initial begin
		// Initialize Inputs
		addr_im = 32'h00003000;

	end
      
endmodule

