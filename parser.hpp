#include <cstdlib>
#include <string>
#include <vector>
#include "lexer.hpp"
#ifndef PARSER_H
#define PAPSER_H

namespace parser {
    int parse(std::vector<lexer::token> tokens) {
        int len = tokens.size();
        if (len == 0) {
            return 0;
        }
        else {
            
        }
        return 0;
    }
};

#endif