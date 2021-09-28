#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automaton.h"
#include "Token.h"

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;

    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    std::string s;
    int lineNumber;
    int maxRead;
    int maxAutomata;
    int inputRead;
    Lexer();
    ~Lexer();

    std::vector<Token*> Run(std::string& input);
    
    // TODO: add other public methods here

};

#endif // LEXER_H

