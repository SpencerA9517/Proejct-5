//
// Created by work on 10/16/2021.
//

#ifndef PROJECT1_STARTER_CODE_TUPLE_H
#define PROJECT1_STARTER_CODE_TUPLE_H

#include <vector>
#include <string>

struct tuple {
    std::vector<std::string> equiv;
    int size = equiv.size();

    bool operator<(const tuple& rhs) const{
        if (size < rhs.size){
            //error
        }
        for (int i = 0; i<size; i++){
            if (equiv[i] < rhs.equiv[i]){
                return true;
            }
            if (equiv[i] > rhs.equiv[i]){
                return false;
            }
        }
        return false;

    }
};
#endif //PROJECT1_STARTER_CODE_TUPLE_H
