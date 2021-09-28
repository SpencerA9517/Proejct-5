//
// Created by work on 9/25/2021.
//

#include "predicateList.h"
PredicateList::PredicateList() {

}
PredicateList::PredicateList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        text = Predicate(tokens,i);
        child = new PredicateList(head=false,tokens,i);

    }else if(tokens[*i]->type != TokenType::PERIOD){
        if (tokens[*i]->type == TokenType::COMMA){
            *i = *i + 1;
            text = Predicate(tokens,i);
            child = new PredicateList(head=false,tokens,i);
        }
        else{
            std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + "\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
            throw (e);
        }
    }
}
void PredicateList::ToString(bool head) {
    if(child != nullptr) {
        if (head == true) {
            text.ToString();
            child->ToString(false);
        } else {
            std::cout << ",";
            text.ToString();
            child->ToString(false);
        }
    }
}