/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    COLON = 262,
    CONST = 263,
    CONTINUE = 264,
    DEFAULT = 265,
    DO = 266,
    DOUBLE = 267,
    ELLIPSIS = 268,
    ELSE = 269,
    ENUM = 270,
    EXTERN = 271,
    FLOAT = 272,
    FOR = 273,
    GOTO = 274,
    IF = 275,
    INT = 276,
    LONG = 277,
    REGISTER = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    INLINE = 292,
    RESTRICT = 293,
    _BOOL = 294,
    _COMPLEX = 295,
    _IMAGINARY = 296,
    _ALIGNAS = 297,
    _ALIGNOF = 298,
    _ATOMIC = 299,
    _STATIC_ASSERT = 300,
    _NORETURN = 301,
    _THREAD_LOCAL = 302,
    _GENERIC = 303,
    ADD = 304,
    SUB = 305,
    MUL = 306,
    DIV = 307,
    MOD = 308,
    NEG = 309,
    COMMA = 310,
    DOT = 311,
    SEMI = 312,
    PARENTHESE_L = 313,
    PARENTHESE_R = 314,
    PELEMENT = 315,
    POST_ADD = 316,
    POST_SUB = 317,
    BRACKET_L = 318,
    BRACKET_R = 319,
    BRACE_L = 320,
    BRACE_R = 321,
    AND = 322,
    AND_OP = 323,
    OR = 324,
    OR_OP = 325,
    XOR_OP = 326,
    NOT = 327,
    EQUAL = 328,
    MOVE_L = 329,
    MOVE_R = 330,
    LESSER = 331,
    GREATER = 332,
    NOT_EQUAL = 333,
    LEQUAL = 334,
    GEQUAL = 335,
    ASSIGN = 336,
    QUES = 337,
    ASSIGN_OP = 338,
    ASSIGN_SHIFTL = 339,
    ASSIGN_SHIFTR = 340,
    IDENTITY = 341,
    INT_NUM = 342,
    FLOAT_NUM = 343,
    STRING = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:1909  */

    int intval;
    char *strval;

#line 149 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
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
