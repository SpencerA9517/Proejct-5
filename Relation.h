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
    Relation project(header newHead);
    Relation rename(std::string oldHead,std::string newHead);

};


#endif //PROJECT1_STARTER_CODE_RELATION_H
