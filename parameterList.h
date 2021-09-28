//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_PARAMETERLIST_H
#define PROJECT1_STARTER_CODE_PARAMETERLIST_H

#include <string>
#include <vector>
#include "Token.h"
#include "parameter.h"
#include <iostream>

class ParameterList {

public:
    Parameter text;
    ParameterList* child;
    ParameterList();
    ParameterList(bool head, std::vector<Token*> tokens, int* i);
    void ToString(bool head);
};
#endif //PROJECT1_STARTER_CODE_PARAMETERLIST_H