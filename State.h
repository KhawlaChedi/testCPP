//
// Created by DELL on 12/09/2024.
//

#ifndef STATE_H
#define STATE_H
#include "Player.h"


class State {
protected:
    int nbWinP1;
    int nbWinP2;

    Pokedex *pokedexGame=Pokedex::getInstance("../ressources/pokedex.csv");
public:
    virtual void handelRequest(Player*& player1,Player*& player2)=0;
    virtual ~State()=default;

};



#endif //STATE_H
