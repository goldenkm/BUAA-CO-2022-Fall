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
    input [31:0] F_pc,
	 input [31:0] D_pc,
	 input [31:0] D_V1,
	 input [31:0] D_V2,
    input [25:0] address26,
    input [15:0] imm16,
	 input [31:0] reg31_data,
	 input branch,
	 input [1:0] jump,
	 input jabs,
    output [31:0] pc_next
    );
	wire [31:0] D_pc_add_4 = D_pc + 32'd4;
	wire [31:0] F_pc_add_4 = F_pc + 32'd4;
	wire [31:0] addr_jump = {D_pc_add_4[31:28], address26, 2'b0};
	wire [31:0] npc_temp1 = D_pc_add_4 + {{14{imm16[15]}}, imm16, 2'b00};
	wire [31:0] npc_temp2, npc_temp3;
	assign npc_temp2 = (branch == 1) ? npc_temp1 : F_pc_add_4;
	assign npc_temp3 = (jump == 2'b01) ? addr_jump :
							(jump == 2'b10) ? reg31_data :
							npc_temp2;
	wire [31:0] jabs_tmp1 = $signed($signed(D_V1)-$signed(D_V2));
	wire [31:0] jabs_tmp2 = {jabs_tmp1[29:0], 2'b0};
	wire [31:0] abs = (jabs_tmp2[31] == 1) ? (~jabs_tmp2 + 1) : jabs_tmp2;
	wire [31:0] jabs_result = npc_temp1 + abs;
	assign pc_next = (jabs) ? jabs_result : npc_temp3;

endmodule
