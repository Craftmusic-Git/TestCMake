//
// Created by hugo-baudry on 07/01/2022.
//

#include <iostream>

#include "board.h"
#include "player.h"
#include "human.h"

void human::play(board& b) {
    int ligne;
    int col;
    do {
        std::cout << "Ligne : ";
        std::cin >> ligne;
        std::cout << "Colonne : ";
        std::cin >> col;
    }while (!b.canPlay(ligne,col));
    b.play(ligne,col,HUMAN);
}