//
// Created by work on 9/25/2021.
//

#include "SchemeList.h"
SchemeList::SchemeList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
            scheme = Scheme(tokens,i);
            child = new SchemeList(head=false,tokens,i);
    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        scheme = Scheme(tokens,i);
        child = new SchemeList(head=false,tokens,i);
    }
}
std::string SchemeList::ToString() {
    if(child != nullptr) {
            return (scheme.ToString() + child->ToString(false));
    }
}