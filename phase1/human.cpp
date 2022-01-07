//
// Created by hugo-baudry on 07/01/2022.
//

#include <iostream>

#include "board.h"
#include "player.h"
#include "human.h"

void human::play(board& b) {
    std::cout << "Ligne : ";
    int ligne;
    int col;
    do {
        std::cin >> ligne;
        std::cin >> col;
    }while (b.canPlay(ligne,col));
    b.play(ligne,col,HUMAN);
}