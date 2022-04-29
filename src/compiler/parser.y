%{
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "symtab.h"


extern int yylineno;
void yyerror (char const *s);
int yylex(void);
int errors;
int type;
char name [20];

int params_nbre = 0;
int param_index = 0;
int params_types [20];

/* For the block structure */
int fun_offset = 0;
int arg_offset = 0; 
int block_offset = 0;
int block_in()
{
  block_offset = block_offset + 1;
}
int block_out()
{
  block_offset = block_offset - 1;
}
int reset_block()
{
  block_offset = 0;
}


/* Install an identifier in the symbol table */
void install ( char *sym_name ,enum IdType type, int block, bool is_function, bool is_initialised,  int params_nbre, int params_types[])
{
	symrec *s;
	s = getsym (sym_name);
	if (s == 0) {
		s = putsym (sym_name,type, block, is_function, is_initialised,  params_nbre, params_types);
	}
	else if (s->block_offset == 0) {
		char error_msg[100];
		sprintf(error_msg, "semantic error, %s is already defined in the outer block", sym_name);
		yyerror(error_msg);
	}
	else if (s->block_offset != block){
		s = putsym (sym_name,type, block, is_function, is_initialised,  params_nbre, params_types);
	}
	else { errors++;
		char error_msg[100];
		sprintf(error_msg, "semantic error, %s is already defined", sym_name);
		yyerror(error_msg);
	}
}

/* Check if an identifier is declared before use */
int context_check(char *sym_name , int block)
{   
	symrec *identifier;
	identifier = lookup_sym( sym_name , block);
	if ( !identifier) { 
		errors++;
		char error_msg[100];
		sprintf(error_msg, "semantic error, %s is an undeclared identifier", sym_name);
		yyerror(error_msg);
		}
	else {
		return identifier->type;
	}
	return -1;
}

void initialization_check(char *sym_name)
{
	symrec *s;
	s = getsym (sym_name);
	if (s && !s->is_initialized) {
		char error_msg[100];
		sprintf(error_msg, "WARNING, %s is used but not initialized", sym_name);
		yyerror(error_msg);
	}
}

void type_mismatch_check(char *sym_name ,enum IdType type) 
{

	symrec *s;
	s = getsym (sym_name);
	if (s && s->type != type) {		
		yyerror("semantic error, type mismatch");
	}
}

void unused_vars_check(unused_vars* tab_vars) 
{
	for (int index = tab_vars->length - 1; index >= 0; index --) {
		char error_msg[100];
		sprintf(error_msg, "WARNING, %s is declared but never used", tab_vars->unused_variables[index]);
		yyerror(error_msg);		
	}
}

%}


%union semrec							/* The Semantic Records*/
{
	int  intval;								
	char *id;								
	char *boolval;	
	char *strval;
	int idtype;
	int optype;						
}


%locations
%define parse.error verbose
%define parse.lac full

%token ASSIGN "="
%token OPEN_PARENTHESIS "("
%token CLOSE_PARENTHESIS ")"
%token OPEN_BRACKET "["
%token CLOSE_BRACKET "]"
%token OPEN_BRACE "{"
%token CLOSE_BRACE "}"
%token SEMICOLON ";"
%token COMMA ","
%token AND_OP "&&"
%token LESS_THAN_OP "<"
%token PLUS_OP "+"
%token MINUS_OP "-"
%token MULTIPLICATION_OP "*"
%token DOT "."
%token NOT_OP "!"
%token CLASS "class" 
%token EXTENDS "extends"
%token PUBLIC "public"
%token STATIC "static"
%token VOID "void"
%token MAIN_CLASS "main"
%token STRING "String"
%token RETURN "return"
%token BOOLEAN "boolean"
%token INT "int"
%token IF "if"
%token ELSE "else"
%token WHILE "while"	
%token PRINT "System.out.println"
%token LENGTH "length"
%token THIS "this"
%token NEW "new"
%token <intval> INTEGER_LITERAL "integer literal"
%token <strval> STRING_LITERAL "string literal"
%token <boolval> BOOLEAN_LITERAL "boolean literal"
%token <id> IDENTIFIER "identifier"
%token T_EOF 0 "end of file"


%type <idtype> Type
%type <idtype> Expression
%type <optype> Operator
 

%start program

%%
                                                           
program	     : MainClass ClassDeclarations
                | error ClassDeclarations
                ;

MainClass : CLASS IDENTIFIER OPEN_BRACE {
		install($2, _class, block_offset, false, false, 0, NULL);
		block_in();
		print_symtab();
		} 
		 PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER {
		install($13, string, block_offset+1, false, false, 0, NULL);
		print_symtab();
		} 
		CLOSE_PARENTHESIS OPEN_BRACE {
		block_in();
		}
		MainStatements CLOSE_BRACE {
		unused_vars_check(rmsym_block());
		print_symtab();
		block_out();
		}
		CLOSE_BRACE  {
		unused_vars_check(rmsym_block());
		print_symtab();
		block_out();
		}

            |error IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS error OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER error PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE error STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            
            ;
            
ClassDeclarations :
                    | ClassDeclarations ClassDeclaration

                    | error ClassDeclaration
                    ;
		
ClassDeclaration: CLASS IDENTIFIER OPEN_BRACE  {
		install($2, _class, block_offset, false, false, 0, NULL);
		block_in();
		print_symtab();
		} 
		VarsDeclarations MethodDeclarations CLOSE_BRACE  {
		unused_vars_check(rmsym_block());
		print_symtab();
		block_out();
		}
           |CLASS IDENTIFIER{
		install($2, _class, block_offset, false, false, 0, NULL);
		print_symtab();
		} 
		EXTENDS IDENTIFIER {
		context_check($5, block_offset);
           }
           OPEN_BRACE {
		block_in();
		}
	   VarsDeclarations MethodDeclarations CLOSE_BRACE {
		unused_vars_check(rmsym_block());
		block_out();
		}


                | error IDENTIFIER  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                | CLASS error  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                | CLASS IDENTIFIER  error VarsDeclarations MethodDeclarations CLOSE_BRACE
                ;
                
VarsDeclarations :
                | VarsDeclarations VarsDeclaration

                | error VarsDeclaration
                ;
		 
VarsDeclaration: Type IDENTIFIER SEMICOLON {
		install($2, (IdType) $1, block_offset, false, false, 0, NULL);
		print_symtab();
		}

                | error IDENTIFIER SEMICOLON 
                | Type error SEMICOLON 
                ;

MethodDeclarations :
                      |MethodDeclarations MethodDeclaration

                      |error MethodDeclaration
                      ;

MethodDeclaration: PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE {
		install($3, (IdType) $2, block_offset, true, false, params_nbre, params_types);
		params_nbre = 0;
		param_index = 0;
		block_in();
		print_symtab();
		}
		VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE {
		unused_vars_check(rmsym_block());
		print_symtab();
		block_out();
		}


                    |error Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC error IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type error OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER error FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS error CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams error OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS error VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE error Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    
                     ;


FunctionParams: FunctionParameters | ;
FunctionParameters :  Type IDENTIFIER {
			install($2, (IdType) $1, block_offset+1, false, true,  0, NULL);
			params_nbre ++;
			params_types[param_index] = $1;
			param_index ++;
		     }
                    | Type IDENTIFIER {
			install($2, (IdType) $1, block_offset+1, false, true,  0, NULL);
			params_nbre ++;
			params_types[param_index] = $1;
			param_index ++;
		     }
		     COMMA FunctionParameters


                    |error IDENTIFIER
                    | error IDENTIFIER COMMA FunctionParameters
                    | Type error COMMA FunctionParameters
                    | Type IDENTIFIER error FunctionParameters
                    ;

Type : INT OPEN_BRACKET CLOSE_BRACKET {$$ = 0;}
       | INT {$$ = 1;}
       | BOOLEAN {$$ = 2;}
       | STRING {$$ = 3;}
       | IDENTIFIER {$$ = 4;}

        | error OPEN_BRACKET CLOSE_BRACKET
        | INT error CLOSE_BRACKET
       ;

Statements :
        |Statements Statement 

        |error Statement
        ;
Statement:  OPEN_BRACE Statement CLOSE_BRACE
            |IF OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement ELSE Statement
            |WHILE OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement
            |PRINT OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS SEMICOLON
            |IDENTIFIER ASSIGN Expression SEMICOLON {
                context_check($1, block_offset);
            	sym_initialise($1);
            	type_mismatch_check($1, $3);
		symrec *s;
		s = getsym ($1);
            	if (s)
            		s->is_used = true;
            }
            |



            | error Statement CLOSE_BRACE
            | OPEN_BRACE error CLOSE_BRACE
            |error OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement ELSE Statement
            |IF error Expression CLOSE_PARENTHESIS Statement ELSE Statement
            |IF OPEN_PARENTHESIS error CLOSE_PARENTHESIS Statement ELSE Statement
            |IF OPEN_PARENTHESIS Expression error Statement ELSE Statement
            |IF OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS error ELSE Statement
            |IF OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement error Statement
            |error OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement
            |WHILE error Expression CLOSE_PARENTHESIS Statement
            |WHILE OPEN_PARENTHESIS error CLOSE_PARENTHESIS Statement
            |WHILE OPEN_PARENTHESIS Expression error Statement
            |error OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS SEMICOLON
            |PRINT error Expression CLOSE_PARENTHESIS SEMICOLON
            |PRINT OPEN_PARENTHESIS error CLOSE_PARENTHESIS SEMICOLON
            |PRINT OPEN_PARENTHESIS Expression error SEMICOLON
            |error ASSIGN Expression SEMICOLON
            |IDENTIFIER error Expression SEMICOLON
            |IDENTIFIER ASSIGN error SEMICOLON
            |error OPEN_BRACKET Expression CLOSE_BRACKET ASSIGN Expression SEMICOLON
            |IDENTIFIER error Expression CLOSE_BRACKET ASSIGN Expression SEMICOLON
            |IDENTIFIER OPEN_BRACKET error CLOSE_BRACKET ASSIGN Expression SEMICOLON
            |IDENTIFIER OPEN_BRACKET Expression error ASSIGN Expression SEMICOLON
            |IDENTIFIER OPEN_BRACKET Expression CLOSE_BRACKET error Expression SEMICOLON
            |IDENTIFIER OPEN_BRACKET Expression CLOSE_BRACKET ASSIGN error SEMICOLON
            ;

Expression : Expression Operator Expression {
	     if ($1 > 0 && $3>0 && $1 != $3)
	     	yyerror( "semantic error, type mismatch "); 
	     $$ = $2;
	     }
            |Expression OPEN_BRACKET Expression CLOSE_BRACKET {$$ = 1;}
            |Expression DOT LENGTH {$$ = 1;}
            |Expression DOT IDENTIFIER {
            strcpy(name, $3);
            type = context_check($3 , block_offset);
            if (type != -1) {
		    symrec *s;
		    s = getsym ($3);
		    if (s && s->is_function)
		    {
			params_nbre = s->params_nbre;
			for (int i = 0; i< params_nbre; i++)
				params_types[i] = s->params_types[i];  
		    } 
	    }  else {params_nbre = -1;}      
            }
            OPEN_PARENTHESIS MethodVars  CLOSE_PARENTHESIS {
            $$ = type;
	    if(type != -1 && param_index < params_nbre) 
	    {
		char error_msg[100];
		sprintf(error_msg, "semantic error, few arguments for %s", name);
		yyerror(error_msg);
	    }
            params_nbre = 0;
            param_index = 0;
            }
            |INTEGER_LITERAL {$$ = 1;}
            |BOOLEAN_LITERAL {$$ = 2;}
            |STRING_LITERAL {$$ = 3;}
            |IDENTIFIER {
            $$ = context_check($1 , block_offset);
            if ($$ < 4 && $$ > 0)
            	initialization_check($1); 
	    symrec *s;
	    s = getsym ($1);
            if (s)
            	s->is_used = true;
            }
            |THIS { $$ = -1;}
            |NEW INT OPEN_BRACKET Expression CLOSE_BRACKET {
	     if ($4 != 1)
	     	yyerror( "semantic error, type mismatch "); 
            $$ = 0;
            }
            |NEW IDENTIFIER {context_check($2 , block_offset);} OPEN_PARENTHESIS CLOSE_PARENTHESIS { $$ = 4;}
            |NOT_OP Expression {$$ = 2;}
            |OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS {$$ = $2;}



            | error Operator Expression
            | Expression error Expression
            |error OPEN_BRACKET Expression CLOSE_BRACKET
            |Expression error Expression CLOSE_BRACKET
            |Expression OPEN_BRACKET error CLOSE_BRACKET
            |error DOT LENGTH
            |Expression error LENGTH
            |error DOT IDENTIFIER OPEN_PARENTHESIS MethodVars  CLOSE_PARENTHESIS
            |Expression error IDENTIFIER OPEN_PARENTHESIS MethodVars  CLOSE_PARENTHESIS
            |Expression DOT error OPEN_PARENTHESIS MethodVars  CLOSE_PARENTHESIS
            |error INT OPEN_BRACKET Expression CLOSE_BRACKET
            |NEW error OPEN_BRACKET Expression CLOSE_BRACKET
            |NEW INT error Expression CLOSE_BRACKET
            |NEW INT OPEN_BRACKET error CLOSE_BRACKET
            |error IDENTIFIER OPEN_PARENTHESIS CLOSE_PARENTHESIS
            |NEW error OPEN_PARENTHESIS CLOSE_PARENTHESIS
            |NEW IDENTIFIER error CLOSE_PARENTHESIS
            |error Expression
            |error Expression CLOSE_PARENTHESIS
            |OPEN_PARENTHESIS error CLOSE_PARENTHESIS
            ;

MethodVars : MethodVariables
            |
            ;
MethodVariables : Expression {
	          if (params_nbre >= 0) 
	          {
			if(param_index >= params_nbre) 
			{
				char error_msg[100];
				sprintf(error_msg, "semantic error, too much arguments for %s", name);
				yyerror(error_msg);
			} else 
			{
				if ($1 != params_types[param_index])
				{
					char error_msg[100];
					sprintf(error_msg, "semantic error, argument %d type mismatch for %s", param_index+1, name);
					yyerror(error_msg);
				}
				param_index ++;
			}
		}
		}
                | Expression {
	          if (params_nbre >= 0) 
	          {
			if(param_index >= params_nbre) 
			{
				char error_msg[100];
				sprintf(error_msg, "semantic error, too much arguments for %s", name);
				yyerror(error_msg);
			} else 
			{
				if ($1 != params_types[param_index])
				{
					char error_msg[100];
					sprintf(error_msg, "semantic error, argument %d type mismatch for %s", param_index+1, name);
					yyerror(error_msg);
				}
				param_index ++;
			}
		}
		}
		COMMA MethodVariables

                | error COMMA MethodVariables
                | Expression error MethodVariables
                ;

Operator : AND_OP {$$ = 2;}| LESS_THAN_OP {$$ = 2;}| PLUS_OP {$$ = 1;}| MINUS_OP {$$ = 1;}| MULTIPLICATION_OP {$$ = 1;};






       
MainStatements : MainStatements MainStatement | ;
MainStatement : OPEN_BRACE MainStatement CLOSE_BRACE
            |IF OPEN_PARENTHESIS MainExpression CLOSE_PARENTHESIS MainStatement ELSE MainStatement
            |WHILE OPEN_PARENTHESIS MainExpression CLOSE_PARENTHESIS MainStatement
            |PRINT OPEN_PARENTHESIS MainExpression CLOSE_PARENTHESIS SEMICOLON
            |IDENTIFIER ASSIGN MainExpression SEMICOLON
            |
            ;
            
MainExpression : MainExpression Operator MainExpression 
            |MainExpression OPEN_BRACKET MainExpression CLOSE_BRACKET 
            |MainExpression DOT LENGTH
            |MainExpression DOT IDENTIFIER OPEN_PARENTHESIS MainMethodVars  CLOSE_PARENTHESIS 
            |INTEGER_LITERAL 
            |BOOLEAN_LITERAL 
            |STRING_LITERAL 
            |IDENTIFIER 
            |THIS
            |NEW INT OPEN_BRACKET MainExpression CLOSE_BRACKET
            |NEW IDENTIFIER OPEN_PARENTHESIS CLOSE_PARENTHESIS
            |NOT_OP MainExpression 
            |OPEN_PARENTHESIS MainExpression CLOSE_PARENTHESIS 
            ;
MainMethodVars : MainMethodVariables
            |
            ;
MainMethodVariables : MainExpression 
                | MainExpression COMMA MainMethodVariables
%% 

extern FILE *yyin;

void yyerror (char const *s)
{
  fprintf (stderr, "%s near line %d\n", s, yylineno);
}


int main()
{
 yyparse(); 
}
