//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_FACT_H
#define PROJECT1_STARTER_CODE_FACT_H


#include <string>
#include "StringList.h"
#include <iostream>

class Fact{
public:

    std::string name;
    StringList strings;
    Fact();
    Fact(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};
#endif //PROJECT1_STARTER_CODE_FACT_H