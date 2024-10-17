`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:52:42 11/09/2022 
// Design Name: 
// Module Name:    MDU 
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
`define Mult 4'b0001
`define Multu 4'b0010
`define Div 4'b0011
`define Divu 4'b0100
`define Mfhi 4'b0101
`define Mflo 4'b0110
`define Mthi 4'b0111
`define Mtlo 4'b1000
`define Madd 4'b1001
`define Msub 4'b1010
`define Shl 4'b1111
module MDU(
    input clk,
    input reset,
    input [31:0] in_a,
    input [31:0] in_b,
    input [3:0] MDUOp,
    input start,
    output [31:0] data_hi,
    output [31:0] data_lo,
    output busy
    );
	 reg [31:0] LO;
	 reg [31:0] HI;
	 reg [63:0] ans;
	 reg [3:0] count_m;
	 reg [3:0] count_d;
	 reg Busy;
	 reg [31:0] temp;
	 wire condition_bds = ({1'b0, in_a} >= {1'b0, in_b});
	 always @(posedge clk) begin
		if(reset) begin
			LO <= 0;
			HI <= 0;
			count_m <= 4'd5;
			count_d <= 4'd10;
			Busy <= 0;
			ans <= 0;
		end
		else begin
			if (MDUOp == `Mtlo) begin
				LO <= in_a;
			end
			else if (MDUOp == `Mthi) begin
				HI <= in_a;
			end
			else if (MDUOp == `Shl) begin
				temp = HI;
				HI = LO;
				LO = temp;
			end
			if (start) begin
				case (MDUOp)
					`Mult : begin
						ans <= $signed(in_a) * $signed(in_b);
						Busy <= 1;
						count_m <= count_m - 1;
					end
					`Multu : begin
						ans <= {1'b0, in_a} * {1'b0, in_b};
						Busy <= 1;
						count_m <= count_m - 1;
					end
					`Div : begin
						ans[31:0] <= $signed(in_a) / $signed(in_b);
						ans[63:32] <= $signed(in_a) % $signed(in_b);
						Busy <= 1;
						count_d <= count_d - 1;
					end
					`Divu : begin 
						ans[31:0] <= {1'b0, in_a} / {1'b0, in_b};
						ans[63:32] <= {1'b0, in_a} % {1'b0, in_b};
						Busy <= 1;
						count_d <= count_d - 1;
					end
					`Madd : begin
						ans <= {HI, LO} + $signed($signed(64'b0) + $signed(in_a) * $signed(in_b));
						Busy <= 1;
						count_m <= count_m - 1;
					end
					`Msub : begin
						ans <= {HI, LO} + $signed($signed(64'b0) - $signed(in_a) * $signed(in_b));
						Busy <= 1;
						count_m <= count_m - 1;
					end
					default : begin
						LO <= LO;
						HI <= HI;
						Busy <= 0;
					end
				endcase
			end
			if (count_m == 1) begin
				LO <= ans[31:0];
				HI <= ans[63:32];
				Busy <= 0;
				count_m <= 4'd5;
			end
			else if (count_m != 4'd5) begin
				Busy <= 1;
				count_m <= count_m - 1;
			end
			if (count_d == 1) begin
				LO <= ans[31:0];
				HI <= ans[63:32];
				Busy <= 0;
				count_d <= 4'd10;
			end
			else if (count_d != 4'd10) begin
				Busy <= 1;
				count_d <= count_d - 1;
			end
		end
	 end
	 assign data_lo = LO;
	 assign data_hi = HI;
	 assign busy = Busy;

endmodule
