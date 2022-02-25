%option yylineno
delim     [ \t]
bl        {delim}+
line_comment	"//"[^\r\n]*
multi_line_comment	"/*"(.|\n)*?"*/"
identifier	[A-Za-z_][A-Za-z0-9_]*
integer_literal	[+-]?[1-9][0-9]*
boolean_literal	true|false
unclosed_comment    "/*"([^"*/"])*
illegal_identifier  [0-9][a-zA-Z0-9]+

%%

{bl}                                                                                 /* pas d'actions */
"\n" 			                                                             ++yylineno;
[ \t\r\n]               								/* no action: ignore all white space */

"="										                              printf("ASSIGN : %s\n", yytext);
"("										                              printf("OPEN_PARENTHESIS : %s\n", yytext);
")"										                              printf("CLOSE_PARENTHESIS : %s\n", yytext);  
"[" 										                              printf("OPEN_BRACKET : %s\n", yytext);
"]" 										                              printf("CLOSE_BRACKET : %s\n", yytext);
"{" 										                              printf("OPEN_BRACE : %s\n", yytext);
"}" 										                              printf("CLOSE_BRACE : %s\n", yytext); 
";" 										                              printf("SEMICOLON : %s\n", yytext);
"," 										                              printf("COMMA : %s\n", yytext);
"&&"  										                         printf("AND_OPERATETOR : %s\n", yytext);
"<"  										                         printf("LESS_THAN_OPERATETOR : %s\n", yytext);
"+"  										                         printf("PLUS_OPERATETOR : %s\n", yytext);
"-"  										                         printf("MINUS_OPERATETOR : %s\n", yytext);
"*"  										                         printf("MULTIPLICATION_OPERATETOR : %s\n", yytext);
"."  										                         printf("DOT : %s\n", yytext);
"!" 										                              printf("NOT_OPERATETOR : %s\n", yytext);
										     
"class" 									                              printf("CLASS_KEYWORD : %s\n", yytext);								
"extends"									                              printf("EXTENDS_KEYWORD : %s\n", yytext);
"public"									                              printf("PUBLIC_KEYWORD : %s\n", yytext);
"static"									                              printf("STATIC_KEYWORD : %s\n", yytext);
"void"									     	                    printf("VOID_KEYWORD : %s\n", yytext);
"main"										                         printf("MAIN_CLASS_KEYWORD : %s\n", yytext);
"String"									                              printf("STRING_KEYWORD : %s\n", yytext);
"return"									                              printf("RETURN_KEYWORD : %s\n", yytext);
"int[]"									     	                    printf("INT_ARRAY_KEYWORD : %s\n", yytext);
"int []"								     	                         printf("INT_ARRAY_KEYWORD : %s\n", yytext);
"boolean"								     	                         printf("BOOLEAN_KEYWORD : %s\n", yytext);
"int"								     	                         printf("INT_KEYWORD : %s\n", yytext);
"if"								     	                              printf("IF_KEYWORD : %s\n", yytext);
"else"								     	                         printf("ELSE_KEYWORD : %s\n", yytext); 
"while"								     	                         printf("WHILE_KEYWORD : %s\n", yytext);
"System.out.println"								                    printf("PRINT : %s\n", yytext);
".length"									                              printf("LENGTH_METHOD : %s\n", yytext);
"this"								     	                         printf("THIS_KEYWORD : %s\n", yytext);
"new" 	                                                                      printf("NEW_KEYWORD : %s\n", yytext);

{illegal_identifier}                                                            fprintf(stderr,"ERROR : Illegal identifier \'%s\' on line %d\n",yytext,yylineno);
{line_comment}								     	                    printf("LINE_COMMENT : %s\n", yytext);
{multi_line_comment}         							                    printf("MULTI_LINE_COMMENT : %s\n", yytext);
{unclosed_comment}                                                              fprintf(stderr,"WARNING : Unclosed comment \'%s\' on line :%d\n",yytext,yylineno);
{integer_literal}								                         printf("INTEGER_LITERAL : %s\n", yytext);
{boolean_literal}								                         printf("BOOLEAN_LITERAL : %s\n", yytext);
{identifier}								     	                    printf("IDENTIFIER : %s\n", yytext);
.                                                                               fprintf(stderr,"ERROR : incorrect token \'%s\' on line %d\n",yytext,yylineno);
	

%%

int main(int argc, char *argv[]) 
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}

int yywrap()
{
	return(1);
}
