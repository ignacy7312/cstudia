#include "fib.h"
#include "gtest.h"

TEST(FibonacciTest, FirstElements){
    EXPECT_EQ(fibonacci(1), (unsigned int) 1);
    EXPECT_EQ(fibonacci(2), (unsigned int) 1);
    EXPECT_EQ(fibonacci(3), (unsigned int) 2);
}

TEST(FibonacciTest, LaterElements){
    EXPECT_EQ(fibonacci(5), (unsigned int) 5);
    EXPECT_EQ(fibonacci(10), (unsigned int) 55);
}

TEST(FibonacciTestInvalidInput, ZeroInput){
    EXPECT_EXIT(fibonacci(0), testing::ExitedWithCode(EXIT_FAILURE), "Invalid input");
}



