#include "acutest.h"
#include "fibonacci.h"


void test_fib() {
    TEST_ASSERT(fib(5) == 15);
    TEST_ASSERT(fib(100) == 505000);
    TEST_ASSERT(fib(1000) == 3590035900000);
    TEST_ASSERT(fib(73) == -5000050000);
    TEST_ASSERT(fib(17) == 0);
    TEST_ASSERT(fib(-17) == -1);
}

TEST_LIST= {
    {"Fibonacci", test_fib},
    {NULL, NULL}
};