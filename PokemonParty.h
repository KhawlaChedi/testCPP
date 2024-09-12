//
// Created by DELL on 11/09/2024.
//

#ifndef POKEMONPARTY_H
#define POKEMONPARTY_H
#include "Pokeball.h"
#include "SetOfPokemon.h"


class PokemonParty : public SetOfPokemon{
public:
    PokemonParty(int id1,int id2,int id3,int id4,int id5,int id6,Pokeball *pokeball);
    ~PokemonParty();
    void recuperePokemon (Pokeball *pokeball , int id);
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);

    void removePokemon(int index);
};



#endif //POKEMONPARTY_H
