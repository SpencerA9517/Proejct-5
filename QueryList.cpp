//
// Created by work on 9/25/2021.
//

#include "QueryList.h"
QueryList::QueryList() {}
QueryList::QueryList( std::vector<Token*> tokens, int* i) {
    child = nullptr;
    if(tokens[*i]->type != TokenType::END){
        query = Query(tokens,i);
        child = new QueryList(tokens,i);
    }
}
void QueryList::ToString() {
    if(child != nullptr) {
        query.ToString();
        child->ToString();
    }
}