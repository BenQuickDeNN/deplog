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
    char *strval;
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
%token ASSIGN_OP
%token ASSIGN
%token QUES
    /* dynamic token */
%token <strval> IDENTITY
%token <strval> INT_NUM
%token <strval> FLOAT_NUM
%token <strval> STRING

    /* nonterminal symbols */
%type <intval> abstract_declarator
%type <intval> additive_exp
%type <intval> and_exp
%type <intval> argument_exp_list
%type <intval> assignment_exp
%type <intval> assignment_operator
%type <intval> cast_exp
%type <intval> compound_stat
%type <intval> conditional_exp
%type <intval> const_exp
%type <intval> const_type
%type <intval> decl
%type <intval> declarator
%type <intval> decl_list
%type <intval> decl_specs
%type <intval> direct_abstract_declarator
%type <intval> direct_declarator
%type <intval> enumerator
%type <intval> enumerator_list
%type <intval> enum_spec
%type <intval> equality_exp
%type <intval> exclusive_or_exp
%type <intval> exp
%type <intval> exp_stat
%type <intval> external_decl
%type <intval> function_definition
%type <intval> id_list
%type <intval> inclusive_or_exp
%type <intval> initializer
%type <intval> initializer_list
%type <intval> init_declarator
%type <intval> init_declarator_list
%type <intval> iteration_stat
%type <intval> jump_stat
%type <intval> labeled_stat
%type <intval> logical_and_exp
%type <intval> logical_or_exp
%type <intval> mult_exp
%type <intval> param_decl
%type <intval> param_list
%type <intval> param_type_list
%type <intval> pointer
%type <intval> postfix_exp
%type <intval> primary_exp
%type <intval> relational_exp
%type <intval> selection_stat
%type <intval> shift_expression
%type <intval> spec_qualifier_list
%type <intval> stat
%type <intval> stat_list
%type <intval> storage_class_spec
%type <intval> struct_decl
%type <intval> struct_declarator
%type <intval> struct_declarator_list
%type <intval> struct_decl_list
%type <intval> struct_or_union
%type <intval> struct_or_union_spec
%type <intval> typedef_name
%type <intval> type_name
%type <intval> type_qualifier_list
%type <intval> type_qualifier
%type <intval> type_spec
%type <intval> unary_exp
%type <intval> unary_operator

%start translation_unit

%%
    /* rule */
translation_unit            :   external_decl                                               { printf("translation_unit -> external_decl\r\n"); }
                            |   translation_unit external_decl                              { printf("translation_unit -> translation_unit external_decl\r\n"); }
                            ;
external_decl               :   function_definition                                         { printf("external_decl -> function_definition\r\n"); }
                            |   decl                                                        { printf("external_decl -> decl\r\n"); }
                            ;
function_definition         :   decl_specs declarator decl_list compound_stat               { printf("function_definition -> decl_specs declarator decl_list compound_stat\r\n"); }
                            |   declarator decl_list compound_stat                          { printf("function_definition -> declarator decl_list compound_stat\r\n"); }
                            |   decl_specs declarator compound_stat                         { printf("function_definition -> decl_specs declarator compound_stat\r\n"); }
                            |   decl_specs declarator                                       { printf("function_definition -> declarator\r\n"); }
                            |   declarator compound_stat                                    { printf("function_definition -> declarator compound_stat\r\n"); }
                            ;
decl                        :   decl_specs init_declarator_list SEMI                        { printf("decl -> decl_specs init_declarator_list SEMI\r\n"); }
                            |   decl_specs SEMI                                             { printf("decl -> decl_specs SEMI\r\n"); }
                            ;
decl_list                   :   decl                                                        { printf("decl_list -> decl\r\n"); }
                            |   decl_list decl                                              { printf("decl_list -> decl_list decl\r\n"); }
                            ;
decl_specs                  :   storage_class_spec decl_specs                               { printf("decl_specs -> storage_class_spec decl_specs\r\n"); }
                            |   storage_class_spec                                          { printf("decl_specs -> storage_class_spec\r\n"); }
                            |   type_spec decl_specs                                        { printf("decl_specs -> type_spec decl_specs\r\n"); }
                            |   type_spec direct_declarator                                 { printf("decl_specs -> type_spec direct_declarator\r\n"); }
                            |   type_spec                                                   { printf("decl_specs -> type_spec\r\n"); }
                            |   type_qualifier decl_specs                                   { printf("decl_specs -> type_qualifier decl_specs\r\n"); }
                            |   type_qualifier                                              { printf("decl_specs -> type_qualifier\r\n"); }
                            ;
storage_class_spec          :   AUTO                                                        { printf("storage_class_spec -> AUTO\r\n"); }
                            |   REGISTER                                                    { printf("storage_class_spec -> REGISTER\r\n"); }
                            |   STATIC                                                      { printf("storage_class_spec -> STATIC\r\n"); }
                            |   EXTERN                                                      { printf("storage_class_spec -> EXTERN\r\n"); }
                            |   TYPEDEF                                                     { printf("storage_class_spec -> TYPEDEF\r\n"); }
                            ;
type_spec                   :   VOID                                                        { printf("type_spec -> VOID\r\n"); }
                            |   CHAR                                                        { printf("type_spec -> CHAR\r\n"); }
                            |   SHORT                                                       { printf("type_spec -> SHORT\r\n"); }
                            |   INT                                                         { printf("type_spec -> INT\r\n"); }
                            |   LONG                                                        { printf("type_spec -> LONG\r\n"); }
                            |   FLOAT                                                       { printf("type_spec -> FLOAT\r\n"); }
                            |   DOUBLE                                                      { printf("type_spec -> DOUBLE\r\n"); }
                            |   SIGNED                                                      { printf("type_spec -> SIGNED\r\n"); }
                            |   UNSIGNED                                                    { printf("type_spec -> UNSIGNED\r\n"); }
                            |   struct_or_union_spec                                        { printf("type_spec -> struct_or_union_spec\r\n"); }
                            |   enum_spec                                                   { printf("type_spec -> enum_spec\r\n"); }
                            |   typedef_name                                                { printf("type_spec -> typedef_name\r\n"); }
                            ;
type_qualifier              :   CONST                                                       { printf("type_qualifier -> CONST\r\n"); }
                            |   VOLATILE                                                    { printf("type_qualifier -> VOLATILE\r\n"); }
                            ;
struct_or_union_spec        :   struct_or_union IDENTITY BRACE_L struct_decl_list BRACE_R   { printf("struct_or_union_spec -> struct_or_union IDENTITY(%s) BRACE_L struct_decl_list BRACE_R\r\n", $2); }
                            |   struct_or_union BRACE_L struct_decl_list BRACE_R            { printf("struct_or_union_spec -> struct_or_union BRACE_L struct_decl_list BRACE_R\r\n"); }
                            |   struct_or_union IDENTITY                                    { printf("struct_or_union_spec -> struct_or_union IDENTITY(%s)\r\n", $2); }
                            ;
struct_or_union             :   STRUCT                                                      { printf("struct_or_union -> STRUCT\r\n"); }
                            |   UNION                                                       { printf("struct_or_union -> UNION\r\n"); }
                            ;
struct_decl_list            :   struct_decl                                                 { printf("struct_decl_list -> struct_decl\r\n"); }
                            |   struct_decl_list struct_decl                                { printf("struct_decl_list -> struct_decl_list struct_decl\r\n"); }
                            ;
init_declarator_list        :   init_declarator                                             { printf("init_declarator_list -> init_declarator\r\n"); }
                            |   init_declarator_list COMMA init_declarator                  { printf("init_declarator_list -> init_declarator_list COMMA init_declarator\r\n"); }
                            ;
init_declarator             :   declarator                                                  { printf("init_declarator -> declarator\r\n"); }
                            |   declarator ASSIGN initializer                               { printf("init_declarator -> declarator ASSIGN initializer\r\n"); }
                            ;
struct_decl                 :   spec_qualifier_list struct_declarator_list SEMI             { printf("struct_decl -> spec_qualifier_list struct_declarator_list SEMI\r\n"); }
                            ;
spec_qualifier_list         :   type_spec spec_qualifier_list                               { printf("spec_qualifier_list -> type_spec spec_qualifier_list\r\n"); }
                            |   type_spec                                                   { printf("spec_qualifier_list -> type_spec\r\n"); }
                            |   type_qualifier spec_qualifier_list                          { printf("spec_qualifier_list -> type_qualifier spec_qualifier_list\r\n"); }
                            |   type_qualifier                                              { printf("spec_qualifier_list -> type_qualifier\r\n"); }
                            ;
struct_declarator_list      :   struct_declarator                                           { printf("struct_declarator_list -> struct_declarator\r\n"); }
                            |   struct_declarator_list COMMA struct_declarator              { printf("struct_declarator_list -> struct_declarator_list COMMA struct_declarator\r\n"); }
                            ;
struct_declarator           :   declarator                                                  { printf("struct_declarator -> declarator\r\n"); }
                            |   declarator COLON const_exp                                  { printf("struct_declarator -> declarator COLON const_exp\r\n"); }
                            |   COLON const_exp                                             { printf("struct_declarator -> COLON const_exp\r\n"); }
                            ;
enum_spec                   :   ENUM IDENTITY BRACE_L enumerator_list BRACE_R               { printf("enum_spec -> ENUM IDENTITY(%s) BRACE_L enumerator_list BRACE_R\r\n", $2); }
                            |   ENUM BRACE_L enumerator_list BRACE_R                        { printf("enum_spec -> ENUM BRACE_L enumerator_list BRACE_R\r\n"); }
                            |   ENUM IDENTITY                                               { printf("enum_spec -> ENUM IDENTITY(%s)\r\n", $2); }
                            ;
enumerator_list             :   enumerator                                                  { printf("enumerator_list -> enumerator\r\n"); }
                            |   enumerator_list COMMA enumerator                            { printf("enumerator_list -> enumerator_list COMMA enumerator\r\n"); }
                            ;
enumerator                  :   IDENTITY                                                    { printf("enumerator -> IDENTITY(%s)\r\n", $1); }
                            |   IDENTITY ASSIGN const_exp                                   { printf("enumerator -> IDENTITY(%s) ASSIGN const_exp\r\n", $1); }
                            ;
declarator                  :   pointer direct_declarator                                   { printf("declarator -> pointer direct_declarator\r\n"); }
                            |   direct_declarator                                           { printf("declarator -> direct_declarator\r\n"); }
                            |   decl_specs                                                  { printf("declarator -> decl_specs\r\n"); }
                            ;
direct_declarator           :   IDENTITY                                                    { printf("direct_declarator -> IDENTITY(%s)\r\n", $1); }
                            |   PARENTHESE_L declarator PARENTHESE_R                        { printf("direct_declarator -> PARENTHESE_L declarator PARENTHESE_R\r\n"); }
                            |   direct_declarator BRACKET_L const_exp BRACKET_R             { printf("direct_declarator -> direct_declarator BRACKET_L const_exp BRACKET_R\r\n"); }
                            |   direct_declarator BRACKET_L BRACKET_R                       { printf("direct_declarator -> direct_declarator BRACKET_L BRACKET_R\r\n"); }
                            |   direct_declarator PARENTHESE_L param_type_list PARENTHESE_R { printf("direct_declarator -> direct_declarator PARENTHESE_L param_type_list PARENTHESE_R\r\n"); }
                            |   direct_declarator PARENTHESE_L id_list PARENTHESE_R         { printf("direct_declarator -> direct_declarator PARENTHESE_L id_list PARENTHESE_R\r\n"); }
                            |   direct_declarator PARENTHESE_L PARENTHESE_R                 { printf("direct_declarator -> direct_declarator PARENTHESE_L PARENTHESE_R\r\n"); }
                            ;
pointer                     :   MUL type_qualifier_list                                     { printf("pointer -> MUL type_qualifier_list\r\n"); }
                            |   MUL                                                         { printf("pointer -> MUL\r\n"); }
                            |   MUL type_qualifier_list pointer                             { printf("pointer -> MUL type_qualifier_list pointer\r\n"); }
                            |   MUL pointer                                                 { printf("pointer -> MUL pointer\r\n"); }
                            ;
type_qualifier_list         :   type_qualifier                                              { printf("type_qualifier_list -> type_qualifier\r\n"); }
                            |   type_qualifier_list type_qualifier                          { printf("type_qualifier_list -> type_qualifier_list type_qualifier\r\n"); }
                            ;
param_type_list             :   param_list                                                  { printf("param_type_list -> param_list\r\n"); }
                            |   param_list COMMA ELLIPSIS                                   { printf("param_type_list -> param_list COMMA ELLIPSIS\r\n"); }
                            ;
param_list                  :   param_decl                                                  { printf("param_list -> param_decl\r\n"); }
                            |   param_list COMMA param_decl                                 { printf("param_list -> param_list COMMA param_decl\r\n"); }
                            ;
param_decl                  :   decl_specs declarator                                       { printf("param_decl -> decl_specs declarator\r\n"); }
                            |   decl_specs abstract_declarator                              { printf("param_decl -> decl_specs abstract_declarator\r\n"); }
                            |   decl_specs                                                  { printf("param_decl -> decl_specs\r\n"); }
                            ;
id_list                     :   IDENTITY                                                    { printf("id_list -> IDENTITY(%s)\r\n", $1); }
                            |   id_list COMMA IDENTITY                                      { printf("id_list -> id_list COMMA IDENTITY(%s)\r\n", $3); }
                            ;
initializer                 :   assignment_exp                                              { printf("initializer -> assignment_exp\r\n"); }
                            |   BRACE_L initializer_list BRACE_R                            { printf("initializer -> BRACE_L initializer_list BRACE_R\r\n"); }
                            |   BRACE_L initializer_list COMMA BRACE_R                      { printf("initializer -> BRACE_L initializer_list COMMA BRACE_R\r\n"); }
                            ;
initializer_list            :   initializer                                                 { printf("initializer_list -> initializer\r\n"); }
                            |   initializer_list COMMA initializer                          { printf("initializer_list -> initializer_list COMMA initializer\r\n"); }
                            ;
type_name                   :   spec_qualifier_list abstract_declarator                     { printf("type_name -> spec_qualifier_list abstract_declarator\r\n"); }
                            |   spec_qualifier_list                                         { printf("type_name -> spec_qualifier_list\r\n"); }
                            ;
abstract_declarator         :   pointer                                                     { printf("abstract_declarator -> pointer\r\n"); }
                            |   pointer direct_abstract_declarator                          { printf("abstract_declarator -> pointer direct_abstract_declarator\r\n"); }
                            |   direct_abstract_declarator                                  { printf("abstract_declarator -> direct_abstract_declarator\r\n"); }
                            ;
direct_abstract_declarator  :   PARENTHESE_L abstract_declarator PARENTHESE_R               { printf("direct_abstract_declarator -> PARENTHESE_L abstract_declarator PARENTHESE_R\r\n"); }
                            |   direct_abstract_declarator BRACKET_L const_exp BRACKET_R    { printf("direct_abstract_declarator -> direct_abstract_declarator BRACKET_L const_exp BRACKET_R\r\n"); }
                            |   BRACKET_L const_exp BRACKET_R                               { printf("direct_abstract_declarator -> BRACKET_L const_exp BRACKET_R\r\n"); }
                            |   direct_abstract_declarator BRACKET_L BRACKET_R              { printf("direct_abstract_declarator -> direct_abstract_declarator BRACKET_L BRACKET_R\r\n"); }
                            |   BRACKET_L BRACKET_R                                         { printf("direct_abstract_declarator -> BRACKET_L BRACKET_R\r\n"); }
                            |   direct_abstract_declarator BRACE_L param_type_list BRACE_R  { printf("direct_abstract_declarator -> direct_abstract_declarator BRACE_L param_type_list BRACE_R\r\n"); }
                            |   BRACE_L param_type_list BRACE_R                             { printf("direct_abstract_declarator -> BRACE_L param_type_list BRACE_R\r\n"); }
                            |   direct_abstract_declarator BRACE_L BRACE_R                  { printf("direct_abstract_declarator -> direct_abstract_declarator BRACE_L BRACE_R\r\n"); }
                            |   BRACE_L BRACE_R                                             { printf("direct_abstract_declarator -> BRACE_L BRACE_R\r\n"); }
                            ;
typedef_name                :   IDENTITY                                                    { printf("typedef_name -> IDENTITY(%s)\r\n", $1); }
                            ;
stat                        :   labeled_stat                                                { printf("stat -> labeled_stat\r\n"); }
                            |   exp_stat                                                    { printf("stat -> exp_stat\r\n"); }
                            |   compound_stat                                               { printf("stat -> compound_stat\r\n"); }
                            |   selection_stat                                              { printf("stat -> selection_stat\r\n"); }
                            |   iteration_stat                                              { printf("stat -> iteration_stat\r\n"); }
                            |   jump_stat                                                   { printf("stat -> jump_stat\r\n"); }
                            ;
labeled_stat                :   IDENTITY COLON stat                                         { printf("labeled_stat -> IDENTITY(%s) COLON stat\r\n", $1); }
                            |   CASE const_exp COLON stat                                   { printf("labeled_stat -> CASE const_exp COLON stat\r\n"); }
                            |   DEFAULT COLON stat                                          { printf("labeled_stat -> DEFAULT COLON stat\r\n"); }
                            ;
exp_stat                    :   COLON SEMI                                                  { printf("exp_stat -> COLON\r\n"); }
                            |   SEMI                                                        { printf("exp_stat -> SEMI\r\n"); }
                            ;
compound_stat               :   BRACE_L decl_list stat_list BRACE_R                         { printf("compound_stat -> BRACE_L decl_list stat_list\r\n"); }
                            |   BRACE_L stat_list BRACE_R                                   { printf("compound_stat -> BRACE_L stat_list BRACE_R\r\n"); }
                            |   BRACE_L decl_list BRACE_R                                   { printf("compound_stat -> BRACE_L decl_list BRACE_R\r\n"); }
                            |   BRACE_L BRACE_R                                             { printf("compound_stat -> BRACE_L BRACE_R\r\n"); }
                            ;
stat_list                   :   stat                                                        { printf("stat_list -> stat\r\n"); }
                            |   stat_list stat                                              { printf("stat_list -> stat_list stat\r\n"); }
                            ;
selection_stat              :   IF PARENTHESE_L exp PARENTHESE_R stat                       { printf("selection_stat -> IF PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
                            |   IF PARENTHESE_L exp PARENTHESE_R stat ELSE stat             { printf("selection_stat -> IF PARENTHESE_L exp PARENTHESE_R stat ELSE stat\r\n"); }
                            |   SWITCH PARENTHESE_L exp PARENTHESE_R stat                   { printf("selection_stat -> SWITCH PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
                            ;
iteration_stat              :   WHILE PARENTHESE_L exp PARENTHESE_R stat                    { printf("iteration_stat -> WHILE PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
                            |   DO stat WHILE PARENTHESE_L exp PARENTHESE_R SEMI            { printf("iteration_stat -> DO stat WHILE PARENTHESE_L exp PARENTHESE_R SEMI\r\n"); }
                            |   FOR PARENTHESE_L exp SEMI exp SEMI exp PARENTHESE_R stat    { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI exp SEMI exp PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L exp SEMI exp SEMI PARENTHESE_R stat        { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI exp SEMI PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L exp SEMI SEMI exp PARENTHESE_R stat        { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI SEMI exp PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L exp SEMI SEMI PARENTHESE_R stat            { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI SEMI PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L SEMI exp SEMI exp PARENTHESE_R stat        { printf("iteration_stat -> FOR PARENTHESE_L SEMI exp SEMI exp PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L SEMI exp SEMI PARENTHESE_R stat            { printf("iteration_stat -> FOR PARENTHESE_L SEMI exp SEMI PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L SEMI SEMI exp PARENTHESE_R stat            { printf("iteration_stat -> FOR PARENTHESE_L SEMI SEMI exp PARENTHESE_R stat\r\n"); }
                            |   FOR PARENTHESE_L SEMI SEMI PARENTHESE_R stat                { printf("iteration_stat -> FOR PARENTHESE_L SEMI SEMI PARENTHESE_R stat\r\n"); }
                            ;
jump_stat                   :   GOTO IDENTITY SEMI                                          { printf("jump_stat -> GOTO IDENTITY(%s) SEMI\r\n", $2); }
                            |   CONTINUE SEMI                                               { printf("jump_stat -> CONTINUE SEMI\r\n"); }
                            |   BREAK SEMI                                                  { printf("jump_stat -> BREAK SEMI\r\n"); }
                            |   RETURN exp SEMI                                             { printf("jump_stat -> RETURN exp SEMI\r\n"); }
                            |   RETURN SEMI                                                 { printf("jump_stat -> RETURN SEMI\r\n"); }
                            ;
exp                         :   assignment_exp                                              { printf("exp -> assignment_exp\r\n"); }
                            |   exp COMMA assignment_exp                                    { printf("exp -> exp COMMA assignment_exp\r\n"); }
                            ;
assignment_exp              :   conditional_exp                                             { printf("assignment_exp -> conditional_exp\r\n"); }
                            |   unary_exp assignment_operator assignment_exp                { printf("assignment_exp -> unary_exp assignment_operator assignment_exp\r\n"); }
                            ;
assignment_operator         :   ASSIGN                                                      { printf("assignment_operator -> ASSIGN\r\n"); }
                            |   ASSIGN_OP                                                   { printf("assignment_operator -> ASSIGN_OP\r\n"); }
                            ;
conditional_exp             :   logical_or_exp                                              { printf("conditional_exp -> logical_or_exp\r\n"); }
                            |   logical_or_exp QUES exp COLON                               { printf("conditional_exp -> logical_or_exp QUES exp COLON\r\n"); }
                            ;
const_exp                   :   conditional_exp                                             { printf("const_exp -> conditional_exp\r\n"); }
                            |   primary_exp                                                 { printf("const_exp -> primary_exp\r\n"); }
                            ;
logical_or_exp              :   logical_and_exp                                             { printf("logical_or_exp -> logical_and_exp\r\n"); }
                            |   logical_or_exp OR logical_and_exp                           { printf("logical_or_exp -> logical_or_exp OR logical_and_exp\r\n"); }
                            ;
logical_and_exp             :   inclusive_or_exp                                            { printf("logical_and_exp -> inclusive_or_exp\r\n"); }
                            |   logical_and_exp AND inclusive_or_exp                        { printf("logical_and_exp -> logical_and_exp AND inclusive_or_exp\r\n"); }
                            ;
inclusive_or_exp            :   exclusive_or_exp                                            { printf("inclusive_or_exp -> exclusive_or_exp\r\n"); }
                            |   inclusive_or_exp OR_OP exclusive_or_exp                     { printf("inclusive_or_exp -> inclusive_or_exp OR_OP exclusive_or_exp\r\n"); }
                            ;
exclusive_or_exp            :   and_exp                                                     { printf("exclusive_or_exp -> and_exp\r\n"); }
                            |   exclusive_or_exp XOR_OP and_exp                             { printf("exclusive_or_exp -> exclusive_or_exp XOR_OP and_exp\r\n"); }
                            ;
and_exp                     :   equality_exp                                                { printf("and_exp -> equality_exp\r\n"); }
                            |   and_exp AND_OP equality_exp                                 { printf("and_exp -> and_exp AND_OP equality_exp\r\n"); }
                            ;
equality_exp                :   relational_exp                                              { printf("equality_exp -> relational_exp\r\n"); }
                            |   equality_exp EQUAL relational_exp                           { printf("equality_exp -> equality_exp EQUAL relational_exp\r\n"); }
                            |   equality_exp NOT_EQUAL relational_exp                       { printf("equality_exp -> equality_exp NOT_EQUAL relational_exp\r\n"); }
                            ;
relational_exp              :   shift_expression                                            { printf("relational_exp -> shift_expression\r\n"); }
                            |   relational_exp LESSER shift_expression                      { printf("relational_exp -> relational_exp LESSER shift_expression\r\n"); }
                            |   relational_exp GREATER shift_expression                     { printf("relational_exp -> relational_exp GREATER shift_expression\r\n"); }
                            |   relational_exp LEQUAL shift_expression                      { printf("relational_exp -> relational_exp LEQUAL shift_expression\r\n"); }
                            |   relational_exp GEQUAL shift_expression                      { printf("relational_exp -> relational_exp GEQUAL shift_expression\r\n"); }
                            ;
shift_expression            :   additive_exp                                                { printf("shift_expression -> additive_exp\r\n"); }
                            |   shift_expression MOVE_L additive_exp                        { printf("shift_expression -> shift_expression MOVE_L additive_exp\r\n"); }
                            |   shift_expression MOVE_R additive_exp                        { printf("shift_expression -> shift_expression MOVE_R additive_exp\r\n"); }
                            ;
additive_exp                :   mult_exp                                                    { printf("additive_exp -> mult_exp\r\n"); }
                            |   additive_exp ADD mult_exp                                   { printf("additive_exp -> additive_exp ADD mult_exp\r\n"); }
                            |   additive_exp SUB mult_exp                                   { printf("additive_exp -> additive_exp SUB mult_exp\r\n"); }
                            ;
mult_exp                    :   cast_exp                                                    { printf("mult_exp -> cast_exp\r\n"); }
                            |   mult_exp MUL cast_exp                                       { printf("mult_exp -> mult_exp MUL cast_exp\r\n"); }
                            |   mult_exp DIV cast_exp                                       { printf("mult_exp -> mult_exp DIV cast_exp\r\n"); }
                            |   mult_exp MOD cast_exp                                       { printf("mult_exp -> mult_exp MOD cast_exp\r\n"); }
                            ;
cast_exp                    :   unary_exp                                                   { printf("cast_exp -> unary_exp\r\n"); }
                            |   PARENTHESE_L type_name PARENTHESE_R cast_exp                { printf("cast_exp -> PARENTHESE_L type_name PARENTHESE_R cast_exp\r\n"); }
                            ;
unary_exp                   :   postfix_exp                                                 { printf("unary_exp -> postfix_exp\r\n"); }
                            |   POST_ADD unary_exp                                          { printf("unary_exp -> POST_ADD unary_exp\r\n"); }
                            |   POST_SUB unary_exp                                          { printf("unary_exp -> POST_SUB unary_exp\r\n"); }
                            |   unary_operator cast_exp                                     { printf("unary_exp -> unary_operator cast_exp\r\n"); }
                            |   SIZEOF unary_exp                                            { printf("unary_exp -> SIZEOF unary_exp\r\n"); }
                            |   SIZEOF PARENTHESE_L type_name PARENTHESE_R                  { printf("unary_exp -> PARENTHESE_L type_name PARENTHESE_R\r\n"); }
                            ;
unary_operator              :   AND_OP                                                      { printf("unary_operator -> AND_OP\r\n"); }
                            |   MUL                                                         { printf("unary_operator -> MUL\r\n"); }
                            |   ADD                                                         { printf("unary_operator -> ADD\r\n"); }
                            |   SUB                                                         { printf("unary_operator -> SUB\r\n"); }
                            |   NEG                                                         { printf("unary_operator -> NEG\r\n"); }
                            |   NOT                                                         { printf("unary_operator -> NOT\r\n"); }
                            ;
postfix_exp                 :   primary_exp                                                 { printf("postfix_exp -> primary_exp\r\n"); }
                            |   postfix_exp BRACKET_L exp BRACKET_R                         { printf("postfix_exp -> postfix_exp BRACKET_L exp BRACKET_R\r\n"); }
                            |   postfix_exp PARENTHESE_L argument_exp_list PARENTHESE_R     { printf("postfix_exp -> postfix_exp PARENTHESE_L argument_exp_list PARENTHESE_R\r\n"); }
                            |   postfix_exp PARENTHESE_L PARENTHESE_R                       { printf("postfix_exp -> postfix_exp PARENTHESE_L PARENTHESE_R\r\n"); }
                            |   postfix_exp DOT IDENTITY                                    { printf("postfix_exp -> postfix_exp DOT IDENTITY(%s)\r\n", $3); }
                            |   postfix_exp PELEMENT IDENTITY                               { printf("postfix_exp -> postfix_exp PELEMENT IDENTITY(%s)\r\n", $3); }
                            |   postfix_exp POST_ADD                                        { printf("postfix_exp -> postfix_exp POST_ADD\r\n"); }
                            |   postfix_exp POST_SUB                                        { printf("postfix_exp -> postfix_exp POST_SUB\r\n"); }
                            ;
primary_exp                 :   IDENTITY                                                    { printf("primary_exp -> IDENTITY(%s)\r\n", $1); }
                            |   const_type                                                  { printf("primary_exp -> const_type\r\n"); }
                            |   STRING                                                      { printf("primary_exp -> STRING\r\n"); }
                            |   PARENTHESE_L exp PARENTHESE_R                               { printf("primary_exp -> PARENTHESE_L exp PARENTHESE_R\r\n"); }
                            ;
argument_exp_list           :   assignment_exp                                              { printf("argument_exp_list -> assignment_exp\r\n"); }
                            |   argument_exp_list COMMA assignment_exp                      { printf("argument_exp_list -> argument_exp_list COMMA assignment_exp\r\n"); }
                            ;
const_type                  :   INT_NUM                                                     { printf("const_type -> INT_NUM(%s)\r\n", $1); }
                            |   FLOAT_NUM                                                    { printf("const_type -> FLOAT_NUM(%s)\r\n", $1); }
                            |   STRING                                                      { printf("const_type -> STRING(%s)\r\n", $1); }
                            ;
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