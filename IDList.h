//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_IDLIST_H
#define PROJECT1_STARTER_CODE_IDLIST_H

#endif //PROJECT1_STARTER_CODE_IDLIST_H
#include <string>
#include <vector>
#include "Token.h"

class IDList {
public:

    std::string text;
    IDList* child;
    IDList();
    IDList(bool head, std::vector<Token*> tokens, int* i);
    std::string ToString(bool head);
};