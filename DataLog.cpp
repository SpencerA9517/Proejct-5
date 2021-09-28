//
// Created by work on 9/25/2021.
//

#include "DataLog.h"
DataLog::DataLog() {}
DataLog::DataLog(std::vector<Token*> tokens, int* i) {

    PushToken(TokenType::SCHEMES,tokens,i);
    PushToken(TokenType::COLON,tokens,i);
    schemes = SchemeList(true,tokens,i);
    PushToken(TokenType::FACTS,tokens,i);
    PushToken(TokenType::COLON,tokens,i);
    facts = FactList(tokens,i);
    PushToken(TokenType::RULES,tokens,i);
    PushToken(TokenType::COLON,tokens,i);
    rules = RuleList(tokens,i);
    PushToken(TokenType::QUERIES,tokens,i);
    PushToken(TokenType::COLON,tokens,i);
    queries = QueryList(tokens,i);
    PushToken(TokenType::END,tokens,i);
};
void DataLog::PushToken(TokenType type, std::vector<Token*> tokens, int* i) {
    if (tokens[*i]->type == type){
        *i = *i + 1;
    }else{
        std::string e = "Failure!\n  (" + tokens[*i]->toTokString() + ",\"" + tokens[*i]->toString() + "\"," + std::to_string(tokens[*i]->line) + ")\n";
        throw (e);
    }
}
void DataLog::ToString() {
    std::cout << "Success!\n";
    std::cout << "Schemes(" + std::to_string(CountSchemes()) + "):\n";
    // ad counts
    //add line counter
    //add domain output
    schemes.ToString();
    std::cout << "Facts(" + std::to_string(CountFacts()) + "):\n";
    facts.ToString();
    std::cout << "Rules(" + std::to_string(CountRules()) + "):\n";
    rules.ToString();
    std::cout << "Queries(" + std::to_string(CountQueries()) + "):\n";
    queries.ToString(); // add domain
    PrintDomain();
}
int DataLog::CountSchemes(){
    int count = 0;
    SchemeList* index = &schemes;
    while (index->child != nullptr){
        count++;
        index = index->child;
    }
    return count;
}
int DataLog::CountFacts(){
    int count = 0;
    FactList* index = &facts;
    while (index->child != nullptr){
        count++;
        index = index->child;
    }
    return count;
}
int DataLog::CountRules(){
    int count = 0;
    RuleList* index = &rules;
    while (index->child != nullptr){
        count++;
        index = index->child;
    }
    return count;
}
int DataLog::CountQueries(){
    int count = 0;
    QueryList* index = &queries;
    while (index->child != nullptr){
        count++;
        index = index->child;
    }
    return count;
}
void DataLog::PrintDomain() {
    int count = 0;
    bool dupe;
    std::vector<std::string> domain;
    FactList* fIndex = &facts;
    StringList* sIndex;
    while (fIndex->child != nullptr){
        sIndex = &fIndex->fact.strings;
        while (sIndex->child != nullptr){
            dupe = false;
            for(int j = 0; j<count; j++){
                if (sIndex->text == domain[j]){
                    dupe = true;
                }
            }
            if (!(dupe)){
                count++;
                domain.push_back(sIndex->text);
            }
            sIndex = sIndex->child;
        }
        fIndex = fIndex->child;
    }
    std::sort(domain.begin(),domain.end());
    std::cout << "Domain(" << std::to_string(count) << "):\n";
    for(int j = 0; j<count; j++){
        std::cout << "  " << domain[j] << "\n";
    }
}