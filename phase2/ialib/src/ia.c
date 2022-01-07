#include "../include/ia.h"

void iaplay(int grid[3][3], int* l, int* c){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 0)
            {
                *l = i;
                *c = j;
                return;
            }
        }
    }
}
