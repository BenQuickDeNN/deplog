#include <cstdio>
#include <string>
#include <vector>

#include "scope.h"
#include "ast.h"

void test1();
void test2();
void test3();

int main(int argc, char** argv)
{
    test2();
    return 0;
}

void test1()
{
    std::vector<std::string> scopes = deplog::scopes_extract("examples/test1.c");
    printf("checking scope...\r\n");
    for (int i = 0; i < scopes.size(); i++)
        printf("scope %d:\r\n%s", i + 1, scopes[i].c_str());
}
void test2()
{
    std::vector<std::string> scopes = deplog::scopes_extract("examples/test1.c");
    printf("checking scope...\r\n");
    for (int i = 0; i < scopes.size(); i++)
    {
        printf("scope %d:\r\n%s", i + 1, scopes[i].c_str());
        std::vector<deplog::Token> tokens = deplog::getToks(scopes[i]);
        printf("checking tokens list %d:\r\n", i + 1);
        for (int j = 0; j < tokens.size(); j++)
        {
            printf("\ttokens[%d] = {value = \"%s\", type = %d, line = %d, col = %d}\r\n", 
                j, tokens[j].Value.c_str(), tokens[j].Type, tokens[j].line, tokens[j].col);
        }
    }
}
void test3()
{
    if (std::iscntrl('\n'))
        printf("LF(%d) is a cntrl\r\n", '\n');
}