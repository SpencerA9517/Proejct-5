cmake_minimum_required(VERSION 3.20)
project(Project1_Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1_Starter_Code
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h CommaAutomaton.cpp CommaAutomaton.h PeriodAutomaton.cpp PeriodAutomaton.h Q_MarkAutomaton.cpp Q_MarkAutomaton.h LeftParenAutomaton.cpp LeftParenAutomaton.h RightParenAutomaton.cpp RightParenAutomaton.h MultiplyAutomaton.cpp MultiplyAutomaton.h AddAutomaton.cpp AddAutomaton.h SchemesAutomaton.cpp SchemesAutomaton.h FactsAutomaton.cpp FactsAutomaton.h RulesAutomaton.cpp RulesAutomaton.h QueriesAutomaton.cpp QueriesAutomaton.h IDAutomaton.cpp IDAutomaton.h StringAutomaton.cpp StringAutomaton.h WhiteSpaceAutomaton.cpp WhiteSpaceAutomaton.h CommentAutomaton.cpp CommentAutomaton.h Parser.cpp Parser.h Parsepart.cpp Parsepart.h DataLog.cpp DataLog.h Scheme.cpp Scheme.h IDList.cpp IDList.h SchemeList.cpp SchemeList.h StringList.cpp StringList.h parameterList.cpp parameterList.h predicateList.cpp predicateList.h Parameter.cpp Parameter.h)
