/* filename -> parser.y */
%require "3.0.4"

%{
#include <cstdio>
#include <cstdlib>
#include <string>
#include <stdarg.h>

void yyerror(char *s, ...);
int yylex();
struct ASTNode{
    char* name;
    ASTNode* next
};
%}

%debug

%locations

%union {
    std::string strval;
}
    /* token */
    /* terminal symbols */
    /* Keyword */
%token AUTO
%token BREAK
%token CASE
%token CHAR
%token COLON
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELLIPSIS
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
%token TYPEDEF
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
    /* operator */
%token ADD
%token SUB
%token MUL
%token DIV
%token MOD
%token NEG
%token COMMA
%token DOT
%token SEMI
%token PARENTHESE_L
%token PARENTHESE_R
%token PELEMENT
%token POST_ADD
%token POST_SUB
%token BRACKET_L
%token BRACKET_R
%token BRACE_L
%token BRACE_R
%token AND
%token AND_OP
%token OR
%token OR_OP
%token XOR_OP
%token NOT
%token EQUAL
%token MOVE_L
%token MOVE_R
%token LESSER
%token GREATER
%token NOT_EQUAL
%token LEQUAL
%token GEQUAL
%token ASSIGN
%token QUES
    /* dynamic token */
%token <strval> ASSIGN_OP
%token <strval> ASSIGN_SHIFTL
%token <strval> ASSIGN_SHIFTR
%token <strval> IDENTITY
%token <strval> INT_NUM
%token <strval> FLOAT_NUM
%token <strval> STRING

    /* nonterminal symbols */
%token <strval> stmt

%token <strval> loop
%token <strval> for_loop
%token <strval> while_loop
%token <strval> do_loop

%token <strval> nonloop

%token <strval> for_exp
%token <strval> assignment_exp
%token <strval> conditional_exp
%token <strval> postfix_exp

%token <strval> write_addr
%token <strval> assignment_operator
%token <strval> read_expr

%start translation_unit

%%
    /* rule */
translation_unit    :   loop    { printf("translation_unit -> loop\r\n"); }
                    |   nonloop { printf("translation_unit -> nonloop\r\n"); }
                    ;
loop    :   for_loop    { printf("loop -> for_loop\r\n"); }
        |   while_loop  { printf("loop -> while_loop\r\n"); }
        |   do_loop     { printf("loop -> do_loop\r\n"); }
        ;
for_loop    :   FOR PARENTHESE_L for_exp SEMI for_exp SEMI for_exp PARENTHESE_R stmt    { printf("for_loop -> FOR PARENTHESE_L for_exp SEMI for_exp SEMI for_exp PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L for_exp SEMI for_exp SEMI PARENTHESE_R stmt            { printf("FOR PARENTHESE_L for_exp SEMI for_exp SEMI PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L for_exp SEMI SEMI for_exp PARENTHESE_R stmt            { printf("FOR PARENTHESE_L for_exp SEMI SEMI for_exp PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L for_exp SEMI SEMI PARENTHESE_R stmt                    { printf("FOR PARENTHESE_L for_exp SEMI SEMI PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L SEMI for_exp SEMI for_exp PARENTHESE_R stmt            { printf("FOR PARENTHESE_L SEMI for_exp SEMI for_exp PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L SEMI for_exp SEMI PARENTHESE_R stmt                    { printf("FOR PARENTHESE_L SEMI for_exp SEMI PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L SEMI SEMI for_exp PARENTHESE_R stmt                    { printf("FOR PARENTHESE_L SEMI SEMI for_exp PARENTHESE_R stmt\r\n"); }
            |   FOR PARENTHESE_L SEMI SEMI PARENTHESE_R stmt                            { printf("FOR PARENTHESE_L SEMI SEMI PARENTHESE_R stmt\r\n"); }
            ;
for_exp :   assignment_exp              { printf("for_exp -> assignment_exp\r\n"); }
        |   for_exp COMMA assignment_exp    { printf("for_exp -> for_exp COMMA assignment_exp\r\n"); }
        ;
assignment_exp  :   write_addr assignment_operator read_expr    { printf("assignment_exp -> write_addr assignment_operator read_expr\r\n"); }
                |   
%%
int main(int argc, const char *args[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Useage: [./]cyacc [file]\r\n");
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