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
`define Sw 3'b001
`define Sb 3'b010
`define Sh 3'b011
`define Lw 3'b100
`define Lb 3'b101
`define Lh 3'b110
`define Lhogez 3'b111
module DM(
	 input [2:0] DMOp,
    input [31:0] addr,
    input [31:0] write_data,
	 input [31:0] pc,
    input clk,
    input MemWrite,
    input reset,
    output [31:0] DR,
	 output DM_flag
    );
	 reg [31:0] ram [3071:0];
	 wire [1:0] byte_sel = addr[1:0];
	 integer i;
	 initial begin 
		 for(i=0; i<3072; i=i+1) begin
		 		ram[i] <= 32'b0;
		 end
	 end
	 always @(posedge clk) begin
	 	if(reset == 1) begin
	 		for(i=0; i<3072; i=i+1) begin
	 			ram[i] <= 32'b0;
	 		end
	 	end
	 	else begin
			if (MemWrite == 1) begin
				if(DMOp == `Sw) begin
					ram[addr[15:2]] <= write_data;
	 				$display("%d@%h: *%h <= %h", $time, pc, addr, write_data);
				end
				else if (DMOp == `Sb) begin
					if (byte_sel == 2'b11)  ram[addr[15:2]][31:24] <= write_data[7:0];
					else if (byte_sel == 2'b10)  ram[addr[15:2]][23:16] <= write_data[7:0];
					else if (byte_sel == 2'b01)  ram[addr[15:2]][15:8] <= write_data[7:0];
					else ram[addr[11:2]][7:0] <= write_data[7:0];
					$display("%d@%h: *%h <= %h", $time, pc, addr, ram[addr[15:2]]);
				end
				else if (DMOp == `Sh) begin
					if(byte_sel[1] == 1) ram[addr[15:2]][31:16] <= write_data[15:0];
					else ram[addr[15:2]][15:0] <= write_data[15:0];
				end
			end		
		end
	 end
	 wire [7:0] load_byte = (byte_sel == 2'b11) ? ram[addr[15:2]][31:24] :
									(byte_sel == 2'b10) ? ram[addr[15:2]][23:16] :
									(byte_sel == 2'b01) ? ram[addr[15:2]][15:8] :
									 ram[addr[15:2]][7:0];
	 wire [15:0] load_half = (byte_sel[1] == 1) ? ram[addr[15:2]][31:16] :
									ram[addr[15:2]][15:0];
	 wire [31:0] ext_byte = {{24{load_byte[7]}},load_byte};
	 wire [31:0] ext_half = {{16{load_half[15]}}, load_half};
	 wire [31:0] lhogez_result = ext_half;
	 wire [5:0] count;
	 Bit_Adder bit_adder1 (
		.data({16'b0,load_half}),
		.count(count)
	 );
	 assign DR = (DMOp == `Lb) ? ext_byte : 
								(DMOp == `Lh) ? ext_half : 
								(DMOp == `Lhogez) ? lhogez_result :
								ram[addr[15:2]];
	 assign DM_flag = (DMOp == 3'b111 && count > 8) ? 1 : 0;

endmodule