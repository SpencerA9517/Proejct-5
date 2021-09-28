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
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
    PushToken(TokenType::Q_MARK,tokens,i);
}

void Query::PushToken(TokenType type, std::vector<Token*> tokens, int *i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
}
void Query::ToString() {
    std:: cout << "  ";
    q.ToString();
    std::cout << "?\n";
}