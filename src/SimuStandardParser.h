//
// Created by Antonin ARBERET on 14/02/2020.
//

#ifndef CORE_SIMUSTANDARDPARSER_H
#define CORE_SIMUSTANDARDPARSER_H

#include "IGameTurn.h"

#include <string>
#include <iostream>
#include <stdexcept>
#include <stdio.h>

using namespace std;

class SimuStandardParser: public IGameTurn{
public:
    void run();
    SimuStandardParser();
    SimuStandardParser(FILE* pipe);


private:
    bool isRunning;
    string lastLine;
    FILE* pipe;
};


#endif //CORE_SIMUSTANDARDPARSER_H
