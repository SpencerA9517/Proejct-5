#include "Token.h"

Token::Token(TokenType type, std::string description, int line) {
    // TODO: initialize all member variables
    this->type = type;
    this->description = description;
    this->line = line;
}
std::string Token::toString(){
    int i = static_cast<int>(type);
    return strConverter[static_cast<int>(type)];

}
