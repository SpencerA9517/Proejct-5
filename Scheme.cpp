//
// Created by work on 9/25/2021.
//

#include "Scheme.h"

Scheme::Scheme() {

}
Scheme::Scheme(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        name = tokens[*i]->toString();
        i++;
    } else{
        throw("expected name");
    }
    PushToken(TokenType::LEFT_PAREN,tokens,i);
    parameters = IDList(head=true,tokens,i);
    PushToken(TokenType::RIGHT_PAREN,tokens,i);
}

void Scheme::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        i++;
    }else{
        throw ("expected token");
    }
}
std::string Scheme::ToString() {
    return (name + "(" + parameters.ToString(true) + ")");
}