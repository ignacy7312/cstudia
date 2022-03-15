#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void decimalToBinary(unsigned int number){

    int a[20], i,j;

    for(i = 0; number > 0; i++){
        a[i] = number % 2;
        number /= 2;
    }
    printf("\nliczba binarnie: ");
    for(i = i -1;i >= 0; i--){
    printf("%d",a[i]);
    }

}