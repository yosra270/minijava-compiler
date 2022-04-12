%{	
#include <stdio.h>	
#include <stdlib.h>	          
#include <string.h>
#include <math.h>	
 		
#include "parser.tab.h" 

int yyerror (char const *s);
%}

%option yylineno
delim     [ \t]
bl        {delim}+
line_comment	"//"[^\r\n]*
multi_line_comment	"/*"([^"*"]|("*")*[^"*/"])*("*")*"*/"
identifier	[A-Za-z_][A-Za-z0-9_]*
integer_literal	[+-]?[1-9][0-9]*
boolean_literal	true|false
EscapeSequence      \\[bfnrt"\\]
string_literal      "\""([^"\\\r\n]|{EscapeSequence})*"\""
unclosed_comment    "/*"([^"*/"])*
illegal_identifier  [0-9][a-zA-Z0-9]+
white_space  [ \t\v\f\r]*


%%

{bl}                                                                                 /* pas d'actions */
"\n" 			                                                             /*++yylineno;*/

"="										{printf("ASSIGN : %d\n", yylineno);return ASSIGN;}
"("										{printf("OPEN_PARENTHESIS : %d\n", yylineno);return OPEN_PARENTHESIS;}
")"										{printf("CLOSE_PARENTHESIS : %d\n", yylineno);return CLOSE_PARENTHESIS;}
"[" 										{printf("OPEN_BRACKET : %d\n", yylineno);return OPEN_BRACKET;}
"]" 										{printf("CLOSE_BRACKET : %d\n", yylineno);return CLOSE_BRACKET;}
"{" 										{printf("OPEN_BRACE : %d\n", yylineno);return OPEN_BRACE;}
"}" 										{printf("CLOSE_BRACE : %d\n", yylineno); return CLOSE_BRACE;}
";" 										{printf("SEMICOLON : %d\n", yylineno);return SEMICOLON;}
"," 										{printf("COMMA : %d\n", yylineno);return COMMA;}
"&&"  										{printf("AND_OPERATETOR : %d\n", yylineno);return AND_OP;}
"<"  										{printf("LESS_THAN_OPERATETOR : %d\n", yylineno);return LESS_THAN_OP;}
"+"  										{printf("PLUS_OPERATETOR : %d\n", yylineno);return PLUS_OP;}
"-"  										{printf("MINUS_OPERATETOR : %d\n", yylineno);return MINUS_OP;}
"*"  										{printf("MULTIPLICATION_OPERATETOR : %d\n", yylineno);return MULTIPLICATION_OP;}
"."  										{printf("DOT : %d\n", yylineno);return DOT;}
"!" 										{printf("NOT_OPERATETOR : %d\n", yylineno);return NOT_OP;}
										     
"class" 									{printf("CLASS_KEYWORD : %d\n", yylineno);return CLASS;	}							
"extends"									{printf("EXTENDS_KEYWORD : %d\n", yylineno);return EXTENDS;}
"public"									{printf("PUBLIC_KEYWORD : %d\n", yylineno);return PUBLIC;}
"static"									{printf("STATIC_KEYWORD : %d\n", yylineno);return STATIC;}
"void"									     	{printf("VOID_KEYWORD : %d\n", yylineno);return VOID;}
"main"							{printf("MAIN_CLASS_KEYWORD : %d\n", yylineno);return MAIN_CLASS;}
"String"									{printf("STRING_KEYWORD : %d\n", yylineno);return STRING;}
"return"									{printf("RETURN_KEYWORD : %d\n", yylineno);return RETURN;}
"boolean"								     	{printf("BOOLEAN_KEYWORD : %d\n", yylineno);return BOOLEAN;}
"int"								     	        {printf("INT_KEYWORD : %d\n", yylineno);return INT;}
"if"								     	        {printf("IF_KEYWORD : %d\n", yylineno);return IF;}
"else"								     	        {printf("ELSE_KEYWORD : %d\n", yylineno);return ELSE;}
"while"								     	{printf("WHILE_KEYWORD : %d\n", yylineno);return WHILE;}
"System.out.println"								 {printf("PRINT : %d\n", yylineno);return PRINT;}
"length"									 {printf("LENGTH_METHOD : %d\n", yylineno);return LENGTH;}
"this"								     	         {printf("THIS_KEYWORD : %d\n", yylineno);return THIS;}
"new" 	                                                                      {printf("NEW_KEYWORD : %d\n", yylineno);return NEW;}

{integer_literal}								 {printf("INTEGER_LITERAL : %d\n", yylineno);return INTEGER_LITERAL;}
{string_literal}								 {printf("STRING_LITERAL : %d\n", yylineno);return STRING_LITERAL;}
{illegal_identifier}                                                          {fprintf(stderr,"lexical error, illegal identifier \'%s\' near line %d\n",yytext,yylineno);}
{line_comment}								     	 /*discard line comments*/
{multi_line_comment}         							 /* discard multiline comments*/ 
{unclosed_comment}                                                            {fprintf(stderr,"WARNING : Unclosed comment near line :%d\n",yylineno);yyterminate();}
{white_space}									/*discard white spaces*/
{boolean_literal}								{printf("BOOLEAN_LITERAL : %d\n", yylineno);return BOOLEAN_LITERAL;}
{identifier}								     	{printf("IDENTIFIER : %d\n", yylineno);return IDENTIFIER;}
.                                                                            {fprintf(stderr,"lexical error, incorrect token \'%s\' near line %d\n",yytext, yylineno);}
	

%%


int yywrap()
{
	return(1);
}
