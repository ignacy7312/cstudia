#include <iostream>
#include <time.h>
#include <cstdlib>
#include "tabUtils.h"


int main(void){

    time_t t;
    srand(time(NULL));
  
    const unsigned int t_size = 15;

    int tab[t_size];
    for(int i = 0; i < t_size; i++){
        tab[i] = rand() % 100;
    }
    
    printTab(tab, sizeof(tab)/sizeof(int));
    reverseTab(tab,sizeof(tab)/sizeof(int));
    printTab(tab, sizeof(tab)/sizeof(*tab));

    //std::cout << '\n' << sizeof(tab)/sizeof(*tab);
    return EXIT_SUCCESS;
}