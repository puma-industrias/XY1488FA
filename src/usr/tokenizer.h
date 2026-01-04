#pragma once
#include<vector>
enum TokenType{
    TOKEN_NUMBER,
    TOKEN_OPERATOR
};
struct Token{
    TokenType type;
    int value;
    char op;
};
std::vector<Token>tokenize(const char* expr);
