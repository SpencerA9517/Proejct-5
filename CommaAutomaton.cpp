//
// Created by work on 9/14/2021.
//

#include "CommaAutomaton.h"
void CommaAutomaton::S0(const std::string& input) {
    if (input[index] == ',') {
        text = ",";
        inputRead = 1;
    }
    else {
        Serr();
    }
}
