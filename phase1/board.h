//
// Created by michel-stegmiller on 07/01/2022.
//

#ifndef TPADEQLOGMAT_BOARD_H
#define TPADEQLOGMAT_BOARD_H

#define SIZE 3

#define VOID 0
#define HUMAN 1
#define COMPUTER 2

class board {
public :
 board();

 bool canPlay(int, int);
 void play(int, int, int);
 bool isFull();
 int winner();

public :
    int tab[3][3];
};


#endif //TPADEQLOGMAT_BOARD_H
