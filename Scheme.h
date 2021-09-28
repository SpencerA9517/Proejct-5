//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_SCHEME_H
#define PROJECT1_STARTER_CODE_SCHEME_H

#include <string>
#include "IDList.h"
#include <iostream>

class Scheme{
public:

    std::string name;
    IDList IDs;
    Scheme();
    Scheme(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};

#endif //PROJECT1_STARTER_CODE_SCHEME_H