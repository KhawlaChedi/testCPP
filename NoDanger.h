//
// Created by DELL on 12/09/2024.
//

#ifndef NODANGER_H
#define NODANGER_H
#include "State.h"


class NoDanger : public State{
public:
    void handelRequest(Player*& player1,Player*& player2) ;

};



#endif //NODANGER_H
