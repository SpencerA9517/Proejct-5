//
// Created by work on 9/25/2021.
//

#include "Rule.h"

Rule::Rule() {

}
Rule::Rule(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        headPred = HeadPredicate(tokens,i);
    } else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
    PushToken(TokenType::COLON_DASH,tokens,i);
    predicates = PredicateList(true,tokens,i);
    PushToken(TokenType::PERIOD,tokens,i);
}

void Rule::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
}
void Rule::ToString() {
    std::cout << "  ";
    headPred.ToString();
    std::cout << " :- ";
    predicates.ToString(true);
    std::cout << ".\n";
}