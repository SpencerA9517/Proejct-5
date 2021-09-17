#ifndef WHITESPACEAUTOMATON_H
#define WHITESPACEAUTOMATON_H

#include "Automaton.h"

class WhiteSpaceAutomaton : public Automaton
{
private:

public:
    WhiteSpaceAutomaton() : Automaton(TokenType::UNDEFINED) {}  // Call the base constructor

    void S0(const std::string& input);

};

#endif // WHITESPACEAUTOMATON_H