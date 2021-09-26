//
// Created by work on 9/25/2021.
//

#ifndef PROJECT1_STARTER_CODE_STRINGLIST_H
#define PROJECT1_STARTER_CODE_STRINGLIST_H

#endif //PROJECT1_STARTER_CODE_STRINGLIST_H
#include <string>
#include <vector>
#include "Token.h"

class StringList {
public:

    std::string text;
    StringList* child;
    StringList();
    StringList(bool head, std::vector<Token*> tokens, int* i);
    std::string ToString(bool head);
};