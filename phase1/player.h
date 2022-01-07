//
// Created by hugo-baudry on 07/01/2022.
//

#ifndef TPADEQLOGMAT_PLAYER_H
#define TPADEQLOGMAT_PLAYER_H

#include "board.h"


class player {

    int id;

    void virtual play(board&) = 0;

 
};


#endif //TPADEQLOGMAT_PLAYER_H
