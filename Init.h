//
// Created by DELL on 12/09/2024.
//

#ifndef INIT_H
#define INIT_H
#include "State.h"


class Init : public State{
public:
    void handelRequest(Player*& player1,Player*& player2);

};



#endif //INIT_H
