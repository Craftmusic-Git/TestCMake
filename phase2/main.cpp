//
// Created by michel-stegmiller on 07/01/2022.
//
#include <iostream>

#include "board.h"
#include "computer.h"
#include "player.h"
#include "view.h"
#include "human.h"

int main(int arc, const char *argv[]){
    std::cout << "TIC TAC TOE" << std::endl;

    board bd;
    human man;
    computer comp;
    view vue;

    while (!bd.isFull() && bd.winner() == 0)
    {
        vue.display(bd);
        man.play(bd);
        bd.winner();
        std::cout<<std::endl;
        vue.display(bd);
        comp.play(bd);
        bd.winner();
    }
    
}