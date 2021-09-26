//
// Created by work on 9/25/2021.
//

#include "DataLog.h"
DataLog::DataLog(std::vector<Token> tokens, std::vector<ParsePart> parts) {
    first.push_back(TokenType::SCHEMES);

};
void DataLog::PushTerminal(TokenType type, int* i){
    if (tokens.front().type == type){
        i++;
    }else{
        //throw
    }
    
};