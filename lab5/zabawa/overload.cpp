#include <iostream>

int multiply(int x, int y){ return x*y;}

int multiply(int x, int y, int z){ return x*y*z;}

float multiply(float x, float y){ return x*y;}

float multiply(int x, float y){ return x*y;}



int main(void){

    std::cout << multiply(2,2) << '\n';
    std::cout << multiply(2,2,3) << '\n';
    std::cout << multiply(2.0f,2.0f) << '\n';
    std::cout << multiply(2,2.0f) << '\n';

    return 0;
}