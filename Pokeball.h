//
// Created by DELL on 11/09/2024.
//

#ifndef POKEBALL_H
#define POKEBALL_H
#include "Pokedex.h"
#include "SetOfPokemon.h"



class Pokeball : public SetOfPokemon{
public:
    Pokeball();
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);
    void attrapePokemon(Pokedex *pokedex,int index);
    ~Pokeball();

};



#endif //POKEBALL_H
