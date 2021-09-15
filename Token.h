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
    // TODO: add the other types of tokens
    UNDEFINED
};

class Token
{
private:
    const std::string strConverter[15] = {
            "(COLON,\":\",",
            "(COLON_DASH,\":-\",",
            "(ID,\""
            "((COMMA,\",\",",
            "(PERIOD,\".\",",
            "(Q_MARK,\"?\",",
            "(LEFT_PAREN,\"(\",",
            "(RIGHT_PAREN,\")\",",
            "(MULTIPLY,\"*\","
            "(ADD,\"+\",",
            "(SCHEMES,\"Schemes\",",
            "(FACTS,\"Facts\",",
            "(RULES,\"Rules\",",
            "(QUERIES,\"Queries\",",
            "(UNDEFINED,\""};
    // TODO: add member variables for information needed by Token

public:
    Token(TokenType type, std::string description, int line);
    TokenType type;
    std::string description;
    int line;

    std::string  toString();
    // TODO: add other needed methods
};

#endif // TOKEN_H

