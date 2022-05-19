#include <iostream>
#include <stdlib.h>
#include "time.h"
#include "sort.h"


int main(void){

    srand(NULL);

    double lista1[3000];
    double lista2[3000];
    double lista3[3000];
    double x;
    for (int i = 0; i < 3000; i++){
        x = 1 + rand() % 1000;
        lista1[i] = x;
        x = 1 + rand() % 1000;
        lista2[i] = x;
        x = 1 + rand() % 1000;
        lista3[i] = x;
        }

    return EXIT_SUCCESS;
}