#ifndef PARSE_PART_H
#define PARSE_PART_H
#include "Token.h"
#include <vector>

class ParsePart
{
protected:
    int index = 0;

public:
    ParsePart();
    std::vector<TokenType> follow;
    std::vector<TokenType> first;
    void Push(std::string* output);

    // Every subclass must define this method
    //virtual void S0(const std::string& input) = 0;
};

#endif // PARSE_PART_H

