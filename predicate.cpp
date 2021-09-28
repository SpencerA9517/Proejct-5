//
// Created by work on 9/25/2021.
//

#include "predicate.h"

Predicate::Predicate() {

}
Predicate::Predicate(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        name = tokens[*i]->toString();
        *i = *i + 1;
    } else{
        throw("expected name");
    }
    PushToken(TokenType::LEFT_PAREN,tokens,i);
    parameters = ParameterList(true,tokens,i);
    PushToken(TokenType::RIGHT_PAREN,tokens,i);
}

void Predicate::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        throw ("expected token");
    }
}
void Predicate::ToString() {
    std::cout << name + "(";
    parameters.ToString(true);
    std::cout <<  ")";
}