#ifndef DATALOGPART_H
#define DATALOGPART_H
#include "Token.h"
#include "Parsepart.h"

class DataLog : public ParsePart
{
private:
    std::vector<Token> tokens;
    int* i;
public:
    //std::vector <Scheme> schemes;
    //std::vector <Fact> facts;
    //std::vector <Rule> rules;
    //std::vector <Queries> queries;

    DataLog(std::vector <Token>, std::vector <ParsePart>);
    void PushTerminal(TokenType type, int* i);
};

#endif // DATALOGPART_H