//
// Created by hugo-baudry on 07/01/2022.
//

#ifndef TPADEQLOGMAT_COMPUTER_H
#define TPADEQLOGMAT_COMPUTER_H

#include "board.h"
#include "player.h"


class computer : public player{

    void virtual play(board&);
 
};


#endif //TPADEQLOGMAT_COMPUTER_H