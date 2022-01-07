//
// Created by michel-stegmiller on 07/01/2022.
//

#ifndef TPADEQLOGMAT_BOARD_H
#define TPADEQLOGMAT_BOARD_H


class board {
 enum state{
     VOID = 0,
     HUMAN = 1,
     COMPUTER = 2
 };

 board();

 bool canPlay(int, int);
 void play(int, int, int);
 bool isFull();
 int winner();
};


#endif //TPADEQLOGMAT_BOARD_H
