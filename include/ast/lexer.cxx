#include <string>

namespace deplog
{
    enum TokType;
    enum TokState;
    class Token;
}
enum deplog::TokType
{
    /* keyword */
    tok_for             ,   // for
    /* operator */
    tok_less_than       ,   // <
    tok_greater_than    ,   // >
    /* unary operator */
    tok_postfix_add     ,   // ++
    tok_postfix_sub     ,   // --
    /* assignment */
    tok_assign          ,   // =
    /* symbol */
    tok_parenthese_l    ,   // (
    tok_parenthese_r    ,   // )
    tok_bracket_l       ,   // [
    tok_bracket_r       ,   // ]
    tok_brace_l         ,   // {
    tok_brace_r         ,   // }
    tok_semi            ,   // ;
    /* dynamic token */
    tok_identify        ,   // [a-zA-Z][a-zA-Z0-9_]*
    tok_int_num         ,   // -+[0-9]+
    tok_float_num       ,   // -+[0-9]+\.[0-9]*
    tok_bytes               // 0x[0-9a-fA-F]+
};
enum deplog::TokState
{
    START,
    S1
};
class deplog::Token
{
public:
    std::string Value;
    deplog::TokType Type;
    Token(){}
    Token(std::string Value, deplog::TokType Type)
        : Value(Value), Type(Type) {}
};