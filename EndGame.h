//
// Created by DELL on 12/09/2024.
//

#ifndef ENDGAME_H
#define ENDGAME_H
#include "State.h"


class EndGame : public State {
public:

    void handelRequest(Player*& player1,Player*& player2) override;

};



#endif //ENDGAME_H
