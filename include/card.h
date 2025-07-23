//
// Created by hunterlan on 22-Jul-25.
//

#ifndef CARD_H
#define CARD_H

#define RANK_TWO 2
#define RANK_THREE 3
#define RANK_FOUR 4
#define RANK_FIVE 5
#define RANK_SIX 6
#define RANK_SEVEN 7
#define RANK_EIGHT 8
#define RANK_NINE 9
#define RANK_TEN 10
#define RANK_JACK 11
#define RANK_QUEEN 12
#define RANK_KING 13
#define RANK_ACE 14

enum suit {
    club = 0,
    diamond = 1,
    heart = 2,
    spade = 3
};

typedef struct {
    unsigned int rank;
    enum suit card_suit;
} card;

int card_rank_modification(card *c, unsigned int new_rank);
int card_suit_modification(card *c, enum suit card_suit);

#endif //CARD_H
