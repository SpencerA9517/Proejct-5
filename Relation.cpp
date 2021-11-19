//
// Created by work on 10/16/2021.
//

#include "Relation.h"
Relation::Relation() {
    heads.size = 0;
}

Relation::Relation(Scheme scheme) {
    name = scheme.name;
    heads.size = 0;
    IDList* listHead = &scheme.IDs;
    while ("" != listHead->text){
        heads.head.push_back(listHead->text);
        heads.size++;
        listHead = listHead->child;
    }
}

Relation::Relation(std::string name, header heads) {
    this->name = name;
    this->heads = heads;
}

void Relation::addTuple(tuple newTuple) {
    table.insert(newTuple);
}

Relation Relation::select( std::vector<std::string> conditions) {
    Relation srt = *this;
    Relation rtn = Relation(name,heads);
    for (int col = 0; col < static_cast<int>(conditions.size());col++) {
        int coCol;
        //bool hasHead = false;

        /*for (int i = 0; i < heads.size; i++) {
            if (heads.head[i] == head) {
                hasHead = true;
                col = i;
                i = heads.size;
            }
        }
        if (hasHead == false) {
            throw "Head not found";
        }*/
        if (conditions[col].front() == '\'' && conditions[col].back() == '\'') {
            for (std::set<tuple>::iterator it = srt.table.begin(); it != srt.table.end(); it++) {
                if (it->equiv[col] == conditions[col]) {
                    rtn.addTuple(*it);
                }
            }
        } else {
            coCol = -1;
            for (int i = 0; i < col; i++) {
                if (conditions[i] == conditions[col]) {
                    coCol = i;
                    i = col;// leave immediately
                }
            }
            if (coCol != -1) {
                for (it = srt.table.begin(); it != srt.table.end(); it++) {
                    if (it->equiv[col] == it->equiv[coCol]) {
                        rtn.addTuple(*it);
                    }
                }
            }
            else{
                rtn = srt;
            }
        }
        srt = rtn;
        rtn.table.clear();
    }
    return srt;
}
Relation Relation::project(std::vector<int> keep) {
    Relation rtn = Relation(name, heads);
    rtn.heads.head.clear();
    rtn.heads.size = 0;
    for (int i = 0; i < static_cast<int>(keep.size()); i++) {
        rtn.heads.head.push_back(this->heads.head[keep[i]]);\
        rtn.heads.size++;
    }
    tuple temp;
    for (it = table.begin(); it != table.end(); it++) {
        temp.size = 0;
        for (int i = 0; i < static_cast<int>(keep.size()); i++) {
            temp.equiv.push_back(it->equiv[keep[i]]);
            temp.size++;
        }
        rtn.table.insert(temp);
        temp.equiv.clear();
    }
    return rtn;
}

void Relation::rename(std::string oldHead, std::string newHead) {
    int spot;
    for(int i = 0; i<heads.size;i++){
        if (newHead == heads.head[i]){
            throw "cannot duplicate name";
        }
        if (oldHead == heads.head[i]){
            spot = i;
        }
    }
    heads.head[spot] = newHead;
}
Relation Relation::naturalJoin(Relation second) {
    header newHeads = this->heads;
    bool toAdd;
    std::vector<int> keep;
    std::vector<int> matchSecond;
    std::vector<int> matchThis;
    for (int i = 0; i< second.heads.size; i++){
        toAdd = true;
        for (int j = 0; j< this->heads.size; j++){
            if (this->heads.head[j] == second.heads.head[i] && this->heads.head[j][0] != '\''){
                toAdd = false;
                matchThis.push_back(j);
                matchSecond.push_back(i);
            }
        }
        if (toAdd) {
            newHeads.head.push_back(second.heads.head[i]);
            newHeads.size++;
            keep.push_back(i);
        }
    }
    Relation rtn = Relation(name,newHeads);
    tuple temp;
    for (it = table.begin(); it != table.end(); it++) {
        for (second.it = second.table.begin(); second.it != second.table.end(); second.it++) {
            temp.equiv = it->equiv;
            temp.size = it->size;
            toAdd = true;
            for (int i = 0; i < static_cast<int>(matchThis.size()); i++) {
                if (it->equiv[matchThis[i]] != second.it->equiv[matchSecond[i]]){
                    toAdd = false;
                }
            }
            if (toAdd){
                for (int i = 0; i < static_cast<int> (keep.size());i++){
                    temp.equiv.push_back(second.it->equiv[keep[i]]);
                    temp.size++;
                }
                rtn.table.insert(temp);
            }
        }
    }
    return rtn;
}