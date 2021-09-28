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
            *i = *i + 1;
            child = new StringList(head=false,tokens,i);
        }else{
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
            throw (e);
        }
    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        if (tokens[*i]->type == TokenType::COMMA){
            *i = *i + 1;
            if(tokens[*i]->type == TokenType::STRING){
                text = tokens[*i]->toString();
                *i = *i + 1;
                child = new StringList(head=false,tokens,i);
            } else{
                std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
                throw (e);
            }
        }else {
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
            throw (e);
        }
    }
}
void StringList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            std::cout << text;
            child->ToString(false);
        } else {
           std::cout << "," + text;
           child->ToString(false);
        }
    }
}