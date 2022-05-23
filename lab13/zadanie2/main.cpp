#include <iostream>
#include <stdlib.h>
#include "time.h"
#include "sort.h"

bool isLess(double a, double b){
    return a < b;
}


int main(void){

    srand(time(nullptr));

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
    for (int i = 0; i < 3000; i++){
        std::cout << lista1[i] << ' ' << lista2[i] << ' ' << lista3[i] << std::endl; 
    }
    
    sorting::bubbleSort(lista1, 3000, (*isLess));


    return EXIT_SUCCESS;
}