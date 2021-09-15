#include "Lexer.h"
#include <iostream>

    int main(int argc, char** argv) {

        Lexer *lexer = new Lexer();
        std::string input;
        input = argv[1];
        lexer->Run(input);
        // TODO

        delete lexer;

        return 0;
}