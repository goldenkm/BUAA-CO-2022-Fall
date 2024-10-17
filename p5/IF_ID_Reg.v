`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:20 11/03/2022 
// Design Name: 
// Module Name:    IF_ID_Reg 
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
module IF_ID_Reg(
	 input clk,
	 input reset,
	 input en,
	 input D_reg_clr,
    input [31:0] F_instr,
	 input [31:0] F_pc,
    output [31:0] D_instr,
	 output [31:0] D_pc
    );
	 reg [31:0] pc;
	 reg [31:0] instr;
	 initial begin
		pc <= 32'h00003000;
		instr <= 0;
	 end
	 always @(posedge clk) begin
		 if (reset) begin
			instr <= 0;
			pc <= 32'h00003000;
		 end
		else begin
			if (en == 0) begin 
				instr <= instr;
				pc <= pc;
			end
			else begin
				instr <= F_instr;
				pc <= F_pc;
			end
		end
	 end
	 assign D_pc = pc;
	 assign D_instr = instr;
endmodule
