/* filename -> parser.y */
%require "3.0.4"

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void yyerror(char *s, ...);
int yylex();
%}

%debug

%locations

%union {
    int intval
    char *strval;
}
    /* token */
    /* terminal symbols */
    /* Keyword */
%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INT
%token LONG
%token REGISTER
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
    /* c99 std keyword */
%token INLINE
%token RESTRICT
%token _BOOL
%token _COMPLEX
%token _IMAGINARY
    /* c11 std keyword */
%token _ALIGNAS
%token _ALIGNOF
%token _ATOMIC
%token _STATIC_ASSERT
%token _NORETURN
%token _THREAD_LOCAL
%token _GENERIC
    /* nonterminal symbols */
%token <strval> IDENTITY
%token <strval> NUMBER
%token <strval> STRING
%token <strval> BIN_OPERATOR
%token <strval> COMMA
%token <strval> DOT
%token <strval> SEMI
%token <strval> PARENTHESE_L
%token <strval> PARENTHESE_R
%token <strval> BRACKET_L
%token <strval> BRACKET_R
%token <strval> BRACE_L
%token <strval> BRACE_R
%token <strval> AND
%token <strval> OR
%token <strval> NEGATIVE
%token <strval> ASSIGN
%token <strval> FORMAT_SYMBOL

%type <intval> 

%start stmt
%%

%%
