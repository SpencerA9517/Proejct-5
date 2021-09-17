#include "RightParenAutomaton.h"

void RightParenAutomaton::S0(const std::string& input) {
    if (input[index] == ')') {
        text = ")";
        inputRead = 1;
    }
    else {
        Serr();
    }
}