#include "IDAutomaton.h"

void IDAutomaton::S0(const std::string& input) {
    priority = false;
    text = "";
    if (isalpha(input[index]) ) {
        text.push_back(input[index]);
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
    if (isalnum(input[index])) {
        text.push_back(input[index]);
        inputRead++;
        index++;
        S1(input);
    }
}