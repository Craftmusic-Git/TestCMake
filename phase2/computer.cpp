//
// Created by hugo-baudry on 07/01/2022.
//

#include "board.h"
#include "player.h"
#include "computer.h"

computer::computer(){

}

void computer::play(board& b) {
    if (b.isFull())
    {
        return;
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (b.canPlay(i,j))
            {
                b.play(i,j,id);
                return;
            }
            
        }
        
    }
    
}