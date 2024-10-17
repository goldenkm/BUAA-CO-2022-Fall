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
	 input req,
	 input M_isEret,
	 input [31:0] EPC,
	 input [31:0] EBase,
    input [31:0] F_instr,
	 input [31:0] F_pc,
	 input F_AdEL,
	 input F_BDIn,
    output [31:0] D_instr,
	 output [31:0] D_pc,
	 output D_AdEL,
	 output D_BDIn
    );
	 reg [31:0] pc;
	 reg [31:0] instr;
	 reg AdEL, BDIn;
	 always @(posedge clk) begin
		 if (reset) begin
			instr <= 0;
			pc <= 32'h0000_3000;
			AdEL <= 0;
			BDIn <= 0;
		 end
		else begin
			if (req) begin
				instr <= 0;
				pc <= EBase;
				AdEL <= 0;
				BDIn <= 0;
			end
			else if (M_isEret) begin
				instr <= 0;
				pc <= EPC;
				AdEL <= 0;
				BDIn <= 0;
			end
			else if (en == 0) begin 
				instr <= instr;
				pc <= pc;
				AdEL <= AdEL;
				BDIn <= BDIn;
			end
			else begin
				instr <= F_instr;
				pc <= F_pc;
				AdEL <= F_AdEL;
				BDIn <= F_BDIn;
			end
		end
	 end
	 assign D_pc = pc;
	 assign D_instr = instr;
	 assign D_AdEL = AdEL;
	 assign D_BDIn = BDIn;
endmodule
