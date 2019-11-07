/* filename -> lexer.l */
/* option */
/* --noyywrap: disable yywrap() function */
/* --yylineno: recording row numbers of symbols */
%option noyywrap yylineno
    /* declaration in C language */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"
int old_status;
void yyerror(char *s, ...);
%}
%x COMMENT
%%
    /* terminal symbols */
    /* keyword */
auto            { return AUTO; }
break           { return BREAK; }
case            { return CASE; }
char            { return CHAR; }
const           { return CONST; }
continue        { return CONTINUE; }
default         { return DEFAULT; }
do              { return DO; }
double          { return DOUBLE; }
else            { return ELSE; }
enum            { return ENUM; }
extern          { return EXTERN; }
float           { return FLOAT; }
for             { return FOR; }
goto            { return GOTO; }
if              { return IF; }
int             { return INT; }
long            { return LONG; }
register        { return REGISTER; }
return          { return RETURN; }
short           { return SHORT; }
signed          { return SIGNED; }
sizeof          { return SIZEOF; }
static          { return STATIC; }
struct          { return STRUCT; }
switch          { return SWITCH; }
typedef         { return TYPEDEF; }
union           { return UNION; }
unsigned        { return UNSIGNED; }
void            { return VOID; }
volatile        { return VOLATILE; }
while           { return WHILE; }
    /* c99 std keyword */
inline          { return INLINE; }
restrict        { return RESTRICT; }
_Bool           { return _BOOL; }
_Complex        { return _COMPLEX; }
_Imaginary      { return _IMAGINARY; }
    /* c11 std keyword */
_Alignas        { return _ALIGNAS; }
_Alignof        { return _ALIGNOF; }
_Atomic         { return _ATOMIC; }
_Static_assert  { return _STATIC_ASSERT; }
_Noreturn       { return _NORETURN; }
_Thread_local   { return _THREAD_LOCAL; }
_Generic        { return _GENERIC; }
    /* dynamic token */
    /* variable */
[a-zA-Z][a-zA-Z0-9_]*   { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return IDENTITY; }
    /* number */
-?[0-9]+                { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return NUMBER; }
-?[0-9]+\.[0-9]+        { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return NUMBER; }
    /* C-type strings */
\"(\\.|\"\"|[^"\n"])*\" { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return STRING; }
    /* errors */
\"(\\.|[^"\n])*$        { yyerror("Unterminated string %s", yytext); }
    /* operators */
","                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return COMMA; }
"..."                   { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return ELLIPSIS;}
"."                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return DOT; }
";"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return SEMI; }
"("                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return PARENTHESE_L; }
")"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return PARENTHESE_R; }
"["                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return BRACKET_L; }
"]"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return BRACKET_R; }
"{"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return BRACE_L; }
"}"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return BRACE_R; }
"&&"                    { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return AND; }
"||"                    { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return OR; }
"!"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return NOT; }
[-+&~|^/%*]=            { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return ASSIGN_OP }
"="                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return ASSIGN; }
":"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return COLON; }
"?"                     { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return QUES; }
[-+&~|^/%*]             { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return BIN_OPERATOR; }
    /* comments */
"//".*;
"/*"                    { printf("lexer: yytext = %s\n", yytext); old_status = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"           { printf("lexer: yytext = %s\n", yytext); BEGIN old_status; }
	/* special symbols */
[ \t\r\n]               { yylval.strval = strdup(yytext); printf("lexer: yytext = %s\n", yytext); return FORMAT_SYMBOL; }
	/* prevent flex jam */
.                       { printf("lexer: yytext = %s\n", yytext); yyerror("lexing error\n"); }
%%