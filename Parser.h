//
// Created by work on 9/24/2021.
//
#ifndef PROJECT1_STARTER_CODE_PARSER_H
#define PROJECT1_STARTER_CODE_PARSER_H

#include <vector>
#include "DataLog.h"

class Parser{
private:
    int tokensRead;
public:
    DataLog program;
    Parser();
    ~Parser();

    void Run(std::vector<Token*> tokens);
};


#endif //PROJECT1_STARTER_CODE_PARSER_H
