//
// Created by DELL on 12/09/2024.
//

#ifndef DANGER_H
#define DANGER_H
#include "State.h"


class Danger : public State{
public:
    void handelRequest(Player*& player1,Player*& player2) ;

};



#endif //DANGER_H
