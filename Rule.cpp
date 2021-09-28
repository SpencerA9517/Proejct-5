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
        throw("expected name");
    }
    PushToken(TokenType::COLON_DASH,tokens,i);
    predicates = PredicateList(true,tokens,i);
    PushToken(TokenType::PERIOD,tokens,i);
}

void Rule::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        throw ("expected token");
    }
}
void Rule::ToString() {
    headPred.ToString();
    std::cout << ":-";
    predicates.ToString(true);
    std::cout << ")\n";
}