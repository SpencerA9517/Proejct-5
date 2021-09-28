#ifndef PROJECT1_STARTER_CODE_DATALOG_H
#define PROJECT1_STARTER_CODE_DATALOG_H
#include "Token.h"
#include "SchemeList.h"
#include "FactList.h"
#include "RuleList.h"
#include "QueryList.h"
#include <iostream>
#include <string>
#include <algorithm>

class DataLog
{
private:
    std::vector<Token> tokens;
public:
    SchemeList schemes;
    FactList facts;
    RuleList rules;
    QueryList queries;

    DataLog();
    DataLog(std::vector <Token*> tokens,int* i);
    int CountSchemes();
    int CountFacts();
    int CountRules();
    int CountQueries();
    void PrintDomain();
    void PushToken(TokenType type,std::vector<Token*> tokens, int* i);
    void ToString();
};

#endif  //DATALOG_H