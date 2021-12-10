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
    bool update = true;
    int passes = 0;
    std::vector<Rule> Rules;
    std::vector <std::vector <int>> DirectedRules;
    std::vector <std::vector <int>> DirectedIndex;
    while ("" != RL->rule.headPred.name) {
        Rules.push_back(RL->rule);
        RL = RL->child;
    }
    std::vector<std::set<int>> Graph;
    std::vector<std::set<int>> GraphT;
    std::set<int> tempSet;
    for(unsigned int RuleIter = 0; RuleIter < Rules.size();RuleIter++){
        tempSet.clear();
        PredicateList PL = Rules[RuleIter].predicates;
        while ("" != PL.text.name){
            for (unsigned int i = 0; i < Rules.size(); i++){
                if (PL.text.name == Rules[i].headPred.name){
                   tempSet.insert(i);
                }
            }
            PL = *PL.child;
        }
        Graph.push_back(tempSet);
    }
    for (int i = 0; i < static_cast<int>(Rules.size()); i++) {
        tempSet.clear();
        for (unsigned int j = 0; j < Rules.size();j++){
            for (std::set<int>::iterator it = Graph[j].begin(); it != Graph[j].end(); it++) {
                if (*it == i){
                    tempSet.insert(j);
                }
            }
        }
        GraphT.push_back(tempSet);
    }
    std::vector<int> prefix;
    std::vector<int> postfix;
    prefix.resize(Rules.size());
    postfix.resize(Rules.size());
    std::vector<bool> added;
    int count = 0;
    for (unsigned int i = 0; i < Rules.size(); i++){
        added.push_back(false);
    }
    for (unsigned  int i = 0; i < Rules.size();i++){
        if (!(added[i])){
            prefix[i] = count++;
            added[i] = true;
            graphing(i,&added,&prefix,&postfix,GraphT,&count);
        }
    }
    count = 0;
    int maxRule = 0;
    std::vector<int> SCC;
    std::vector<int> tempRule;
    for (unsigned int i = 0; i < Rules.size(); i++){
        added[i] = false;
    }
    while (true)
    {
        for (unsigned int i = 0; i < Rules.size(); i++) {
            if (postfix[i] >= postfix[maxRule]) {
                maxRule = i;
            }
        }
        if (postfix[maxRule] > -1) {
            added[maxRule] = true;
            SCC = graphing(maxRule, &added, Graph);
            DirectedRules.push_back(SCC);
            for (unsigned int i = 0; i < SCC.size(); i++) {
                postfix[SCC[i]] = -1;
            }
        }
        else{
            break;
        }
    }
    std::cout << "Dependency Graph\n";
    for (unsigned  int i = 0; i < Graph.size(); i++){
        std::cout << "R" << i << ":";
        for (std::set<int>::iterator it = Graph[i].begin(); it != Graph[i].end(); it++) {
            std::cout << "R" << *it << (std::next(it) == Graph[i].end() ? "\" : ",");
        }
    }
    std::cout << "\n";
    std::cout << "\n\nRule Evaluation\n";
    for (unsigned int i = 0; i < DirectedRules.size(); i++) {
        std::cout << "SCC: ";
        for (unsigned  int j = 0; j < DirectedRules[i].size(); j++){
            std::cout << "R" << DirectedRules[i][j] << (j == DirectedRules[i].size() -1 ? "\n" : ",");
        }
        while (update){
            update = false;
            passes++;
            for (unsigned int j = 0; j < DirectedRules[i].size(); j++) {

                int schemePos = -1;
                for (int k = 0; k < static_cast<int>(relations.size()); k++) {
                    if (Rules[DirectedRules[i][j]].headPred.name == relations[k].name) {
                        schemePos = k;
                    }
                }
                if (schemePos != -1) {
                    Rules[DirectedRules[i][j]].ToString();
                    std::vector<Relation> tempRelation;
                    PredicateList *PL = &Rules[DirectedRules[i][j]].predicates;
                    ParameterList *PmL;
                    while ("" != PL->text.name) {
                        for (int k = 0; k < static_cast<int> (relations.size()); k++) {
                            if (PL->text.name == relations[k].name) {
                                tempRelation.push_back(relations[k]);
                                PmL = &PL->text.parameters;
                                for (int l = 0; l < tempRelation.back().heads.size; l++) {
                                    if (PmL->text.text != tempRelation.back().heads.head[l]) {
                                        tempRelation.back().rename(l, PmL->text.text);
                                    }
                                    PmL = PmL->child;
                                    for (int m =0; m < l; m++){
                                        if (tempRelation.back().heads.head[l] == tempRelation.back().heads.head[m]){
                                            throw "cannot duplicate name";
                                        }
                                    }
                                }
                            }
                        }
                        PL = PL->child;
                    }
                    for (int k = 1; k < static_cast<int> (tempRelation.size()); k++) {
                        tempRelation[0] = tempRelation[0].naturalJoin(tempRelation[k]);
                    }
                    bool remove = true;
                    for (int k = 0; k < tempRelation[0].heads.size; k++) {
                        remove = true;
                        while (remove) {
                            remove = false;
                            for (tempRelation[0].it = tempRelation[0].table.begin(); tempRelation[0].it != tempRelation[0].table.end(); tempRelation[0].it++) {
                                if (tempRelation[0].heads.head[k] != tempRelation[0].it->equiv[k] && tempRelation[0].heads.head[k][0] == '\'') {
                                    tempRelation[0].table.erase(tempRelation[0].it);
                                    remove = true;
                                    break;
                                }
                            }

                        }
                    }
                    IDList *ids = &Rules[DirectedRules[i][j]].headPred.IDs;
                    std::vector<int> toProj;
                    while ("" != ids->text) {
                        for (int k = 0; k < tempRelation[0].heads.size; k++) {
                            if (ids->text == tempRelation[0].heads.head[k]) {
                                toProj.push_back(k);
                            }
                        }
                        ids = ids->child;
                    }
                    tempRelation[0] = tempRelation[0].project(toProj);
                    tempRelation[0].name = Rules[DirectedRules[i][j]].headPred.name;
                    bool addedRelation;
                    for (std::set<tuple>::iterator it = tempRelation[0].table.begin(); it != tempRelation[0].table.end(); it++) {
                        addedRelation = relations[schemePos].table.insert(*it).second;
                        if (addedRelation) {
                            for (int k = 0; k < it->size; k++) {
                                std::cout << "  " << relations[schemePos].heads.head[k] << "=" << it->equiv[k];
                                std::cout << (k == relations[schemePos].heads.size - 1 ? "\n" : ",");
                            }
                        }
                        update = addedRelation || update;
                    }
                }
            }
            bool cancelUpdate = false;
            if (DirectedRules[i].size() == 1){
                cancelUpdate = true;
                PredicateList *PL = &Rules[DirectedRules[i][0]].predicates;
                while ("" != PL->text.name){
                    if (PL->text.name == Rules[DirectedRules[i][0]].headPred.name){
                        cancelUpdate = false;
                    }
                    PL = PL->child;
                }
            }
            update = update && !(cancelUpdate);
        }
        std::cout << passes << " passes: ";
        for (unsigned  int j = 0; j < DirectedRules[i].size(); j++){
            std::cout << "R" << DirectedRules[i][j] << (j == DirectedRules[i].size() -1 ? "\n" : ",");
        }
        update = true;
        passes = 0;
    }
}

void Database::graphing(int start, std::vector<bool>* added,std::vector<int>* prefix, std::vector<int>* postfix, std::vector<std::set<int>> graph, int* count) {
    for (std::set<int>::iterator it = graph[start].begin(); it != graph[start].end(); it++) {
        if (!((*added).at(*it))){
            (*prefix).at(*it) = *count;
            *count = *count+1;
            (*added).at(*it) = true;
            graphing(*it, added,prefix,postfix,graph,count);
        }
    }
    (*postfix).at(start) = *count;
    *count = *count + 1;
}

std::vector<int> Database::graphing(int start, std::vector<bool>* added, std::vector<std::set<int>> graph) {
    std::vector <int> tempComponent;
    std::vector <int> returnComponent;
    returnComponent.push_back(start);
    for (std::set<int>::iterator it = graph[start].begin(); it != graph[start].end(); it++) {
        if (!((*added).at(*it))){
            (*added).at(*it) = true;
            tempComponent = (graphing(*it, added,graph));
            returnComponent.insert(returnComponent.end(), tempComponent.begin(), tempComponent.end());
        }
    }
    return  returnComponent;
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