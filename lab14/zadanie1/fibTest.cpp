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
    

    TEST(FibonacciZero, ZeroInput){
        EXPECT_EQ(fibonacci(0), (unsigned int) 0);
    }
    





