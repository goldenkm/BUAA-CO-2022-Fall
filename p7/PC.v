`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:31:09 10/26/2022 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input [31:0] in_pc,
    input clk,
    input reset,
	 input en,
	 input req,
	 input [31:0] EBase,
    output [31:0] out_pc,
	 output AdEL
    );
	reg [31:0] pc;
	initial begin 
		pc <= 32'h0000_3000;
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			pc <= 32'h0000_3000;
		end
		else if (req) begin
			pc <= EBase;
		end
		else if (en == 0) begin
			pc <= pc;
		end
		else begin 
			pc <= in_pc;
		end 
	end
	assign out_pc = pc;
	assign AdEL = ((pc < 32'h3000 || pc > 32'h6ffc) | (pc[1:0] != 2'b0));

endmodule
