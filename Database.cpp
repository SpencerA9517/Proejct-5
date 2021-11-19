//
// Created by work on 10/16/2021.
//

#include "Database.h"

Database::Database(SchemeList* SL, FactList* FL, RuleList* RL) {
    while ("" != SL->scheme.name) {
        relations.push_back(Relation(SL->scheme));
        SL = SL->child;
    }
    int Si;
    while ("" != FL->fact.name) {
        for (int i = 0; i < static_cast<int>(relations.size()); i++) {
            if (relations[i].name == FL->fact.name) { //find matching relation for fact
                Si = i;
            }
        }
        std::vector<std::string> data;
        tuple toAdd;
        StringList *StrL = &FL->fact.strings;
        while ("" != StrL->text) {
            data.push_back(StrL->text); //convert fact to vector
            StrL = StrL->child;
        }
        toAdd.equiv = data;
        toAdd.size = data.size();
        relations[Si].table.insert(toAdd); //add it to table
        data.clear();
        FL = FL->child; //loop
    }
    std::cout << "Rule Evaluation\n";
    bool update = true;
    int passes = 0;
    RuleList* start = RL;
    while (update){
        update = false;
        passes++;
        RL = start;
        while ("" != RL->rule.headPred.name) {
            int schemePos = -1;
            for (int i = 0; i < static_cast<int>(relations.size()); i++) {
                if (RL->rule.headPred.name == relations[i].name) {
                    schemePos = i;
                }
            }
            if (schemePos != -1) {
                RL->rule.ToString();
                std::vector<Relation> tmp;
                PredicateList *PL = &RL->rule.predicates;
                ParameterList *PmL;
                while ("" != PL->text.name) {
                    for (int i = 0; i < static_cast<int> (relations.size()); i++) {
                        if (PL->text.name == relations[i].name) {
                            tmp.push_back(relations[i]);
                            PmL = &PL->text.parameters;
                            for (int j = 0; j < tmp.back().heads.size; j++) {
                                if (PmL->text.text != tmp.back().heads.head[j]) {
                                    tmp.back().rename(tmp.back().heads.head[j], PmL->text.text);
                                }
                                PmL = PmL->child;
                            }
                        }
                    }
                    PL = PL->child;
                }
                for (int i = 1; i < static_cast<int> (tmp.size()); i++) {
                    tmp[0] = tmp[0].naturalJoin(tmp[i]);
                }
                bool remove = true;
                for (int i = 0; i < tmp[0].heads.size; i++) {
                    remove = true;
                    while (remove) {
                        remove = false;
                        for (tmp[0].it = tmp[0].table.begin(); tmp[0].it != tmp[0].table.end(); tmp[0].it++) {
                            if (tmp[0].heads.head[i] != tmp[0].it->equiv[i] && tmp[0].heads.head[i][0] == '\'') {
                                tmp[0].table.erase(tmp[0].it);
                                remove = true;
                                break;
                            }
                        }

                    }
                }
                IDList *ids = &RL->rule.headPred.IDs;
                std::vector<int> toProj;
                while ("" != ids->text) {
                    for (int j = 0; j < tmp[0].heads.size; j++) {
                        if (ids->text == tmp[0].heads.head[j]) {
                            toProj.push_back(j);
                        }
                    }
                    ids = ids->child;
                }
                tmp[0] = tmp[0].project(toProj);
                tmp[0].name = RL->rule.headPred.name;
                bool added;
                for (std::set<tuple>::iterator it = tmp[0].table.begin(); it != tmp[0].table.end();it++){
                    added = false;
                    added = relations[schemePos].table.insert(*it).second;
                    if (added){
                        for (int i = 0; i < it->size; i++) {
                            std::cout << "  " << relations[schemePos].heads.head[i] << "=" << it->equiv[i];
                            std::cout << (i == relations[schemePos].heads.size - 1 ? "\n" : ",");
                        }
                    }
                    update = added || update;
                }
            }
            RL = RL->child;
        }
    }
    std::cout << "\nSchemes populated after " << passes << " passes through the Rules.\n\n";
}

Relation Database::quest(Query query) {
    Relation rtn;
    std::vector<std::string> input;
    ParameterList* curPar = &query.q.parameters;
    while(curPar->text.text != ""){
        input.push_back(curPar->text.text);
        curPar = curPar->child;
    }
    int mRel = -1;
    for(int i = 0; i < static_cast<int>(relations.size());i++){
        if (relations[i].name == query.q.name){
            mRel = i;
        }
    }
    if (-1 == mRel){
        throw "Invalid query";
    } else{
        rtn = relations[mRel];
        rtn = rtn.select(input);
        return  rtn;
    }
}

void Database::questing(QueryList* QL) {
    Relation r;
    std::vector<int> vPos;
    std::vector<std::string> variables;
    while (QL->query.q.name != ""){
        QL->query.ToString();
        //output query
        r = quest(QL->query);
        if(static_cast<int>(r.table.size()) == 0){
            std::cout << "No\n";
        }
        else{
            ParameterList* curPar = &QL->query.q.parameters;
            int i = 0;
            while (curPar->text.text != ""){
                if (curPar->text.text.front() != '\''){

                    bool newVar = true;
                    for (int j = 0; j< static_cast<int>(variables.size());j++){
                        if(variables[j] == curPar->text.text){
                            newVar = false;
                        }
                    }
                    if (newVar) {
                        variables.push_back(curPar->text.text);
                        vPos.push_back(i);
                    }
                }
                curPar = curPar->child;
                i++;
            }
            std::cout << "Yes("<< r.table.size() << ")\n";
            for (r.it = r.table.begin(); r.it != r.table.end();r.it++){
                for(int j = 0; j<static_cast<int>(variables.size());j++){
                    std::cout << "  " << variables[j] << "=" << r.it->equiv[vPos[j]];
                    std::cout << (j == static_cast<int>(vPos.size()-1) ? "\n" : ",");
                }
            }
        }
        variables.clear();
        vPos.clear();
        QL = QL->child;
    }
}