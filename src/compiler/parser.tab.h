/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_EOF = 0,
    ASSIGN = 258,
    OPEN_PARENTHESIS = 259,
    CLOSE_PARENTHESIS = 260,
    OPEN_BRACKET = 261,
    CLOSE_BRACKET = 262,
    OPEN_BRACE = 263,
    CLOSE_BRACE = 264,
    SEMICOLON = 265,
    COMMA = 266,
    AND_OP = 267,
    LESS_THAN_OP = 268,
    PLUS_OP = 269,
    MINUS_OP = 270,
    MULTIPLICATION_OP = 271,
    DOT = 272,
    NOT_OP = 273,
    CLASS = 274,
    EXTENDS = 275,
    PUBLIC = 276,
    STATIC = 277,
    VOID = 278,
    MAIN_CLASS = 279,
    STRING = 280,
    RETURN = 281,
    BOOLEAN = 282,
    INT = 283,
    IF = 284,
    ELSE = 285,
    WHILE = 286,
    PRINT = 287,
    LENGTH = 288,
    THIS = 289,
    NEW = 290,
    INTEGER_LITERAL = 291,
    STRING_LITERAL = 292,
    BOOLEAN_LITERAL = 293,
    IDENTIFIER = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
