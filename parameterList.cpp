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
            i++;
            text = Parameter(tokens,i);
            child = new ParameterList(head=false,tokens,i);
            }
        else{
                throw ("expected COMMA");
        }
    }
}
std::string ParameterList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            return (text.text + child->ToString(false));
        } else {
            return ("," + text.text + child->ToString(false));
        }
    }
}