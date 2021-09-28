//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_PARAMETER_H
#define PROJECT1_STARTER_CODE_PARAMETER_H

#include <string>
#include <vector>
#include "Token.h"

class Parameter{
public:
    std::string text;
    Parameter();
    Parameter(std::vector<Token*> tokens, int* i);
};

#endif //PROJECT1_STARTER_CODE_PARAMETER_H