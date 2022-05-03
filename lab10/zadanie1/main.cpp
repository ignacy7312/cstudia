#include <iostream>
#include <stdio.h>
#include <time.h>
#include "median.h"

int main(void){

    srand (time(nullptr));

    const unsigned int nSize = 10;
    int tab[nSize];
    
    
    for (int i = 0; i < nSize; i++)
        tab[i] = rand() % 300;
    
    printTab(tab, nSize);
    mergeSort(tab, 0, nSize - 1);
    printTab(tab, nSize);

    float buffer;
    float * buptr = &buffer;
    buptr = nullptr;
    median(tab, nSize, &buffer) ? std::cout << "success. median = " << buffer : std::cout << "failure";
    std::cout << std::endl;
    median(tab, nSize, buptr) ? std::cout << "success. median = " << buffer : std::cout << "failure";

    return EXIT_SUCCESS;
}