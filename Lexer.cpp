#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "CommaAutomaton.h"
#include "Q_MarkAutomaton.h"
#include "PeriodAutomaton.h"
#include "LeftParenAutomaton.h"
#include "RightParenAutomaton.h"
#include "MultiplyAutomaton.h"
#include "AddAutomaton.h"
#include "SchemesAutomaton.h"
#include "FactsAutomaton.h"
#include "RulesAutomaton.h"
#include "RulesAutomaton.h"
#include "QueriesAutomaton.h"
#include "IDAutomaton.h"
#include "StringAutomaton.h"
#include "WhiteSpaceAutomaton.h"
#include "CommentAutomaton.h"
#include <iostream>
Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`
}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new Q_MarkAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new MultiplyAutomaton);
    automata.push_back(new AddAutomaton);
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton);
    automata.push_back(new QueriesAutomaton);
    automata.push_back(new IDAutomaton);
    automata.push_back(new StringAutomaton);
    automata.push_back(new WhiteSpaceAutomaton);
    automata.push_back(new CommentAutomaton);
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {
    // TODO: convert this pseudo-code with the algorithm into actual C++ code
    lineNumber = 1;
    while(input.size() > 0){
        maxRead = 0;
        maxAutomata = 0;

        for(int i = 0; i < automata.size(); i++){
            inputRead = automata.at(i)->Start(input);
            if (inputRead >= maxRead && inputRead > 0){
                if (inputRead == maxRead){
                    if (automata.at(i)->GetPrio()){ //if tied ignore the automata with TokenType:ID
                        maxRead = inputRead;
                        maxAutomata = i;
                    }
                } else {
                    maxRead = inputRead; //if not tied just chose the greater
                    maxAutomata = i;
                }
            }
        }

        if (maxRead != 0) {
            if (!(automata.at(maxAutomata)->text.empty())) {
                tokens.push_back(automata.at(maxAutomata)->CreateToken(input, lineNumber));
                lineNumber += automata.at(maxAutomata)->NewLinesRead();
                std::string temp = automata.at(maxAutomata)->text;
                std::cout << tokens.back()->toString() << automata.at(maxAutomata)->text << "\"," << lineNumber << ")\n";
            }else{
                if (input.front() == '\n'){
                    lineNumber++;
                }
            }
        } else {
            tokens.push_back(new Token(TokenType::UNDEFINED, input, lineNumber));
            std::cout << "(UNDEFINED,\"" << input.front() << "\"," << lineNumber << ")\n";
            maxRead = 1;
            // (with first character of input)
        }

        input = input.substr(maxRead);
    }
    std::cout <<"(EOF,\"\"," << lineNumber << ")\n";
    /*
    set lineNumber to 1
    // While there are more characters to tokenize
    loop while input.size() > 0 {
        set maxRead to 0
        set maxAutomaton to the first automaton in automata

        // TODO: you need to handle whitespace inbetween tokens

        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        foreach automaton in automata {
            inputRead = automaton.Start(input)
            if (inputRead > maxRead) {
                set maxRead to inputRead
                set maxAutomaton to automaton
            }
        }
        // Here is the "Max" part of the algorithm
        if maxRead > 0 {
            set newToken to maxAutomaton.CreateToken(...)
                increment lineNumber by maxAutomaton.NewLinesRead()
                add newToken to collection of all tokens
        }
        // No automaton accepted input
        // Create single character undefined token
        else {
            set maxRead to 1
                set newToken to a  new undefined Token
                (with first character of input)
                add newToken to collection of all tokens
        }
        // Update `input` by removing characters read to create Token
        remove maxRead characters from input
    }
    add end of file token to all tokens
    */
}
