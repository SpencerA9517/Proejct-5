//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_QUERY_H
#define PROJECT1_STARTER_CODE_QUERY_H


#include <string>
#include "predicate.h"
#include <iostream>

class Query{
public:
    
    Predicate q;
    Query();
    Query(std::vector<Token*> tokens, int* i);
    void ToString();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
};

#endif //PROJECT1_STARTER_CODE_QUERY_H
