//
// Created by work on 9/25/2021.
//

#include "RuleList.h"
RuleList::RuleList() {}
RuleList::RuleList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        rule = Rule(tokens,i);
        child = new RuleList(head=false,tokens,i);
    }else if(tokens[*i]->type != TokenType::QUERIES){
        rule = Rule(tokens,i);
        child = new RuleList(head=false,tokens,i);
    }
}
void RuleList::ToString() {
    if(child != nullptr) {
        rule.ToString();
        child->ToString();
    }
}