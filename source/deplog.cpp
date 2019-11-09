#include <cstdio>
#include <string>
#include <vector>

#include "scope.h"

void test1();

int main(int argc, char** argv)
{
    test1();
    return 0;
}

void test1()
{
    std::vector<std::string> scopes = deplog::scopes_extract("examples/test1.c");
    printf("checking scope...\r\n");
    for (int i = 0; i < scopes.size(); i++)
        printf("scope %d:\r\n%s\r\n", i + 1, scopes[i].c_str());
}