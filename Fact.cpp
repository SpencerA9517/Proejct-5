//
// Created by work on 9/25/2021.
//

#include "Fact.h"

Fact::Fact() {

}
Fact::Fact(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        name = tokens[*i]->toString();
        *i = *i + 1;
    } else{
        throw("expected name");
    }
    PushToken(TokenType::LEFT_PAREN,tokens,i);
    strings = StringList(true,tokens,i);
    PushToken(TokenType::RIGHT_PAREN,tokens,i);
    PushToken(TokenType::PERIOD,tokens,i);
}

void Fact::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        throw ("expected token");
    }
}
void Fact::ToString() {
    std::cout << name + "(";
    strings.ToString(true);
    std::cout<< ")\n";
}