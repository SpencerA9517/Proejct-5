//
// Created by work on 10/16/2021.
//

#include "Database.h"

Database::Database(SchemeList* SL, FactList* FL) {
    FactList* head = FL;
    while ("" != SL->scheme.name) {
        relations.push_back(Relation(SL->scheme));
        SL = SL->child;
    }
        FL = head;
        int Si;
        while ("" != FL->fact.name){
            for(int i = 0; i < relations.size();i++){
                if (relations[i].name == FL->fact.name){ //find matching relation for fact
                    Si = i;
                }
            }
            std::vector<std::string> data;
            tuple toAdd;
            StringList* StrL = &FL->fact.strings;
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