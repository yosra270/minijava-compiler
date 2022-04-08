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
                                                           
program	     : MainClass ClassDeclarations ;

MainClass : CLASS IDENTIFIER OPEN_BRACE PUBLIC STATIC VOID MAIN_CLASS 
	    OPEN_PARENTHESIS STRING OPEN_BRACKET CLOSE_BRACKET  IDENTIFIER CLOSE_PARENTHESIS 
            OPEN_BRACE Statement CLOSE_BRACE CLOSE_BRACE
            ;
            
ClassDeclarations : | ClassDeclarations ClassDeclaration ;
		
ClassDeclaration: CLASS IDENTIFIER  OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                |CLASS IDENTIFIER EXTENDS IDENTIFIER OPEN_BRACE VarsDeclarations MethodDeclarations CLOSE_BRACE
                ;
                
VarsDeclarations : | VarsDeclarations VarsDeclaration ;
		 
VarsDeclaration: Type IDENTIFIER SEMICOLON;

MethodDeclarations : | MethodDeclarations MethodDeclaration;

MethodDeclaration: PUBLIC Type IDENTIFIER OPEN_PARENTHESIS FunctionParams CLOSE_PARENTHESIS
                   OPEN_BRACE VarsDeclarations Statements RETURN Expression SEMICOLON CLOSE_BRACE;


FunctionParams: FunctionParameters | ;
FunctionParameters :  Type IDENTIFIER | Type IDENTIFIER COMMA FunctionParameters ;

Type : INT OPEN_BRACKET CLOSE_BRACKET | INT | BOOLEAN | STRING | IDENTIFIER ;

Statements : | Statements Statement;
Statement:  OPEN_BRACE Statement CLOSE_BRACE 
            |IF OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement ELSE Statement 
            |WHILE OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS Statement 
            |PRINT OPEN_PARENTHESIS Expression CLOSE_PARENTHESIS SEMICOLON 
            |IDENTIFIER ASSIGN Expression SEMICOLON 
            |IDENTIFIER OPEN_BRACKET Expression CLOSE_BRACKET ASSIGN Expression SEMICOLON
            | 
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
            ;

MethodVars : MethodVariables | ;
MethodVariables : Expression | Expression COMMA MethodVariables ;

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
