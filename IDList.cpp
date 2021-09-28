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
                *i = *i + 1;
                child = new IDList(head=false,tokens,i);
        }else{
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
            throw (e);
        }
    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        if (tokens[*i]->type == TokenType::COMMA){
            *i = *i + 1;
            if(tokens[*i]->type == TokenType::ID){
                text = tokens[*i]->toString();
                *i = *i + 1;
                child = new IDList(head=false,tokens,i);
            } else{
                std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
                throw (e);
            }
        }else {
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
            throw (e);
        }
    }
}
void IDList::ToString(bool head) {
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