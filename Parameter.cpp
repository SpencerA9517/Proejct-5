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
        throw( "expected string or ID");
    }
}