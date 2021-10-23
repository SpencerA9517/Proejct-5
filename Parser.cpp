//
// Created by work on 9/24/2021.
//

#include "Parser.h"
#include <iostream>

Parser::Parser(){
}

void Parser::Run(std::vector <Token*> tokens) {
    try{
        tokensRead = 0;
        program = DataLog(tokens,&tokensRead);
        //program.ToString();
    }
    catch(std::string e){
        std::cout << e;
    }
    std::string output;

}