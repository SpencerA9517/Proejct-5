//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_SCHEMELIST_H
#define PROJECT1_STARTER_CODE_SCHEMELIST_H

#endif //PROJECT1_STARTER_CODE_SCHEMELIST_H
#include "Scheme.h"

class SchemeList{
public:
    Scheme scheme;
    SchemeList* child;
    SchemeList(bool head, std::vector<Token*> tokens, int* i);
    std::string ToString();
};