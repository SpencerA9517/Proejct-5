//
// Created by work on 9/25/2021.
//

#include "HeadPredicate.h"

HeadPredicate::HeadPredicate() {

}
HeadPredicate::HeadPredicate(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        name = tokens[*i]->toString();
        *i = *i + 1;
    } else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
        throw (e);
    }
    PushToken(TokenType::LEFT_PAREN,tokens,i);
    IDs= IDList(true,tokens,i);
    PushToken(TokenType::RIGHT_PAREN,tokens,i);
}

void HeadPredicate::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
        throw (e);
    }
}
void HeadPredicate::ToString() {
    std::cout << name + "(";
    IDs.ToString(true);
    std:: cout << ")";
}