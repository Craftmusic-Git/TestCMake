//
// Created by hugo-baudry on 07/01/2022.
//

#ifndef TPADEQLOGMAT_HUMAN_H
#define TPADEQLOGMAT_HUMAN_H

#include "board.h"
#include "player.h"

class human : public player{

public : void virtual play(board&);

    virtual ~human() = default;
};


#endif //TPADEQLOGMAT_HUMAN_H
