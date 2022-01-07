//
// Created by hugo-baudry on 07/01/2022.
//

#include "board.h"
#include "player.h"
#include "computer.h"

void computer::play(board& b) {
    if (b.isFull())
    {
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b.canPlay(i,j))
            {
                b.play(i,j,id);
            }
            
        }
        
    }
    
}