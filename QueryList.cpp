//
// Created by work on 9/25/2021.
//

#include "QueryList.h"
QueryList::QueryList() {}
QueryList::QueryList(bool head, std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(head == true){
        query = Query(tokens,i);
        child = new QueryList(head=false,tokens,i);
    }else if(tokens[*i]->type != TokenType::END){
        query = Query(tokens,i);
        child = new QueryList(head=false,tokens,i);
    }
}
void QueryList::ToString() {
    if(child != nullptr) {
        query.ToString();
        child->ToString();
    }
}