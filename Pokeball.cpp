//
// Created by DELL on 11/09/2024.
//
#include <fstream>

#include "Pokeball.h"

#include <iostream>

Pokeball::Pokeball() {

}
Pokeball::~Pokeball() {

}
void Pokeball::attrapePokemon(Pokedex *pokedex,int index) {
    arrayOfPokemon.push_back(pokedex->getOnePokemonById(index));
}


Pokemon* Pokeball::getOnePokemonByName(string name) {
    int indiceToFind = findPokemonByName(name);
    if (indiceToFind !=-1) {
        Pokemon *pokemon = arrayOfPokemon.at(indiceToFind);
        arrayOfPokemon.erase(arrayOfPokemon.begin()+indiceToFind);
        return (pokemon);

    }

    return nullptr;
}
Pokemon* Pokeball::getOnePokemonById(int id) {
    int indiceToFind = findPokemonById(id);
    if (indiceToFind !=-1) {
        Pokemon *pokemon = arrayOfPokemon.at(indiceToFind);
        arrayOfPokemon.erase(arrayOfPokemon.begin()+indiceToFind);
        return (pokemon);

    }

    return nullptr;
}
