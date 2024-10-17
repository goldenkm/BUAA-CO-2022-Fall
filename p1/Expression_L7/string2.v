`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:42 10/10/2022 
// Design Name: 
// Module Name:    string2 
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
`define S0 3'b000
`define S1 3'b001
`define S2 3'b010
`define S3 3'b011
`define S4 3'b100
`define S5 3'b101
`define S6 3'b110
`define S7 3'b111
module string2(
    input clk,
    input clr,
    input [7:0] in,
    output out,
	 output flag1,
	 output [2:0] status1
    );
reg [2:0] status;
reg flag;
wire isdigit;
wire isop;
assign isdigit = (in >= "0" && in <= "9") ? 1:0;
assign isop = (in == "+" || in == "*") ? 1:0;
initial begin
	status <= `S0;
	flag <= 0;
end
always @(posedge clk) begin
	if(clr == 1) begin
		status <= `S0;
		flag <= 0;
	end
	else begin
		case (status)
			`S0: begin
				if(isdigit == 1)
				status <= `S1;
				else if(in == "(")
				status <= `S3;
				else begin
					status <= `S0;
					flag <= 1;
				end
			end
			`S1: begin
				if(isop == 1) 
				status <= `S2;
				else begin
					flag <= 1;
				end
			end
			`S2: begin
				if(isdigit == 1) 
				status <= `S1;
				else if (in == "(") begin
					status <= `S3;
				end
				else
				flag <= 1;
			end
			`S3: begin
				if(isdigit == 1)
				status <= `S4;
				else
				flag <= 1;
			end
			`S4: begin
				if(isop == 1)
				status <= `S5;
				else if(in == ")")
				status <= `S7;
				else
				flag <= 1;
			end
			`S5: begin
				if(isdigit == 1) 
				status <= `S6;
				else
				flag <= 1;
			end
			`S6: begin
				if(in == ")")
				status <= `S7;
				else if(isop == 1)
				status <= `S5;
				else
				flag <= 1;
			end
			`S7: begin
				if(isop == 1)
				status <= `S2;
				else 
				flag <= 1;
			end
		endcase
	end
end
always @(posedge clr) begin
	status <= `S0;
	flag <= 0;
end
assign out = ((status == `S1 || status == `S7) && flag == 0) ? 1 : 0;
assign status1 = status;
assign flag1 = flag;
endmodule
