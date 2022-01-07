//
// Created by hugo-baudry on 07/01/2022.
//

#include "board.h"
#include "player.h"
#include "computer.h"
#include "ialib/include/ia.h"

computer::computer(){

}

void computer::play(board& b) {
    if (b.isFull())
    {
        return;
    }
    int *l, *c;
    iaplay(b.tab,l,c);
    b.play(*l,*c,id);    
}