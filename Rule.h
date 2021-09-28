//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_RULE_H
#define PROJECT1_STARTER_CODE_RULE_H

#include <string>
#include "HeadPredicate.h"
#include "predicateList.h"
#include "StringList.h"
#include <iostream>

class Rule{
public:

    HeadPredicate headPred;
    PredicateList predicates;
    Rule();
    Rule(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};

#endif //PROJECT1_STARTER_CODE_RULE_H