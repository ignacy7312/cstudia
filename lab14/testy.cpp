#include <iostream>
#include "gtest.h"
//g++ -o testy testy.cpp -lgtest -pthread    
void foo(){
    std::cout << "booba";
}
int main(int argc, char ** argv){

    testing::internal::CaptureStdout();
    foo();
    std::string output = testing::internal::GetCapturedStdout();
    const char * op = output.c_str();
    std::cout << op;

    return 0;
}