#include "Lexer.h"
#include <iostream>
#include <fstream>
#include "Parser.h"

    int main(int argc, char** argv) {

        Lexer *lexer = new Lexer();
        Parser *parser = new Parser();
        std::ifstream inFile;
        std::string input;
        char c;
        std::string inputAdr = argv[1];
        inFile.open(inputAdr);
        if(inFile.is_open()) {
            while (inFile.get(c)) {
                input.push_back(c);
            }
            //input = argv[1];

            lexer->Run(input);
            parser->Run(lexer->Run(input));
        }
        else{
            std::cout << "File failed to open";
        }
        // TODO

        delete lexer;

        return 0;
}