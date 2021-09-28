//
// Created by work on 9/25/2021.
//

#include "SchemeList.h"
SchemeList::SchemeList() {}
SchemeList::SchemeList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
            scheme = Scheme(tokens,i);
            child = new SchemeList(head=false,tokens,i);
    }else if(tokens[*i]->type != TokenType::FACTS){
        scheme = Scheme(tokens,i);
        child = new SchemeList(head=false,tokens,i);
    }
}
void SchemeList::ToString() {
    if(child != nullptr) {
            scheme.ToString();
            child->ToString();
    }
}