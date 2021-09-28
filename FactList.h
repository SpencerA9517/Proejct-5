//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_FACTLIST_H
#define PROJECT1_STARTER_CODE_FACTLIST_H

#include "Fact.h"

class FactList{
public:
    Fact fact;
    FactList* child;
    FactList();
    FactList( std::vector<Token*> tokens, int* i);
    void ToString();
};

#endif //PROJECT1_STARTER_CODE_FACTLIST_H