//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_HeadPredicate_H
#define PROJECT1_STARTER_CODE_HeadPredicate_H

#include <string>
#include "IDList.h"
#include <iostream>

class HeadPredicate{
public:

    std::string name;
    IDList IDs;
    HeadPredicate();
    HeadPredicate(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};

#endif //PROJECT1_STARTER_CODE_HeadPredicate_H