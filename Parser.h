//
// Created by work on 9/24/2021.
//
#ifndef PROJECT1_STARTER_CODE_PARSER_H
#define PROJECT1_STARTER_CODE_PARSER_H

#include <vector>
#include "Parsepart.h"

class Parser{
private:
    std::vector<parsePart*> parts;
    ind tokensRead;

    void CreateParts ();
public:
    Parser();
    ~Parser();

    void Run(std::vector<Token>);
};


#endif //PROJECT1_STARTER_CODE_PARSER_H
