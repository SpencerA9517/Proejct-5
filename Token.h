#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    ID,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    STRING,
    COMMENT,
    END,
    // TODO: add the other types of tokens
    UNDEFINED
};

class Token
{
private:
    const std::string strConverter[18] = {
            "COLON",
            "COLON_DASH",
            "ID",
            "COMMA",
            "PERIOD",
            "Q_MARK",
            "LEFT_PAREN",
            "RIGHT_PAREN",
            "MULTIPLY",
            "ADD",
            "SCHEMES",
            "FACTS",
            "RULES",
            "QUERIES",
            "STRING",
            "COMMENT",
            "UNDEFINED"};
    // TODO: add member variables for information needed by Token

public:
    std::string text;
    Token(TokenType type, std::string description, int line,std::string text);
    TokenType type;
    std::string description;
    int line;

    std::string  toString();
    std::string toTokString();
    // TODO: add other needed methods
};

#endif // TOKEN_H

