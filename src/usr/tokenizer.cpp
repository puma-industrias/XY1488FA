#include"tokenizer.h"
#include<cctype>
std::vector<Token> tokenize(const char* expr){
    std::vector<Token> tokens;
    int i=0;
    while (expr[i]!='\0'){
        if(isdigit(expr[i])){
            int value=0;
            while(isdigit(expr[i])){
                value=value*10+(expr[i]-'0');
                i++;    
            }
            Token t;
            t.type=TOKEN_NUMBER;
            t.value=value;
            tokens.push_back(t);
            continue;
        }
        if(expr[i]=='+'||expr[i]=='-'||
            expr[i]=='*'||expr[i]=='/'){
                Token t;
                t.type=TOKEN_OPERATOR;
                t.op=expr[i];
                tokens.push_back(t);
                i++;
                continue;
            }
        i++;
    }
    return tokens;
}