#ifndef SYMTAB_H
#define SYMTAB_H

#include <stdbool.h>

typedef enum IdType {int_array, integer, boolean, string, _class, function} IdType;

// Symbol table record
typedef struct symrec
{
	char *name; /* name of symbol */
	int offset; /* data offset */
	int fun_code_offset; /*code ofsset in the case of a function*/
	enum IdType type;  
	struct symrec *next; /* link field */
	int block_offset;	/* block structure */
	bool is_function;
	bool is_initialized;
	bool is_used;
	int params_nbre;
	int params_types [20];
} symrec;

typedef struct 
{
	char ** unused_variables;
	int length;
} unused_vars;

symrec *putsym (char *sym_name, enum IdType type, int block, bool is_function, bool is_initialised,  int params_nbre, int params_types[]);
symrec *lookup_sym (char *sym_name, int block);
symrec *getsym (char *sym_name);
unused_vars* rmsym_block (void);
void sym_initialise(char *sym_name);

void print_symtab(void);

#endif

