//symbole debugowe - kompilacja z -g; rozp debugowania GDB nazwa

#include <iostream>
#include "fib.h"

int main(void){

    //int x = 5;
    //fibonacci(5);

    std::cout << fibonacci(11) << '\n';
    //std::cout << iterFib(11)   << '\n';
    //std::cout << iterFib2(11)   << '\n';

    /*for(int k = 1; k <= 8; k++)
        std::cout << fibonacci(k);

    std::cout << std::endl;
    
    for(int k = 1; k <= 8; k++)
        std::cout << iterFib(k);

    std::cout << std::endl;

    for(int k = 1; k <= 8; k++)
        std::cout << iterFib2(k);*/
    
    return 0;
}