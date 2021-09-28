//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_PREDICATELIST_H
#define PROJECT1_STARTER_CODE_PREDICATELIST_H

#include <string>
#include <vector>
#include "Token.h"
#include "predicate.h"
#include <iostream>

class PredicateList {
public:

    Predicate text;
    PredicateList* child;
    PredicateList();
    PredicateList(bool head, std::vector<Token*> tokens, int* i);
    void ToString(bool head);
};
#endif //PROJECT1_STARTER_CODE_PARAMETERLIST_H