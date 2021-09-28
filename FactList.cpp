//
// Created by work on 9/25/2021.
//

#include "FactList.h"
FactList::FactList() {}
FactList::FactList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        fact = Fact(tokens,i);
        child = new FactList(head=false,tokens,i);
    }else if(tokens[*i]->type != TokenType::RULES){
        fact = Fact(tokens,i);
        child = new FactList(head=false,tokens,i);
    }
}
void FactList::ToString() {
    if(child != nullptr) {
        fact.ToString();
        child->ToString();
    }
}