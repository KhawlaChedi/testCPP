cmake_minimum_required(VERSION 3.29)
project(testCPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(testCPP main.cpp
        Pokemon.cpp
        Pokemon.h
        SetOfPokemon.cpp
        SetOfPokemon.h
        Pokedex.cpp
        Pokedex.h
        Pokeball.cpp
        Pokeball.h
        PokemonParty.cpp
        PokemonParty.h
)
