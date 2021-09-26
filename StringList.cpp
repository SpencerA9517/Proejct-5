//
// Created by work on 9/25/2021.
//

#include "StringList.h"
StringList::StringList() {

}
StringList::StringList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        if(tokens[*i]->type == TokenType::STRING) {
            text = tokens[*i]->toString();
            i++;
            child = new StringList(head=false,tokens,i);
        }else{
            throw ("There must be at least one STRING in this list");
        }
    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        if (tokens[*i]->type == TokenType::COMMA){
            i++;
            if(tokens[*i]->type == TokenType::STRING){
                text = tokens[*i]->toString();
                i++;
                child = new StringList(head=false,tokens,i);
            } else{
                throw ("expected STRING");
            }
        }else {
            throw ("expected , or )");
        }
    }
}
std::string StringList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            return (text + child->ToString(false));
        } else {
            return ("," + text + child->ToString(false));
        }
    }
}