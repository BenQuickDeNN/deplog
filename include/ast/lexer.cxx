#include <cctype>
#include <string>
#include <vector>

namespace deplog
{
    static const std::vector<std::string> DictKeyWord;
    static const std::vector<std::string> DictOperator;
    static const std::vector<std::string> DictUnaryOperator;
    enum TokType;
    enum TokState;
    class Token;
    std::vector<Token> getTokens(const std::string& code);
    const bool& issymbol(const char& c);
    const bool& isdot(const char& c);
    const bool& iscomment_l(const std::string& str);
    const bool& iscomment_r(const std::string& str);
    const bool& iscomment_line(const std::string& str);
    const bool& isnext_line(const char& c);
}
const bool& deplog::isnext_line(const char& c)
{
    return c == '\n';
}
const bool& deplog::iscomment_line(const std::string& str)
{
    return str.c_str == "//";
}
const bool& deplog::iscomment_r(const std::string& str)
{
    return str.c_str() == "*/";
}
const bool& deplog::iscomment_l(const std::string& str)
{
    return str.c_str() == "/*";
}
const bool& deplog::issymbol(const char& c)
{
    /* check ASCII range */
    return ((0x21 <= c && c <= 0x2F) ||
        (0x3A <= c && c <= 0x40) || (0x5B <= c && c <= 0x60) ||
        (0x7B <= c && c <= 0x7E)) && !(isdot(c) || isnext_line(c));
}
const bool& deplog::isdot(const char& c)
{
    return c == '.';
}
static const std::vector<std::string> deplog::DictKeyWord = {
    "for"
};
static const std::vector<std::string> deplog::DictOperator = {
    "<",
    ">",
    "+",
    "-"
};
static const std::vector<std::string> deplog::DictUnaryOperator = {
    "++",
    "--"
};
enum deplog::TokType
{
    /* keyword */
    tok_keyword         ,   // when scanning an identity, check if it is a keyword
    /* operator */
    tok_less_than       ,   // <
    tok_greater_than    ,   // >
    /* unary operator */
    tok_postfix_add     ,   // ++
    tok_postfix_sub     ,   // --
    /* assignment */
    tok_assign          ,   // =
    /* single symbol */
    tok_single_symbol   ,
    /* dynamic token */
    tok_identity        ,   // [a-zA-Z][a-zA-Z0-9_]*
    tok_int_num         ,   // -+[0-9]+
    tok_float_num       ,   // -+[0-9]+\.[0-9]*
    tok_bytes               // 0x[0-9a-fA-F]+
};
enum deplog::TokState
{
    START,
    LESS_THAN_1,    // <
    GREATER_THAN_1, // >
    ADD_1,          // +
    ADD_2,          // ++
    SUB_1,          // -
    SUB_2,          // --
    ASSIGN_1,       // =
    ASSIGN_2,       // ==
    PARENTHESE_L_1, // (
    PARENTHESE_R_1, // )
    BRACKET_L_1,    // [
    BRACKET_R_2,    // ]
    BRACE_L_1,      // {
    BRACE_R_1,      // }
    SEMI_1,         // ;
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