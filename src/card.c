//
// Created by hunterlan on 22-Jul-25.
//

#include "../include/card.h"


int card_rank_modification(card *c, unsigned int new_rank) {
    if (new_rank > RANK_ACE || new_rank < RANK_TWO) {
        return -1;
    }

    c->rank = new_rank;

    return 0;
}