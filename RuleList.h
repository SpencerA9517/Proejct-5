//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_RULELIST_H
#define PROJECT1_STARTER_CODE_RULELIST_H

#include "Rule.h"

class RuleList{
public:
    Rule rule;
    RuleList* child;
    RuleList();
    RuleList(bool head, std::vector<Token*> tokens, int* i);
    void ToString();
};

#endif //PROJECT1_STARTER_CODE_RULELIST_H