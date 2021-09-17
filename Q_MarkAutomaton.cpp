#include "Q_MARKAutomaton.h"

void Q_MarkAutomaton::S0(const std::string& input) {
    if (input[index] == '?') {
        text = "?";
        inputRead = 1;
    }
    else {
        Serr();
    }
}