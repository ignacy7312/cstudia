#include <stdio.h>
#include "conversion.h"

int main(void){
    
    unsigned long long tests[8]; 
    unsigned long long results[8];

    tests[0] = 0;
    tests[1] = 4;
    tests[2] = 1;
    tests[3] = 700;
    tests[4] = 255;
    tests[5] = 16;
    tests[6] = 2;
    tests[7] = 35;

    results[0] = 0;
    results[1] = 100;
    results[2] = 1;
    results[3] = 1010111100;
    results[4] = 11111111;
    results[5] = 10000;
    results[6] = 10;
    results[7] = 100011;

    int i = 0;
    while(i < 8){
        
        //printf("liczba binarnie: %u\n",decimalToBinary(tests[i]));
        char t = decimalToBinary(tests[i]) == results[i] ? 'd' : 'z' ;
        printf("%c",t);
        i++;
    }
    
   //for(int i = 0; i < 10 ; i++)
   //printf("i = %d liczba binarnie: %u\n",i,decimalToBinary(tests[i]));
    
    return 0;
}

