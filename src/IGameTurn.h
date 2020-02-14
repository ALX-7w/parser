//
// Created by Antonin ARBERET on 14/02/2020.
// Interface use by Alex to read the game

#ifndef CORE_IGAMETURN_H
#define CORE_IGAMETURN_H


class IGameTurn {
public:
    virtual bool isDraftDone();
    virtual bool isTurnDone();
    //types to be defined later
    virtual void getMyHand();
    virtual void getOpponentsPlays();
};


#endif //CORE_IGAMETURN_H
