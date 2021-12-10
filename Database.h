//
// Created by work on 10/16/2021.
//

#ifndef PROJECT1_STARTER_CODE_DATABASE_H
#define PROJECT1_STARTER_CODE_DATABASE_H

#include "Relation.h"
#include "Query.h"
#include "QueryList.h"
#include "SchemeList.h"
#include "FactList.h"
#include "RuleList.h"

class Database{
public:
    std::vector<Relation> relations;
    Database(SchemeList* SL,FactList* FL, RuleList* RL);
    Relation quest(Query query);
    void questing(QueryList* QL);
    void graphing(int start, std::vector<bool> * added,std::vector<int> * prefix, std::vector<int>* postfix, std::vector<std::set<int>> graph, int* count);
    std::vector<int> graphing(int start,std::vector<bool> * added, std::vector<std::set<int>> graph);
};

#endif //PROJECT1_STARTER_CODE_DATABASE_H
