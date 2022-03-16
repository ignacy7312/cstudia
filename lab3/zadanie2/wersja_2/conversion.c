#include <stdio.h>
#include "conversion.h"


void decimalToBinary(unsigned int number){

    int i = 0;
    unsigned int number_binary = 0; // zmienna przechowująca numer zapisany binarnie
    for(number; number >= 1; number = number/2){
        int remainder = number % 2;
        number_binary += remainder * ten_power(i);
        i++;
    }
    printf("%u", number_binary);
}
    
unsigned long ten_power(int exponent){
    
    /* funkcja podnosząca 10 do danej potęgi.
    musiałem zdefiniować własną funkcję, ponieważ fcja pow(a,b) z biblioteki math.h
    operuje na float i liczy potęgę ze wzoru exp(log(x)*y), co skutkowwało obcinaniem 
    np 9999.999999 do 9999 przy konwersji na int   */
    
    unsigned int result = 1;
    while(exponent > 0){
        result *= 10;
        exponent--;
    }
    return result;
}
