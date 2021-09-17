//
// Created by work on 9/14/2021.
//

#include "CommentAutomaton.h"
void CommentAutomaton::S0(const std::string& input) {
    text = "";
    if (input[index] == '#') {
        text.push_back(input[index]);
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}
void CommentAutomaton::S1(const std::string& input) {
    if (index < static_cast<int>(input.size())) {
        if (input[index] != '\n') {
            {
                if (input[index] == '|') {
                    text.push_back(input[index]);
                    inputRead++;
                    index++;
                    S3(input);
                } else {
                    text.push_back(input[index]);
                    inputRead++;
                    index++;
                    S2(input);
                }
            }
        }
    }
}
void CommentAutomaton::S2(const std::string& input) {
    if (index < static_cast<int>(input.size())) {
        if (input[index] != '\n') {
            text.push_back(input[index]);
            inputRead++;
            index++;
            S2(input);
        } else{
        }
    }
}
void CommentAutomaton::S3(const std::string& input) {
    if (index < static_cast<int>(input.size())) {
        if (input[index] != '|') {
            text.push_back(input[index]);
	     if(input[index] == '\n'){
                newLines++;
             }
            inputRead++;
            index++;
            S3(input);
        } else {
            text.push_back(input[index]);
            inputRead++;
            index++;
            S4(input);
        }
    }else{
        type = TokenType::UNDEFINED;
    }
}
void CommentAutomaton::S4(const std::string& input) {
    if (index < static_cast<int>(input.size())) {
        if (input[index] == '#') {
            text.push_back(input[index]);
            inputRead++;
        } else {
            text.push_back(input[index]);
	    if(input[index] == '\n'){
               newLines++;
            }
            inputRead++;
            index++;
            S3(input);
        }
    }else{
        type = TokenType::UNDEFINED;
    }
}
