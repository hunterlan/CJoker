#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "include/card_test.h"

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

int main() {
  if (CU_initialize_registry() != CUE_SUCCESS) {
      return CU_get_error();
  }

  CU_pSuite pSuite = CU_add_suite("Main_Suite", init_suite, clean_suite);
  if (pSuite == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if (CU_add_test(pSuite, "Card Test Pass", test_card_rank_modification_should_pass) == NULL
    || CU_add_test(pSuite, "Card Test Not Pass", test_card_rank_modification_should_not_pass) == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  CU_basic_run_tests();

  CU_cleanup_registry();
  return CU_get_error();
}