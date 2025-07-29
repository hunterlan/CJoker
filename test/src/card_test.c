#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../../include/card.h"

card c = { .rank = RANK_TWO, .card_suit = club };

void test_card_rank_modification_should_pass() {
  CU_ASSERT_TRUE(card_rank_modification(&c, RANK_THREE) == 0);
  CU_ASSERT_TRUE(card_rank_modification(&c, RANK_KING) == 0);
  CU_ASSERT_TRUE(card_rank_modification(&c, RANK_TWO) == 0);
  CU_ASSERT_TRUE(card_rank_modification(&c, RANK_ACE) == 0);
  CU_ASSERT_TRUE(card_rank_modification(&c, 1) == -1);
  CU_ASSERT_TRUE(card_rank_modification(&c, 15) == -1);
}

void test_card_rank_modification_should_not_pass() {
  CU_ASSERT_FALSE(card_rank_modification(&c, 1) == 0);
  CU_ASSERT_FALSE(card_rank_modification(&c, 15) == 0);
  CU_ASSERT_FALSE(card_rank_modification(&c, RANK_TWO) == -1);
  CU_ASSERT_FALSE(card_rank_modification(&c, RANK_ACE) == 1);
}
