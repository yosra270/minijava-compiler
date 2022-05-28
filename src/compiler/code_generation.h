#ifndef CODEGEN_H
#define CODEGEN_H

enum code_ops {OTHER, LDC, LDV, HALT, STORE, JMP_FALSE, GOTO, AND, LT, PLUS, MINUS, MUL, BEGIN_FUN, END_FUN, FUN_CALL, GO_BACK_TO};
				


typedef struct instruction
{
	enum code_ops op;
	int arg;
} instruction;

int data_location();
int reserve_loc();
int gen_label();
void back_patch( int addr, enum code_ops operation, int arg );
void gen_code( enum code_ops operation, int arg );

instruction* get_code();
char* get_op_name(enum code_ops operation);

int data_location_main();
int reserve_loc_main();
int gen_label_main();
void back_patch_main( int addr, enum code_ops operation, int arg );
void gen_code_main( enum code_ops operation, int arg );

instruction* get_code_main();
char* get_op_name_main(enum code_ops operation);
int get_offset_main();

#endif
