//
// Created by work on 9/25/2021.
//

#include "Parameter.h"
Parameter::Parameter(std::vector<Token *> tokens, int *i) {
    if (tokens[*i]->type == TokenType::STRING or tokens[*i]->type == TokenType::ID){
        text = tokens[*i]->toString();
    }else{
        throw( "expected string or ID");
    }
}