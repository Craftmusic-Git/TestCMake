//
// Created by michel-stegmiller on 07/01/2022.
//

#include <iostream>

#include "board.h"

board::board() {
    for(int i = 0; i < SIZE; i ++){
        for(int j = 0; j < SIZE; j++ ){
            tab[i][j] = 0;
        }
    }
}

bool board::canPlay(int x, int y) {
    if(tab[x][y] == 0) return true;
    else return false;
}

bool board::isFull() {
    for(int i = 0; i < SIZE; i ++){
        for(int j = 0; j < SIZE; j++ ){
            if(tab[i][j] == 0) return false;
        }
    }
    return true;
}

void board::play(int x, int y, int played) {
    if(canPlay(x,y)) tab[x][y] = played;
}

int board::winner() {

}

void board::printTab() {

    for(int i = 0; i < SIZE; i ++){
        for(int j = 0; j < SIZE; j++ ){
            std::cout << " " << tab[i][j];
        }
        std::cout << "\n";
    }
}