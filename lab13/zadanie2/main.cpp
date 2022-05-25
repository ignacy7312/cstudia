#include <iostream>
#include <stdlib.h>
#include "time.h"
#include "sort.h"

bool isLess(double a, double b);
bool isGreater(double a, double b);

//kod funkcji położony jest w segmencie text
//biblioteka zajmuje 0x590 czyli 1424 B

//roznica miedzy .exe z bib. statyczną i dynamiczną wynosi ok 1kb, czyli się zgadza

int main(void){

    srand(time(nullptr));

    double lista1[3000];
    double lista2[3000];
    double lista3[3000];
    double decimal;
    for (int i = 0; i < 3000; i++){
        decimal  = (double) rand() / 1000;
        lista1[i] = decimal + rand() % 1000;
        decimal  = (double) rand() / 1000;
        lista2[i] = decimal + rand() % 1000;
        decimal  = (double) rand() / 1000;
        lista3[i] = decimal + rand() % 1000;
    }
    
    sorting::bubbleSort(lista1, 3000, (*isGreater));
    sorting::mergeSort(lista2, 0, 2999, (*isLess));
    sorting::quickSort(lista3, 0, 2999, (*isLess));

    for (int i = 0; i < 3000; i++){
        std::cout << lista1[i] << ' ' << lista2[i] << ' ' << lista3[i] << std::endl; 
    }

    return EXIT_SUCCESS;
}


bool isLess(double a, double b){
    return a < b;
}
bool isGreater(double a, double b){
    return a > b;
}
