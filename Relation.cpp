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
    for (int col = 0; col < conditions.size();col++) {
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
Relation Relation::project(header newHead) {
    std::vector<int> keep;
    Relation rtn = Relation(name, newHead);
    for (int i = 0; i < newHead.size; i++) {
        for (int j = 0; j < heads.size; j++) {
            keep.push_back(j);
        }
    }
    tuple temp;
    for (it = table.begin(); it != table.end(); it++) {
        for (int i = keep.size() - 1; i > -1; i--) {
            temp.equiv.push_back(it->equiv[keep[i]]);
        }
        rtn.table.insert(temp);
    }
    return rtn;
}

Relation Relation::rename(std::string oldHead, std::string newHead) {
    int spot;
    Relation rtn = Relation(name,heads);
    for(int i = 0; i<heads.size;i++){
        if (newHead == heads.head[i]){
            throw "cannot duplicate name";
        }
        if (oldHead == heads.head[i]){
            spot = i;
        }
    }
    rtn.heads.head[spot] = newHead;
    return rtn;

}