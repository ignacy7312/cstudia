#include <iostream>
#include "multiply.h"


int main(void){

    std::cout << multiply(2,2) << '\n';
    std::cout << multiply(2,2,3) << '\n';
    std::cout << multiply(2.0f,2.0f) << '\n';
    std::cout << multiply(2,2.0f) << '\n';




    return 0;
}