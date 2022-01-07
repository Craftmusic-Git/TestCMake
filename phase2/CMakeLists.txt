cmake_minimum_required(VERSION 3.10)
project(tictactoe)

include_directories(include ~/Documents/Hugo/2A/Assembleur/TP1/tpadeqlogmat/phase2/ialib/include)

link_directories(~/Documents/Hugo/2A/Assembleur/TP1/tpadeqlogmat/phase2/ialib/build)

add_executable(
        tictactoe
        board.h
        board.cpp
        computer.h
        computer.cpp
        human.h
        human.cpp
        player.h
        player.cpp
        view.h
        view.cpp
        main.cpp
)

target_link_libraries(tictactoe libia.a)