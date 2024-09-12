//
// Created by DELL on 11/09/2024.
//

#include "PokemonParty.h"
#include <fstream>
#include <iostream>


PokemonParty::PokemonParty(int id1, int id2, int id3, int id4, int id5, int id6,Pokeball *pokeball) {
    recuperePokemon(pokeball,id1);
    recuperePokemon(pokeball,id2);
    recuperePokemon(pokeball,id3);
    recuperePokemon(pokeball,id4);
    recuperePokemon(pokeball,id5);
    recuperePokemon(pokeball,id6);

}

void PokemonParty::recuperePokemon(Pokeball *pokeball, int id) {
    arrayOfPokemon.push_back(pokeball->getOnePokemonById(id));
}

PokemonParty::~PokemonParty() {
    std::cout <<" " << std::endl;

}

Pokemon* PokemonParty::getOnePokemonByName(string name) {
    int indiceToFind = findPokemonByName(name);
    if (indiceToFind !=-1) {
        Pokemon *pokemon = arrayOfPokemon.at(indiceToFind);
        arrayOfPokemon.erase(arrayOfPokemon.begin()+indiceToFind);
        return (pokemon);

    }

    return nullptr;

}
Pokemon* PokemonParty::getOnePokemonById(int indiceToFind) {

    if (indiceToFind !=-1) {
        Pokemon *pokemon = arrayOfPokemon.at(indiceToFind);
        return (pokemon);

    }

    return nullptr;
}

void PokemonParty::removePokemon(int index) {
    arrayOfPokemon.erase(arrayOfPokemon.begin()+index);
}

