//
// Created by DELL on 12/09/2024.
//

#ifndef ATTENTE_H
#define ATTENTE_H
#include "State.h"


class Attente : public State{
public:
    void handelRequest(Player*& player1,Player*& player2);
};



#endif //ATTENTE_H
