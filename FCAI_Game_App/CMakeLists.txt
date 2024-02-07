cmake_minimum_required(VERSION 3.26)
project(FCAI_Game_App)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(FCAI_Game_App
        Board_Games.hpp
        connect4.cpp
        Game_App.cpp
        GameManager.cpp
        Player.cpp
        Pyramid_X_O.cpp
        RandomPlayer.cpp
        X_O_5X5.cpp
        X_O_Game.cpp)
