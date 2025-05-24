#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#ifndef LEXER_H
#define LEXER_H

namespace lexer {
    typedef struct {
        std::string type;
        std::string value;
    } token;
    std::vector<token> lexering(std::string code) {
        std::vector<token> tokens;
        std::string buffer;
        token newtoken;
        std::cout<<"LEXERINFO: Variables init"<<std::endl;
        for (int i = 0; i != code.size(); i++) {
            std::cout<<"LEXERINFO: Start cycle iterate"<<std::endl;
            char symb = code[i];
            std::cout<<"LEXERINFO: Symbol "<<symb<<std::endl;
            switch (symb) {
                case '=':
                    if (code[i+1] == '=') {
                        i++;
                        newtoken = {"EQUALS", "NONE"};
                        tokens.push_back(newtoken);
                    }
                    else {
                        newtoken = {"EQUAL", "NONE"};
                        tokens.push_back(newtoken);
                    }
                    break;
                case ' ':
                    newtoken = {"SPACE", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case '0':
                    buffer = "";
                    buffer += symb;
                    newtoken = {"DIGIT", buffer};
                    tokens.push_back(newtoken);
                    break;
                case '+':
                    newtoken = {"PLUS", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case '-':
                    newtoken = {"MINUS", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case '*':
                    newtoken = {"STAR", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case '/':
                    newtoken = {"SLASH", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case '(':
                    newtoken = {"L_PAREN", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                case ')':
                    newtoken = {"R_PAREN", "NONE"};
                    tokens.push_back(newtoken);
                    break;
                default:
                    buffer = "";
                    buffer += symb;
                    newtoken = {"UWNKOWN", buffer};
                    tokens.push_back(newtoken);
                    break;
            }
        }
        return tokens;
    }
};
#endif
