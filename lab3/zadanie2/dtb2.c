#include <stdio.h>
#include <math.h>

#include "conversion.h"

unsigned long long decimalToBinary(unsigned int number){

    int i = 0;
    unsigned int number_binary = 0;
    for(number; number >= 1; number = number/2){
        int reminder = number % 2;
        number_binary += reminder * ten_power(i);
        i++;
    }
    return number_binary;
}
    
unsigned long long ten_power(int exponent){
    unsigned int result = 1;
    while(exponent > 0){
        result *= 10;
        exponent--;
    }
    return result;
}

