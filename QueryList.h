//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_QUERYLIST_H
#define PROJECT1_STARTER_CODE_QUERYLIST_H

#include "Query.h"

class QueryList{
public:
    Query query;
    QueryList* child;
    QueryList();
    QueryList(bool head, std::vector<Token*> tokens, int* i);
    void ToString();
};

#endif //PROJECT1_STARTER_CODE_QUERYLIST_H