//
// Created by work on 9/25/2021.
//

#include "Query.h"

Query::Query() {

}
Query::Query(std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == TokenType::ID){
        q = Predicate(tokens,i);
    } else{
        throw("expected predicate");
    }
    PushToken(TokenType::Q_MARK,tokens,i);
}

void Query::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        throw ("expected token");
    }
}
void Query::ToString() {
    q.ToString();
    std::cout << "?\n";
}