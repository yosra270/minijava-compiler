#include <stdio.h>

#include "code_generation.h"
#include "stack_machine.h"



void switch_op (instruction ir) {
	switch (ir.op) {
			case STORE :
			case GO_BACK_TO :
			case LDV : printf("%s %d\n", get_op_name(ir.op), ir.arg); break;
			case LDC : printf("%s %d\n", get_op_name(ir.op), ir.arg); break;
			case JMP_FALSE : 
			case GOTO : printf("%s %d\n", get_op_name(ir.op), ir.arg); break;
			case BEGIN_FUN :
			case END_FUN :
			case HALT :
			case AND : 
			case LT : 
			case PLUS : 
			case MINUS : 
			case MUL : printf("%s\n", get_op_name(ir.op)); break;
			default : break;

		}
}


void fetch_execute_cycle()
{

	instruction* code = get_code_main();
	instruction* code_fun = get_code();
	
	int pc = 0;
	instruction ir;
	int final_code_offset = gen_label_main();
	int final_data_offset = get_offset_main();
	int ir_number = final_code_offset;
	int index = 0;
	do {
		/* Fetch */
		ir = code[pc++];
		
		/* Execute */		
		if (ir.op == FUN_CALL) {
			printf("%s %d\n", get_op_name(ir.op), ir.arg+final_code_offset);
			int pc_fun = ir.arg;
			instruction ir_fun;
			int pc_add = final_code_offset;
			do {
				ir_fun = code_fun[pc_fun++];
				if (ir_fun.op == LDC || ir_fun.op == GO_BACK_TO)
					;
				else if (ir_fun.op == LDV || ir_fun.op == STORE)
					ir_fun.arg+= final_data_offset;
				else
					ir_fun.arg+= final_code_offset;
					
				code[pc_add++] = ir_fun;
				ir_number++;
			} while (ir_fun.op != END_FUN);
			
			instruction return_ir;
			return_ir.op = GO_BACK_TO;
			return_ir.arg = pc;
			code[pc_add++] = return_ir;
			ir_number++;
		} else
			switch_op(ir);
		
		index ++;
		//printf("%s %d\n", get_op_name(ir.op), ir.arg);
		
	} while (index < ir_number);
	
}
