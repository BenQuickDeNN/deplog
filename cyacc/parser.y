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
    int intval;
    double floatval;
    char *strval;
    int subtok;
}

	/* token */
%token INT
%token FLOAT
%token DOUBLE
%token AUTO
%token BREAK
%token CASE
%token CONST
%token ELSE
%token FOR
%token IF
%token LONG
%token RETURN
%token SHORT
%token SIGNED
%token CHAR
%token UNSIGNED
%token <strval> IDENTITY
%token <intval> INT_NUMBER
%token <floatval> FLOAT_NUMBER
%token <strval> STRING

%left OR
%left AND
%left ASSIGN
%left '!'
%left '+' '-'
%left '*' '/' '%'

%type <intval> decl_stmt bin_expr factor expr sentence id_list assign_stmt loop

%start statement

%%



%%

int main(int argc, const char *args[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Useage: [./]ccompiler [file]\r\n");
        exit(2);
    }
    // yydebug = 1;

	extern FILE *yyin;
	if ((yyin = fopen(args[1], "r")) == NULL)
    {
		fprintf(stderr, "can not open %s\n", args[1]);
		exit(1);
	}
	if (yyparse())
		exit(-1);
	fclose(yyin);
    return 0;
}

void yyerror(char *s, ...)
{
    extern int yylineno;

    va_list ap;
    va_start(ap, s);

    fprintf(stderr, "row %d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}