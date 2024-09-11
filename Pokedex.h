//
// Created by DELL on 09/09/2024.
//

#ifndef POKEDEX_H
#define POKEDEX_H
#include "SetOfPokemon.h"

class Pokedex : public SetOfPokemon{
private:
    static Pokedex* instance;
    Pokedex(const std::string filename); // Constructeur privé

public:
    static Pokedex* getInstance(const std::string& filename); // Singleton
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);
    ~Pokedex();
};


#endif //POKEDEX_H
