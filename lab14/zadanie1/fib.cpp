#include "fib.h"

unsigned int fibonacci(unsigned int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else 
        return fibonacci(n - 2) + fibonacci(n - 1);
}