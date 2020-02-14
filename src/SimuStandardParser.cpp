//
// Created by Antonin ARBERET on 14/02/2020.
//

#include "SimuStandardParser.h"

SimuStandardParser::SimuStandardParser(){
    isRunning = false;
    lastLine = "";
}

SimuStandardParser::SimuStandardParser(FILE* pipe){
    isRunning = false;
    lastLine = "";
    SimuStandardParser::pipe = pipe;
}


void SimuStandardParser::run() {
    isRunning = true;
    char buffer[128];
    string result = "";
    while(isRunning){
        // read till end of process:
        while (!feof(pipe)) {

            // use buffer to read and add to result
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
        if(result!=lastLine){
            cout<<"parsed : "<<result;
            result = lastLine;
        }

    }
    pclose(pipe);
}

bool IGameTurn::isDraftDone(){
    return false;
}
bool IGameTurn::isTurnDone(){
    return false;
}

void IGameTurn::getMyHand(){

}
void IGameTurn::getOpponentsPlays(){

}
