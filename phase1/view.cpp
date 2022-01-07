//
// Created by hugo-baudry on 07/01/2022.
//

#include "board.h"
#include "view.h"
#include <iostream>

view::view(){
    
}

void view::display(board& b) {
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            switch (b.tab[i][j])
            {
            case 0:
                std::cout<<".";
                break;
            case 1:
                std::cout<<"X";
                break;
            case 2:
            std::cout<<"O";
                break;
            default:
                break;
            }
        }
        std::cout<<std::endl;
        
    }
    
}