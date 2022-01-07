//
// Created by hugo-baudry on 07/01/2022.
//

#ifndef TPADEQLOGMAT_PLAYER_H
#define TPADEQLOGMAT_PLAYER_H

#include "board.h"


class player {

    player();

    virtual void play(board&) = 0;

    protected:
        int id;
};


#endif //TPADEQLOGMAT_PLAYER_H
