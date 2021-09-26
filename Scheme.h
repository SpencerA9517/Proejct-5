//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_SCHEME_H
#define PROJECT1_STARTER_CODE_SCHEME_H

#endif //PROJECT1_STARTER_CODE_SCHEME_H
#include <string>
#include "IDList.h"

class Scheme{
public:

    std::string name;
    IDList parameters;
    Scheme();
    Scheme(std::vector<Token*> tokens, int* i);
    std::string ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};