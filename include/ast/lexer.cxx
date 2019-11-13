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
    /**
     * @brief get token serial
     * @param code content
     * @return token vector
    */
    const std::vector<Token>& getTok(const std::string& code);
    void lexerror(const int& idx, const char& c, TokState& tokstate);
    const bool& issymbol(const char& c);
    const bool& isdot(const char& c);
    const bool& iscomment_l(const std::string& str);
    const bool& iscomment_r(const std::string& str);
    const bool& iscomment_line(const std::string& str);
    const bool& iskeyword(const std::string& str);
}
const std::vector<deplog::Token>& deplog::getTok(const std::string& code)
{
    std::vector<deplog::Token> res;
    TokState tokstate = TokState::START;
    tokstate =  TokState::S1;
    std::string value = "";
    for (unsigned int idx = 0; idx < code.size(); idx++)
    {
        if (tokstate == TokState::S1)
        {
            if (std::isblank(code[idx]))
                tokstate = TokState::S1;
            else if (std::isalpha(code[idx]))
                tokstate = TokState::S2;
            else if (std::isdigit(code[idx]))
                tokstate = TokState::S3;
            else if (issymbol(code[idx]))
                tokstate = TokState::S5;
            else
            {
                lexerror(idx, code[idx], tokstate);
                continue;
            }
        }
        else if (tokstate == TokState::S2)
        {
            if (std::isalpha(code[idx]) || std::isdigit(code[idx]))
                tokstate = TokState::S2;
            else if (std::isblank(code[idx]) || issymbol(code[idx]) || std::iscntrl(code[idx]))
            {
                Token tok(value);
                /* check value */
                if (iskeyword(value))
                    tok.Type = TokType::tok_keyword;
                else
                    tok.Type = TokType::tok_identity;
                res.push_back(tok);
                value = "";
                tokstate = TokState::S1;
                idx--;
                continue;
            }
            else
            {
                lexerror(idx, code[idx], tokstate);
                continue;
            }
            
        }
        else if (tokstate == TokState::S3)
        {
            if (std::isdigit(code[idx]))
                tokstate = TokState::S3;
            else if (isdot(code[idx]))
                tokstate = TokState::S4;
            else if (std::isblank(code[idx]) || issymbol(code[idx]) || std::iscntrl(code[idx]))
            {
                Token tok(value, TokType::tok_int_num);
                res.push_back(tok);
                value = "";
                tokstate = TokState::S1;
                idx--;
                continue;
            }
            else
            {
                lexerror(idx, code[idx], tokstate);
                continue;
            }
        }
        else if (tokstate == TokState::S4)
        {
            if (std::isdigit(code[idx]))
                tokstate = TokState::S4;
            else if (std::isblank(code[idx]) || issymbol(code[idx]) || std::iscntrl(code[idx]))
            {
                Token tok(value, TokType::tok_float_num);
                res.push_back(tok);
                value = "";
                tokstate = TokState::S1;
                idx--;
                continue;
            }
            else
            {
                lexerror(idx, code[idx], tokstate);
                continue;
            }
        }
        else if (tokstate == TokState::S5)
        {
            if (issymbol(code[idx]))
                tokstate = TokState::S5;
            else if (std::isblank(code[idx]) || std::isdigit(code[idx]) || std::isalpha(code[idx]) || std::iscntrl(code[idx]))
            {
                Token tok(value);
                /* need to add comment token */
                res.push_back(tok);
                value = "";
                tokstate = TokState::S1;
                idx--;
                continue;
            }
            else
            {
                lexerror(idx, code[idx], tokstate);
                continue;
            }
        }
        else
        {
            std::fprintf(stderr, "lexing error, unknow state\r\n");
            return res;
        }
        value += code[idx];
    }
    return res;
}
void deplog::lexerror(const int& idx, const char& c, TokState& tokstate)
{
    std::fprintf(stderr, "lexing error, idx=%d, char=%c, state=%d\r\n", idx, c, tokstate);
    tokstate = TokState::S1;
}
const bool& deplog::iskeyword(const std::string& str)
{
    return str.c_str() == "for" || str.c_str() == "int";
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
        (0x7B <= c && c <= 0x7E)) && !(isdot(c) || std::iscntrl(c));
}
const bool& deplog::isdot(const char& c)
{
    return c == '.';
}
enum deplog::TokType
{
    /* keyword */
    tok_keyword         ,   // when scanning an identity, check if it is a keyword
    /* symbol */
    tok_symbol          ,
    /* dynamic token */
    tok_identity        ,   // [a-zA-Z][a-zA-Z0-9_]*
    tok_int_num         ,   // -+[0-9]+
    tok_float_num       ,   // -+[0-9]+\.[0-9]*
    tok_hex_num         ,   // 0x[0-9a-fA-F]+
    /* control */
    tok_ctrl
};
enum deplog::TokState
{
    START,
    S1, S2, S3, S4, S5
};
class deplog::Token
{
public:
    std::string Value;
    deplog::TokType Type;
    Token(){}
    Token(std::string Value)
        : Value(Value) {}
    Token(std::string Value, deplog::TokType Type)
        : Value(Value), Type(Type) {}
};