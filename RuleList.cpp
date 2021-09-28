//
// Created by work on 9/25/2021.
//

#include "RuleList.h"
RuleList::RuleList() {}
RuleList::RuleList( std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(tokens[*i]->type != TokenType::QUERIES){
        rule = Rule(tokens,i);
        child = new RuleList(tokens,i);
    }
}
void RuleList::ToString() {
    if(child != nullptr) {
        rule.ToString();
        child->ToString();
    }
}