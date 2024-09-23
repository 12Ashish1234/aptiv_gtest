#include <iostream>
#include <gtest/gtest.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

TEST(FactorialTest, HandlesZeroInput)
{
    ASSERT_EQ(factorial(0), 1);
}

// Test case for factorial of positive numbers
TEST(FactorialTest, HandlesPositiveInput)
{
    ASSERT_EQ(factorial(1), 1);
    ASSERT_EQ(factorial(2), 2);
    ASSERT_EQ(factorial(3), 6);
    ASSERT_EQ(factorial(4), 24);
    ASSERT_EQ(factorial(5), 120);
}

// Test case for factorial of negative numbers
TEST(FactorialTest, HandlesNegativeInput)
{
    ASSERT_EQ(factorial(-1), 1); // Assuming factorial of negative numbers is 1
}