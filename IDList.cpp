//
// Created by work on 9/25/2021.
//

#include "IDList.h"
IDList::IDList() {

}
IDList::IDList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        if(tokens[*i]->type == TokenType::ID) {
                text = tokens[*i]->toString();
                i++;
                child = new IDList(head=false,tokens,i);
        }else{
            throw ("There must be at least one ID in this list");
        }
    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        if (tokens[*i]->type == TokenType::COMMA){
            i++;
            if(tokens[*i]->type == TokenType::ID){
                text = tokens[*i]->toString();
                i++;
                child = new IDList(head=false,tokens,i);
            } else{
                throw ("expected ID");
            }
        }else {
            throw ("expected , or )");
        }
    }
}
std::string IDList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            return (text + child->ToString(false));
        } else {
            return ("," + text + child->ToString(false));
        }
    }
}