#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "symtab.h"



// Initialization of the list to empty 
symrec *sym_table = (symrec *)0;

symrec * putsym (char *sym_name, enum IdType type, int block, bool is_function, bool is_initialised,  int params_nbre, int params_types[])
{
	symrec *ptr;
	ptr = (symrec *) malloc (sizeof(symrec));
	ptr->name = (char *) malloc (strlen(sym_name)+1);
	ptr->type = type;
	ptr->block_offset = block;
	ptr->is_function = is_function;
	ptr->is_initialized = is_initialised;
	ptr->is_used = false;
	ptr->params_nbre = params_nbre;
	for (int i = 0; i< params_nbre; i++)
		ptr->params_types[i] = params_types[i];
	strcpy (ptr->name,sym_name);
	ptr->next = (struct symrec *)sym_table;
	sym_table = ptr;
	return ptr;
}
symrec * getsym (char *sym_name)
{
	symrec *ptr;
	for ( ptr = sym_table; ptr != (symrec *) 0; ptr = (symrec *)ptr->next ) {
		if (strcmp (ptr->name,sym_name) == 0)
			return ptr;
	}
	return 0;
}

symrec * lookup_sym (char *sym_name, int block)
{
	symrec *ptr;
	for ( ptr = sym_table; ptr != (symrec *) 0; ptr = (symrec *)ptr->next ) {
		if (ptr->block_offset > block)
			continue;
		if (strcmp (ptr->name,sym_name) == 0)
			return ptr;
	}
	return NULL;
}

unused_vars * rmsym_block ()
{
	unused_vars *ptr = (unused_vars*) malloc (sizeof(unused_vars));
	char **unused_variables = (char**) malloc (sizeof(char*)*100);
	int index = 0;
	int block = sym_table->block_offset;
	if( block > 0) {
		symrec *current_node = sym_table;    
		symrec *previous_node = NULL;
		while (current_node) {			
			if(current_node->block_offset == block && current_node->type < 4 && !current_node->is_function) {
				if(!current_node->is_used) {
					unused_variables[index] = (char*) malloc (sizeof(char)*100);
					strcpy(unused_variables[index],current_node->name);
					index++;
				}
				
				if(previous_node) {
					previous_node->next = current_node->next;
					free(current_node);
					current_node = previous_node->next;
				} else {
					sym_table = sym_table->next;
					free(current_node);
					current_node = sym_table;
				}
			} else {
				previous_node = current_node; 
				current_node = current_node->next;
			}
		}
	}
	ptr->unused_variables = unused_variables; 
	ptr->length = index;
}

void sym_initialise(char *sym_name) 
{	
	symrec *s;
	s = getsym (sym_name);
	if (s)
		s->is_initialized = true;
}

// for debugging purposes
void print_symtab(void)
{
    /*int i, j;
    printf("\n\nSYMBOL TABLE\n");
    printf("\n#       name           type            block_offset	is_initialized");
    printf("\n-- ---------------- ---------------- ----------------  ---------------- ");
    symrec *ptr = sym_table;
    while(ptr)
    {
        printf("\n\t%s \t\t %d \t\t %d \t\t %d", 
               ptr->name,
               ptr->type,
               ptr->block_offset,
               ptr->is_initialized
               );
        ptr = ptr->next;
    }
    printf("\n\n");*/
}
