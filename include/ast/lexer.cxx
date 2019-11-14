#include <cctype>
#include <string>
#include <vector>

namespace deplog
{
    /**
     * @brief type of token
    */
    enum TokType
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
    /**
     * @brief states of FSM
    */
    enum TokState
    {
        START,
        S1, S2, S3, S4, S5, S5_1, S6, S7, S8, S9,
        S_COMMENT, S_COMMENT_LINE
    };
    /**
     * @brief class of token
    */
    class Token
    {
    public:
        std::string Value;
        deplog::TokType Type;
        unsigned int line;
        unsigned int col;
        Token(){}
        Token(const std::string& Value)
            : Value(Value) {}
        Token(const std::string& Value, const deplog::TokType& Type)
            : Value(Value), Type(Type) {}
        Token(const std::string& Value, const deplog::TokType& Type, 
            const unsigned int& line, const unsigned int& col)
            : Value(Value), Type(Type), line(line), col(col) {}
    };
    /**
     * @brief get token serial
     * @param code content
     * @return token vector
    */
    std::vector<Token> getToks(const std::string& code);
    /**
     * @brief log error when lexing
     * @param line index of line
     * @param col indedx of column
     * @param c current character
     * @param tokstate current state
     * @param value current value
    */
    void lexerror(const unsigned int& line, const unsigned int& col, const char& c, 
        TokState& tokstate, std::string& value);
    /**
     * @brief generate token
     * @param value current value
     * @param toktype the token type of token generated
     * @param line current line
     * @param col current column
     * @param tokens the token list
     * @param idx current index
     * @param tokstate current token state of FSM
    */
    void genTok(const std::string& value, const TokType& toktype, 
        const unsigned int& line, const unsigned int& col, 
        std::vector<Token>& tokens, unsigned int& idx, 
        TokState& tokstate);
    /**
     * @brief judge if a character is a symbol
     * @param c character
     * @return true->symbol; false->not a symbol
    */
    bool issymbol(const char& c);
    /**
     * @brief judge if a character can be located after a symbol
     * @param c character
     * @return true->legal location; false->illegal location
    */
    bool issymbol_2(const char& c);
    /**
     * @brief judge if a character is a dot
     * @param c character
     * @return true->dot; false->not a dot
    */
    bool isdot(const char& c);
    /**
     * @brief judge if a string is "/*"
     * @param str string
     * @return true->"/*"; false->not "/*"
    */
    bool iscomment_l(const std::string& str);
    /**
     * @brief judge if a string is "*\/"
     * @param str string
     * @return true->"*\/"; false->not "*\/"
    */
    bool iscomment_r(const std::string& str);
    /**
     * @brief judge if a string is "//"
     * @param str string
     * @return true->"//"; false->not "//"
    */
    bool iscomment_line(const std::string& str);
    /**
     * @brief judge if a string is keyword
     * @param str string
     * @return true->a keyword; false->not a keyword
    */
    bool iskeyword(const std::string& str);
    /**
     * @brief judge if a character is '/'
     * @param c character
     * @return true->"/"; false->not "/"
    */
    bool isdiv(const char& c);
    /**
     * @brief judge if a character is '*'
     * @param c character
     * @return true->"*"; false->not "*"
    */
    bool ismul(const char& c);
    /**
     * @brief judge if a character is '0'
     * @param c character
     * @return true->"0"; false->not "0"
    */
    bool iszero(const char& c);
    /**
     * @brief judge if a character is '0'
     * @param c character
     * @return true->"0"; false->not "0"
    */
    bool isx(const char& c);
    /**
     * @brief judge if a character is [a-fA-F]
     * @param c character
     * @return true->[a-fA-F]; false->not [a-fA-F]
    */
    bool ishexchar(const char& c);
}
std::vector<deplog::Token> deplog::getToks(const std::string& code)
{
    std::vector<deplog::Token> res;
    TokState tokstate = TokState::START;
    tokstate =  TokState::S1;
    std::string value = "";
    unsigned int line = 1;
    unsigned int col = 0;
    for (unsigned int idx = 0; idx < code.size(); idx++)
    {
        if (idx > 0)
            if (code[idx - 1] == '\n')
            {
                line++;
                col = 0;
            }
        col++;
        if (tokstate == TokState::S1)
        {
            if (std::isblank(code[idx]) || std::iscntrl(code[idx]))
                tokstate = TokState::S1;
            else if (std::isalpha(code[idx]))
            {
                tokstate = TokState::S2;
                value = "";
            }
            else if (iszero(code[idx]))
            {
                tokstate = TokState::S6;
                value = "";
            }
            else if (std::isdigit(code[idx]))
            {
                tokstate = TokState::S3;
                value = "";
            }
            else if (isdiv(code[idx]))
                tokstate = TokState::S8;
            else if (issymbol(code[idx]))
            {
                tokstate = TokState::S5;
                value = "";
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
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
                    genTok(value, TokType::tok_keyword, line, col, res, idx, tokstate);
                else
                    genTok(value, TokType::tok_identity, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
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
                genTok(value, TokType::tok_int_num, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S4)
        {
            if (std::isdigit(code[idx]))
                tokstate = TokState::S4;
            else if (std::isblank(code[idx]) || issymbol(code[idx]) || std::iscntrl(code[idx]))
            {
                genTok(value, TokType::tok_float_num, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S5)
        {
            if (issymbol_2(code[idx]))
                tokstate = TokState::S5_1;
            else if (std::isblank(code[idx]) || std::isdigit(code[idx]) || 
                std::isalpha(code[idx]) || std::iscntrl(code[idx]) || 
                issymbol(code[idx]))
            {
                genTok(value, TokType::tok_symbol, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S5_1)
        {
            if (std::isblank(code[idx]) || std::isdigit(code[idx]) || 
                std::isalpha(code[idx]) || std::iscntrl(code[idx]) || 
                issymbol(code[idx]))
            {
                genTok(value, TokType::tok_symbol, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S6)
        {
            if (isx(code[idx]))
                tokstate = TokState::S7;
            else if (std::isdigit(code[idx]))
                tokstate = TokState::S3;
            else if (std::isblank(code[idx]) || issymbol(code[idx]))
            {
                genTok(value, TokType::tok_int_num, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S7)
        {
            if (ishexchar(code[idx]))
                tokstate = TokState::S7;
            else if (std::isblank(code[idx]) || issymbol(code[idx]) ||
                std::iscntrl(code[idx]))
            {
                genTok(value, TokType::tok_hex_num, line, col, res, idx, tokstate);
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
            
        }
        else if (tokstate == TokState::S8)
        {
            if (ismul(code[idx]))
            {
                tokstate = TokState::S_COMMENT;
                value = "";
                continue;
            }
            else if (isdiv(code[idx]))
            {
                tokstate = TokState::S_COMMENT_LINE;
                value = "";
                continue;
            }
            else
                tokstate = TokState::S5;
        }
        else if (tokstate == TokState::S_COMMENT)
        {
            if (ismul(code[idx]))
            {
                tokstate = TokState::S9;
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S9)
        {
            if (isdiv(code[idx]))
            {
                tokstate = TokState::S1;
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
                continue;
            }
        }
        else if (tokstate == TokState::S_COMMENT_LINE)
        {
            if (std::iscntrl(code[idx]))
            {
                tokstate = TokState::S1;
                continue;
            }
            else
            {
                lexerror(line, col, code[idx], tokstate, value);
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
void deplog::lexerror(const unsigned int& line, const unsigned int& col, const char& c, 
    TokState& tokstate, std::string& value)
{
    std::fprintf(stderr, "lexing error, line=%d, col=%d, char='%c', state=%d\r\n", 
        line, col, c, tokstate);
    tokstate = TokState::S1;
    value = "";
}
void deplog::genTok(const std::string& value, const TokType& toktype, 
    const unsigned int& line, const unsigned int& col, 
    std::vector<Token>& tokens, unsigned int& idx, TokState& tokstate)
{
    Token tok(value, toktype, line, col - value.size());
    tokens.push_back(tok);
    idx--;
    tokstate = TokState::S1;
}
bool deplog::ishexchar(const char& c)
{
    return std::isdigit(c) || ('a' <= c && c <= 'f') || 
        ('A' <= c && c <= 'F');
}
bool deplog::isx(const char& c)
{
    return c == 'x';
}
bool deplog::iszero(const char& c)
{
    return c == '0';
}
bool deplog::ismul(const char& c)
{
    return c == '*';
}
bool deplog::isdiv(const char& c)
{
    return c == '/';
}
bool deplog::iskeyword(const std::string& str)
{
    return str.c_str() == "for" || str.c_str() == "int";
}
bool deplog::iscomment_line(const std::string& str)
{
    return str.c_str() == "//";
}
bool deplog::iscomment_r(const std::string& str)
{
    return str.c_str() == "*/";
}
bool deplog::iscomment_l(const std::string& str)
{
    return str.c_str() == "/*";
}
bool deplog::issymbol_2(const char& c)
{
    return c == '+' || c == '-' || c == '*' || c == '=' ||
        c == '/';
}
bool deplog::issymbol(const char& c)
{
    /* check ASCII range */
    return ((0x21 <= c && c <= 0x2F) ||
        (0x3A <= c && c <= 0x40) || (0x5B <= c && c <= 0x60) ||
        (0x7B <= c && c <= 0x7E)) && !(isdot(c) || std::iscntrl(c));
}
bool deplog::isdot(const char& c)
{
    return c == '.';
}