//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_PREDICATE_H
#define PROJECT1_STARTER_CODE_PREDICATE_H

#include <string>
#include "parameterList.h"
#include <iostream>

class Predicate{
public:

    std::string name;
    ParameterList parameters;
    Predicate();
    Predicate(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};
#endif //PROJECT1_STARTER_CODE_PREDICATE_H