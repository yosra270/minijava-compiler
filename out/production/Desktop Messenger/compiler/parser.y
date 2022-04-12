%{
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
void yyerror (char const *s);

%}

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
%token INTEGER_LITERAL "integer literal"
%token STRING_LITERAL "string literal"
%token BOOLEAN_LITERAL "boolean literal"
%token IDENTIFIER "identifier"
%token T_EOF 0 "end of file"

 

%start program

%%
                                                           
program	     : MainClass ClassDeclarations
                | error ClassDeclarations
                ;

MainClass : CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE

            |error IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS error OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER error PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE error STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC error VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC error MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID error OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS error STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS error OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING error CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET error  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  error CLOSE_PARENTHESIS OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER error OPEN_BRACE Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS error Statements CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE error CLOSE_BRACE CLOSE_BRACE
            |CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS OPEN_BRACE Statements error CLOSE_BRACE
            ;
            
ClassDeclarations :
                    | ClassDeclarations ClassDeclaration

                    | error ClassDeclaration
                    ;
		
ClassDeclaration: CLASS IDENTIFIER  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS IDENTIFIER OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE


                | error IDENTIFIER  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                | CLASS error  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                | CLASS IDENTIFIER  error VarsDeclarations MethodDeclarations CLOSE_BRACE
                | CLASS IDENTIFIER  OPEN_BRACE error MethodDeclarations CLOSE_BRACE
                | CLASS IDENTIFIER  OPEN_BRACE VarsDeclarations error CLOSE_BRACE

                |error IDENTIFIER EXTENDS IDENTIFIER OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS error EXTENDS IDENTIFIER OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER error IDENTIFIER OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS error OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS IDENTIFIER error VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS IDENTIFIER OPEN_BRACE error MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS IDENTIFIER OPEN_BRACE VarsDeclarations error CLOSE_BRACE
                ;
                
VarsDeclarations :
                | VarsDeclarations VarsDeclaration

                | error VarsDeclaration
                ;
		 
VarsDeclaration: Type IDENTIFIER SEMICOLON

                | error IDENTIFIER SEMICOLON
                | Type error SEMICOLON
                ;

MethodDeclarations :
                      |MethodDeclarations MethodDeclaration

                      |error MethodDeclaration
                      ;

MethodDeclaration: PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE


                    |error Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC error IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type error OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER error FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS error CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams error OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS error VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE error Statements RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations error RETURN Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements error Expression SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN error SEMICOLON CLOSE_BRACE
                    |PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS OPEN_BRACE VarsDeclarations Statements RETURN Expression error CLOSE_BRACE
                     ;


FunctionParams: FunctionParameters | ;
FunctionParameters :  Type IDENTIFIER
                    | Type IDENTIFIER COMMA FunctionParameters


                    |error IDENTIFIER
                    | error IDENTIFIER COMMA FunctionParameters
                    | Type error COMMA FunctionParameters
                    | Type IDENTIFIER error FunctionParameters
                    ;

Type : INT OPEN_BRACKET CLOSE_BRACKET
       | INT
       | BOOLEAN
       | STRING
       | IDENTIFIER

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
            |IDENTIFIER ASSIGN Expression SEMICOLON
            |IDENTIFIER OPEN_BRACKET Expression CLOSE_BRACKET ASSIGN Expression SEMICOLON
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

Expression : Expression Operator Expression
            |Expression OPEN_BRACKET Expression CLOSE_BRACKET
            |Expression DOT LENGTH
            |Expression DOT IDENTIFIER OPEN_PARENTHESIS MethodVars  CLOSE_PARENTHESIS
            |INTEGER_LITERAL
            |BOOLEAN_LITERAL
            |STRING_LITERAL
            |IDENTIFIER
            |THIS
            |NEW INT OPEN_BRACKET Expression CLOSE_BRACKET
            |NEW IDENTIFIER OPEN_PARENTHESIS CLOSE_PARENTHESIS
            |NOT_OP Expression
            |OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS

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
            |Expression DOT IDENTIFIER error MethodVars  CLOSE_PARENTHESIS
            |Expression DOT IDENTIFIER OPEN_PARENTHESIS error  CLOSE_PARENTHESIS
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
MethodVariables : Expression
                | Expression COMMA MethodVariables

                | error COMMA MethodVariables
                | Expression error MethodVariables
                ;

Operator : AND_OP | LESS_THAN_OP | PLUS_OP | MINUS_OP | MULTIPLICATION_OP ;
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
