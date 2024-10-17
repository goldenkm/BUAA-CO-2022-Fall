`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:52 10/26/2022 
// Design Name: 
// Module Name:    nPC 
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
module nPC(
    input [31:0] pc_now,
    input [25:0] address26,
    input [31:0] imm32,
	 input [31:0] reg31_data,
	 input branch,
	 input [1:0] jump,
    output [31:0] pc_next,
	 output [31:0] pc_add_4
    );
	assign pc_add_4 = pc_now + 3'b100;
	wire [31:0] addr_jump = {pc_add_4[31:28], address26, 2'b0};
	wire [31:0] npc_temp1 = pc_add_4 + (imm32 << 2);
	wire [31:0] npc_temp2;
	MUX2_32bits mux_beq (
		.in_a(pc_add_4),
		.in_b(npc_temp1),
		.slt(branch),
		.out(npc_temp2)
	);
	MUX3_32bits mux_jump (
		.in_a(npc_temp2),
		.in_b(addr_jump),
		.in_c(reg31_data),
		.slt(jump),
		.out(pc_next)
	);
	

endmodule
