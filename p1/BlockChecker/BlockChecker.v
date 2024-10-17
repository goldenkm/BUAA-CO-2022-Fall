`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:16:26 10/06/2022 
// Design Name: 
// Module Name:    BlockChecker 
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
`define S0 4'b0000
`define S1 4'b0001
`define S2 4'b0010
`define S3 4'b0011
`define S4 4'b0100
`define S5 4'b0101
`define S6 4'b0110
`define S7 4'b0111
`define S8 4'b1000
`define S9 4'b1001
`define S10 4'b1010
`define S11 4'b1011
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result,
	 output [31:0] count_end1,
	 output [31:0] count_begin1
    );
	wire isalpha = ((in >= "a" && in <= "z") && (in >= "A" && in <= "Z")) ? 1 : 0;
	wire isspace = (in == " ") ? 1 : 0;
	reg flag;
	reg [3:0] status;
	reg [31:0] count_begin,count_end;
	initial begin
		status <= `S0;
		count_begin <= 32'b0;
		count_end <= 32'b0;
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			status <= `S0;
			flag <= 0;
			count_begin <= 0;
			count_end <= 0;
		end
		else begin
			case (status)
				`S0: begin
					if(isspace == 1)	
					status <= `S1;
					else if (in == "b" || in == "B")
					status <= `S3;
					else if (in == "e" || in == "E")
					status <= `S8;
					else 
					status <= `S1;
				end
				`S1: begin
					if (isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S2: begin
					if(in == "b" || in == "B")	
					status <=`S3;
					else if(in == "e" || in == "E")
					status <= `S8;
					else if(isspace == 1)	
					status <= `S2;
					else	
					status <= `S1;
				end
				`S3: begin
					if(in == "e" || in == "E")	
					status <= `S4;
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S4: begin
					if(in == "g" || in == "G")
					status <= `S5;
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S5: begin
					if(in == "i" || in == "I")
					status <= `S6;
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S6: begin
					if(in == "n" || in == "N") begin
						count_begin <= count_begin + 1;
						status <= `S7;
					end
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S7: begin
					if(isspace == 1)
					status <= `S2;
					else  begin
						count_begin <= count_begin - 1;
						status <= `S1;
					end
				end
				`S8: begin
					if(in == "n" || in == "N")
					status <= `S9;
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S9: begin
					if(in == "d" || in == "D") begin
						if(count_begin > 0) begin
							count_begin <= count_begin - 1;
							flag <= 0;
						end
						else if(count_begin == 0) begin
							count_end <= count_end + 1;
							flag <= 1;
						end
						status <= `S10;
					end
					else if(isspace == 1)
					status <= `S2;
					else 
					status <= `S1;
				end
				`S10: begin
					if(isspace == 1) begin
						status <= `S2;
					end
					else begin
						if(flag == 0) begin
							count_begin <= count_begin + 1;
						end
						else begin
							count_end <= count_end - 1;
							flag <= 0;
						end
						status <= `S1;
					end
				end
			endcase
		end
	end
	assign result = (count_begin == 0 && count_end == 0) ? 1 : 0;
	assign count_end1 = count_end;
	assign count_begin1 = count_begin;
endmodule
