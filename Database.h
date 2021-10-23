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

class Database{
public:
    std::vector<Relation> relations;
    Database(SchemeList* SL,FactList* FL);
    Relation quest(Query query);
    void questing(QueryList* QL);
};

#endif //PROJECT1_STARTER_CODE_DATABASE_H
