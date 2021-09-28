//
// Created by work on 9/25/2021.
//

#include "parameterList.h"
ParameterList::ParameterList() {

}
ParameterList::ParameterList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        text = Parameter(tokens,i);
        child = new ParameterList(head=false,tokens,i);

    }else if(tokens[*i]->type != TokenType::RIGHT_PAREN){
        if (tokens[*i]->type == TokenType::COMMA){
            *i = *i + 1;
            text = Parameter(tokens,i);
            child = new ParameterList(head=false,tokens,i);
        }
        else{
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")";
            throw (e);
        }
    }
}
void ParameterList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            std::cout << text.text;
            child->ToString(false);
        } else {
            std:: cout << "," + text.text;
            child->ToString(false);
        }
    }
}