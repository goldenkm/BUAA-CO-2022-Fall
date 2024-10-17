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
module MDU(
    input clk,
    input reset,
	 input req,
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
	 reg busy_m, busy_d;
	 always @(posedge clk) begin
		if(reset) begin
			LO <= 0;
			HI <= 0;
			count_m <= 0;
			count_d <= 0;
			busy_m <= 0;
			busy_d <= 0;
			ans <= 0;
		end
		else begin
			if (busy_m == 0 && busy_d == 0 && !req) begin
				case (MDUOp)
					`Mult : begin
						ans <= $signed(in_a) * $signed(in_b);
					end
					`Multu : begin
						ans <= {1'b0, in_a} * {1'b0, in_b};
					end
					`Div : begin
						ans[31:0] <= $signed(in_a) / $signed(in_b);
						ans[63:32] <= $signed(in_a) % $signed(in_b);
					end
					`Divu : begin 
						ans[31:0] <= {1'b0, in_a} / {1'b0, in_b};
						ans[63:32] <= {1'b0, in_a} % {1'b0, in_b};
					end
					`Mtlo : begin
						LO <= in_a;
					end
					`Mthi : begin
						HI <= in_a;
					end
					default : begin
						LO <= LO;
						HI <= HI;
						busy_m <= 0;
						busy_d <= 0;
					end
				endcase
			end
			else if (busy_m) begin
				if (count_m >= 4'd4) begin
					LO <= ans[31:0];
					HI <= ans[63:32];
				end
				else begin
					LO <= LO;
					HI <= HI;
				end
			end
			else if (busy_d) begin
				if (count_d >= 4'd9) begin
					LO <= ans[31:0];
					HI <= ans[63:32];
				end
				else begin
					LO <= LO;
					HI <= HI;
				end
			end
		end
	 end
	 wire isMult = (MDUOp == `Mult || MDUOp == `Multu);
	 wire isDiv = (MDUOp == `Div || MDUOp == `Divu);
	 always @(posedge clk) begin
		if (reset) begin
			count_m <= 0;
			busy_m <= 0;
			count_d <= 0;
			busy_d <= 0;
		end
		else if (start && !req) begin
			if (isMult) begin
				busy_m <= 1;
			end
			else if (isDiv) begin
				busy_d <= 1;
			end
		end
		else if (!req) begin
			if (busy_m) begin
				if (count_m >= 4'd4) begin
					count_m <= 0;
					busy_m <= 0;
				end
				else begin
					count_m <= count_m + 1;
				end
			end
			else if (busy_d) begin
				if (count_d >= 4'd9) begin
					count_d <= 0;
					busy_d <= 0;
				end
				else begin
					count_d <= count_d + 1;
				end
			end
		end
	 end
	 assign data_lo = LO;
	 assign data_hi = HI;
	 assign busy = busy_m | busy_d;

endmodule
