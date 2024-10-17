`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:13:20 10/26/2022 
// Design Name: 
// Module Name:    DM 
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
`define Lb 3'b001
`define Lh 3'b010
`define Sb 3'b011
`define Sh 3'b100
`define Lboez 3'b101
module DM(
	 input [2:0] DMOp,
    input [31:0] addr,
    input [31:0] write_data,
	 input [31:0] instr,
    input clk,
    input MemWrite,
    input reset,
    output [31:0] read_data
    );
	 reg [31:0] ram [1023:0];
	 wire [1:0] byte_sel = addr[1:0];
	integer i;
	initial begin 
		for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
		end
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
			end
		end
		else begin
			if (MemWrite == 1) begin
				if(DMOp == 3'b0) begin
					ram[addr[11:2]] <= write_data;
					$display("@%h: *%h <= %h", instr, addr, write_data);
				end
				else if (DMOp == `Sb) begin
					if (byte_sel == 2'b11)  ram[addr[11:2]][31:24] <= write_data[7:0];
					else if (byte_sel == 2'b10)  ram[addr[11:2]][23:16] <= write_data[7:0];
					else if (byte_sel == 2'b01)  ram[addr[11:2]][15:8] <= write_data[7:0];
					else ram[addr[11:2]][7:0] <= write_data[7:0];
				end
				else if (DMOp == `Sh) begin
					if(byte_sel[1] == 1) ram[addr[11:2]][31:16] <= write_data[15:0];
					else ram[addr[11:2]][15:0] <= write_data[15:0];
				end
			end		
		end
	end
	wire [7:0] load_byte = (byte_sel == 2'b11) ? ram[addr[11:2]][31:24] :
									(byte_sel == 2'b10) ? ram[addr[11:2]][23:16] :
									(byte_sel == 2'b01) ? ram[addr[11:2]][15:8] :
									 ram[addr[11:2]][7:0];
	wire [3:0] count;
	assign count =  load_byte[0] + load_byte[1] + load_byte[2] + load_byte[3] + load_byte[4] + load_byte[5] + load_byte[6] + load_byte[7];
	
	wire [15:0] load_half = (byte_sel[1] == 1) ? ram[addr[11:2]][31:16] :
									ram[addr[11:2]][15:0];
	wire [31:0] ext_byte = {{24{load_byte[7]}},load_byte};
	wire [31:0] ext_half = {{16{load_half[15]}}, load_half};
	wire [31:0] lboez_result;
	assign lboez_result = (count == 4'd4) ? ext_byte : 0;
	assign read_data = (DMOp == `Lb) ? ext_byte : 
								(DMOp == `Lh) ? ext_half : 
								(DMOp == `Lboez) ? lboez_result :
								ram[addr[11:2]];

endmodule
