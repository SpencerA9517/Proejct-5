//
// Created by work on 9/25/2021.
//

#include "Parameter.h"
Parameter::Parameter() {}
Parameter::Parameter(std::vector<Token *> tokens, int *i) {
    if (tokens[*i]->type == TokenType::STRING || tokens[*i]->type == TokenType::ID){
        text = tokens[*i]->toString();
        *i = *i + 1;
    }else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
        throw (e);
    }
}