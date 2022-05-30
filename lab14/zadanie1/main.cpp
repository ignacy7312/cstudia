#include "gtest.h"
#include "fib.h"





//kompilacja g++  main.cpp fib.cpp fibTest.cpp -lgtest -lgtest_main -lpthread -o main
int main(int argc, char ** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}
