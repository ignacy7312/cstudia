#include <iostream>
#include "fib.h"

int main(void){

    for(int i = 1; i <= 10; i++)
        std::cout << fibonacci(i);
    return 0;
}