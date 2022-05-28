#include <stdio.h>
#include "code_generation.h"



char op_name[999][999] = {"OTHER", "LDC", "LDV", "HALT", "STORE", "JMP_FALSE", "GOTO", "AND", "LT", "PLUS", "MINUS", "MUL", "BEGIN_FUN","END_FUN","FUN_CALL", "GO_BACK_TO"};

int data_offset = 0;

int get_offset() {
	return data_offset;
}

int data_location() { return data_offset++; }

int code_offset = 0;

instruction code[9999];

void gen_code( enum code_ops operation, int arg )
{ 
	if (operation != OTHER) {
		code[code_offset].op = operation;
		code[code_offset++].arg = arg;
    	}
	
}

// For backpatching
int reserve_loc()
{
	return code_offset++;
}

int gen_label()
{
	return code_offset;
}

void back_patch( int addr, enum code_ops operation, int arg )
{
	code[addr].op = operation;
	code[addr].arg = arg;
}




// Return the generated code
instruction* get_code() {
	return code;
}

char* get_op_name(enum code_ops operation) {
	return op_name[operation];
}


int data_offset_main = 0;

int get_offset_main() {
	return data_offset_main;
}

int data_location_main() { return data_offset_main++; }

int code_offset_main = 0;

instruction code_main[9999];

void gen_code_main( enum code_ops operation, int arg )
{ 
	if (operation != OTHER) {
		code_main[code_offset_main].op = operation;
		code_main[code_offset_main++].arg = arg;
    	}
	
}

// For backpatching
int reserve_loc_main()
{
	return code_offset_main++;
}

int gen_label_main()
{
	return code_offset_main;
}

void back_patch_main( int addr, enum code_ops operation, int arg )
{
	code_main[addr].op = operation;
	code_main[addr].arg = arg;
}




// Return the generated code
instruction* get_code_main() {
	return code_main;
}

char* get_op_name_main(enum code_ops operation) {
	return op_name[operation];
}
