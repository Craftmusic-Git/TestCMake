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
    for(int i = 0; i < SIZE; i++){
        if((tab[0][i] == tab[1][i])&&(tab[1][i] == tab[2][i])&&(tab[1][i] != VOID)) return tab[0][i];
        if((tab[i][0] == tab[i][1])&&(tab[i][1] == tab[i][2])&&(tab[i][1] != VOID)) return tab[i][0];
    }

    if((tab[0][0] == tab[1][1])&&(tab[1][1] == tab[2][2])&&(tab[1][1] != 0)) return tab[0][0];
    if((tab[2][0] == tab[1][1])&&(tab[1][1] == tab[0][2])&&(tab[1][1] != 0)) return tab[2][0];
    return 0;
}
