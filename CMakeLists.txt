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
        State.cpp
        State.h
        Attente.cpp
        Attente.h
        Player.cpp
        Player.h
        Init.cpp
        Init.h
        Game.cpp
        Game.h
        NoDanger.cpp
        NoDanger.h
        Danger.cpp
        Danger.h
        Battle.cpp
        Battle.h
        EndGame.cpp
        EndGame.h
)
