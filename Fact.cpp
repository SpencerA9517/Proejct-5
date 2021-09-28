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
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
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
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
}
void Fact::ToString() {
    std::cout <<  "  " << name << "(";
    strings.ToString(true);
    std::cout<< ").\n";
}