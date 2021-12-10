//
// Created by work on 10/16/2021.
//

#ifndef PROJECT1_STARTER_CODE_RELATION_H
#define PROJECT1_STARTER_CODE_RELATION_H

#include <vector>
#include <set>
#include <iterator>
#include <string>
#include "header.h"
#include "tuple.h"
#include "SchemeList.h"
#include "RuleList.h"

class Relation {
public:
    std::string name;
    header heads;
    std::set<tuple>::iterator it;
    std::set<tuple> table;
    Relation();
    Relation(Scheme scheme);
    Relation(std::string name,header heads);
    void addTuple(tuple newTuple);
    Relation select( std::vector<std::string> conditions);
    Relation project(std::vector<int> keep);
    void rename(int oldHead,std::string newHead);
    Relation naturalJoin(Relation second);

};


#endif //PROJECT1_STARTER_CODE_RELATION_H
