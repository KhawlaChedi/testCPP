//
// Created by DELL on 12/09/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Attente.h"
#include "Player.h"
#include "State.h"


class Game {
private:
    State * state=new Attente();
    Player *player1;
    Player *player2;
public:
    void setState(State *state);
    void request();



};



#endif //GAME_H
