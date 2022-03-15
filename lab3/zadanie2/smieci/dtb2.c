#include <stdio.h>
#include <math.h>
#include "conversion.h"


unsigned long long decimalToBinary(unsigned int number){

    int i = 0;
    unsigned int number_binary = 0; // zmienna przechowująca numer zapisany binarnie
    for(number; number >= 1; number = number/2){
        int remainder = number % 2;
        number_binary += remainder * ten_power(i);
        i++;
    }
    return number_binary;
}
    
unsigned long long ten_power(int exponent){
    
    /* funkcja podnosząca 10 do danej potęgi*/
    
    unsigned int result = 1;
    while(exponent > 0){
        result *= 10;
        exponent--;
    }
    return result;
}


