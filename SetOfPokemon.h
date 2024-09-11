//
// Created by DELL on 09/09/2024.
//

#ifndef SETOFPOKEMON_H
#define SETOFPOKEMON_H
#include <vector>
#include "Pokemon.h"

class SetOfPokemon {
    protected :
        std::vector<Pokemon *> arrayOfPokemon;
        int findPokemonByName(string name);
        int findPokemonById(int id);
    public :
    virtual Pokemon* getOnePokemonByName(string name)=0;
    virtual Pokemon* getOnePokemonById(int id)=0;
    void displayList();
    SetOfPokemon();

    // virtual ~SetOfPokemon();
};


#endif //SETOFPOKEMON_H
