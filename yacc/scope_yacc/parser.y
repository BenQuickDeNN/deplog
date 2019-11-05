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
    /* dynamic token */
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

    /* nonterminal symbols */
%type <intval> compound_stat
%type <intval> decl
%type <intval> declarator
%type <intval> decl_list
%type <intval> decl_specs
%type <intval> external_decl
%type <intval> function_definition
%type <intval> init_declarator_list
%type <intval> storage_class_spec
%type <intval> type_spec
%type <intval> type_qualifier

%start translation_unit

%%
    /* rule */
translation_unit    :   external_decl                                   { printf("translation_unit -> external_decl\r\n"); }
                    |   translation_unit external_decl                  { printf("translation_unit -> translation_unit external_decl\r\n"); }
                    ;
external_decl       :   function_definition                             { printf("external_decl -> function_definition\r\n"); }
                    |   decl                                            { printf("external_decl -> decl\r\n"); }
                    ;
function_definition :   decl_specs declarator decl_list compound_stat   { printf("function_definition -> decl_specs declarator decl_list compound_stat\r\n"); }
                    |   declarator decl_list compound_stat              { printf("function_definition -> declarator decl_list compound_stat\r\n"); }
                    |   decl_specs declarator compound_stat             { printf("function_definition -> decl_specs declarator compound_stat\r\n"); }
                    |   declarator compound_stat                        { printf("function_definition -> declarator compound_stat\r\n"); }
                    ;
decl                :   decl_specs init_declarator_list SEMI            { printf("decl -> decl_specs init_declarator_list SEMI\r\n"); }
                    |   decl_specs SEMI                                 { printf("decl -> decl_specs SEMI\r\n"); }
                    ;
decl_list           :   decl                                            { printf("decl_list -> decl\r\n"); }
                    |   decl_list decl                                  { printf("decl_list -> decl_list decl\r\n"); }
                    ;
decl_specs          :   storage_class_spec decl_specs                   { printf("decl_specs -> storage_class_spec decl_specs\r\n"); }
                    |   storage_class_spec                              { printf("decl_specs -> storage_class_spec\r\n"); }
                    |   type_spec decl_specs                            { printf("decl_specs -> type_spec decl_specs\r\n"); }
                    |   type_spec                                       { printf("decl_specs -> type_spec\r\n"); }
                    |   type_qualifier decl_specs                       { printf("decl_specs -> type_qualifier decl_specs\r\n"); }
                    |   type_qualifier                                  { printf("decl_specs -> type_qualifier\r\n"); }
                    ;
storage_class_spec  :   AUTO                                            { printf("storage_class_spec -> AUTO\r\n"); }
                    |   REGISTER                                        { printf("storage_class_spec -> REGISTER\r\n"); }
                    |   STATIC                                          { printf("storage_class_spec -> STATIC\r\n"); }
                    |   EXTERN                                          { printf("storage_class_spec -> EXTERN\r\n"); }
                    |   
%%
