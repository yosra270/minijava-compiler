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

"="										{return ASSIGN;}
"("										{return OPEN_PARENTHESIS;}
")"										{return CLOSE_PARENTHESIS;}
"[" 										{return OPEN_BRACKET;}
"]" 										{return CLOSE_BRACKET;}
"{" 										{return OPEN_BRACE;}
"}" 										{return CLOSE_BRACE;}
";" 										{return SEMICOLON;}
"," 										{return COMMA;}
"&&"  										{return AND_OP;}
"<"  										{return LESS_THAN_OP;}
"+"  										{return PLUS_OP;}
"-"  										{return MINUS_OP;}
"*"  										{return MULTIPLICATION_OP;}
"."  										{return DOT;}
"!" 										{return NOT_OP;}
										     
"class" 									{return CLASS;	}							
"extends"									{return EXTENDS;}
"public"									{return PUBLIC;}
"static"									{return STATIC;}
"void"									     	{return VOID;}
"main"										{return MAIN_CLASS;}
"String"									{return STRING;}
"return"									{return RETURN;}
"boolean"								     	{return BOOLEAN;}
"int"								     	        {return INT;}
"if"								     	        {return IF;}
"else"								     	        {return ELSE;}
"while"								     	{return WHILE;}
"System.out.println"								 {return PRINT;}
"length"									 {return LENGTH;}
"this"								     	         {return THIS;}
"new" 	                                                                      {return NEW;}

{integer_literal}								 {yylval.intval = atoi( yytext ); return INTEGER_LITERAL;}
{string_literal}								 {yylval.strval = (char *) strdup(yytext); return STRING_LITERAL;}
{illegal_identifier}                                                          {fprintf(stderr,"lexical error, illegal identifier \'%s\' near line %d\n",yytext,yylineno);}
{line_comment}								     	 /*discard line comments*/
{multi_line_comment}         							 /* discard multiline comments*/ 
{unclosed_comment}                                                            {fprintf(stderr,"WARNING : Unclosed comment near line :%d\n",yylineno);yyterminate();}
{white_space}									/*discard white spaces*/
{boolean_literal}								{yylval.boolval = (char *) strdup(yytext); return BOOLEAN_LITERAL;}
{identifier}								     	{yylval.id = (char*) strdup(yytext); return IDENTIFIER;}
.                                                                            {fprintf(stderr,"lexical error, incorrect token \'%s\' near line %d\n",yytext, yylineno);}
	

%%


int yywrap()
{
	return(1);
}
