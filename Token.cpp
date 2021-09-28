#include "Token.h"

Token::Token(TokenType type, std::string description, int line,std::string text) {
    // TODO: initialize all member variables
    this->type = type;
    this->description = description;
    this->line = line;
    this->text = text;
}
std::string Token::toString(){
        return text;
}
std::string Token::toTokString() {
    return strConverter[static_cast<int>(type)];
}
