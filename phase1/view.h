//
// Created by hugo-baudry on 07/01/2022.
//

#ifndef TPADEQLOGMAT_VIEW_H
#define TPADEQLOGMAT_VIEW_H

#include "board.h"

class view {
public:
    view();

    void display(board&);

    virtual ~view() = default;

};


#endif //TPADEQLOGMAT_VIEW_H
