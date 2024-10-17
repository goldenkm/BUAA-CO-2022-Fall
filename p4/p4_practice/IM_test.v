`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:09:23 10/26/2022
// Design Name:   IM
// Module Name:   /home/co-eda/ISE/p1/p4_SingleCycleCpu/IM_test.v
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

module IM_test;

	// Inputs
	reg [31:0] addr;

	// Outputs
	wire [5:0] op;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] shamt;
	wire [15:0] imm16;
	wire [5:0] funct;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.addr(addr), 
		.op(op), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.shamt(shamt), 
		.imm16(imm16), 
		.funct(funct)
	);

	initial begin
		// Initialize Inputs
		addr = 32'b00000000000000000000000000000100;

		

	end
      
endmodule

