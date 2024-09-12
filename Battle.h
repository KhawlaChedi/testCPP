//
// Created by DELL on 12/09/2024.
//

#ifndef BATTLE_H
#define BATTLE_H
#include "State.h"


class Battle : public State {
public:
    void handelRequest(Player*& player1,Player*& player2) override;

};



#endif //BATTLE_H
