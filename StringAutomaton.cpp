//
// Created by work on 9/14/2021.
//

#include "StringAutomaton.h"
void StringAutomaton::S0(const std::string& input) {
    text = "";
    type = TokenType::STRING;
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}
void StringAutomaton::S1(const std::string& input) {
    if(index >= input.size() ){
        type = TokenType::UNDEFINED;
    } else {
        if (input[index] != '\'') {
            text.push_back(input[index]);
            inputRead++;
            index++;
            S1(input);
        } else {
            inputRead++;
            index++;
            S2(input);
        }
    }
}
void StringAutomaton::S2(const std::string& input) {
    if (input[index] == '\'') {
        text.push_back(input[index]);
        text.push_back(input[index]);
        inputRead++;
        index++;
        S1(input);
    }
    else {
    }
}