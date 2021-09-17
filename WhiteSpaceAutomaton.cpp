//
// Created by work on 9/14/2021.
//

#include "WhiteSpaceAutomaton.h"
void WhiteSpaceAutomaton::S0(const std::string& input) {
    if (isspace(input[index])) {
        inputRead++;
        index++;
    }
    else {
        Serr();
    }
}