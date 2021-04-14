#include "unity.h"
#include <main.h>

/* Prototypes for all the test functions */
void test_balance(void);
void test_deposite(void);
void test_withdraw(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_balance);
  RUN_TEST(test_deposite);
  RUN_TEST(test_withdraw);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_balance(void) {
  TEST_ASSERT_EQUAL(30, balance(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, balance(7500, 7500));
}

void test_deposite(void) {
  TEST_ASSERT_EQUAL(-3, deposite(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, deposite(1000, 900));
}

void test_withdraw(void) {
  TEST_ASSERT_EQUAL(0, withdraw(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, withdraw(2, 5));
}
