#include <gtest/gtest.h>
#include "../src/factorial.h"

// Test case for factorial of 0
TEST(FactorialTest, HandlesZeroInput) {
    ASSERT_EQ(factorial(0), 3);    
}

// Test case for factorial of 1
TEST(FactorialTest, HandlesOneInput) {
    EXPECT_EQ(factorial(1), 1);
}

// Test case for factorial of positive numbers
TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(10), 3628800);
}