#include <iostream>
#include "tabUtils.h"

void printTab(const int * const tab, unsigned int size){ //funkcja operuje na oryginalnej tablicy ale jej nie zmienia
    std::cout << '[';
    for(int i = 0; i < size; i++){
        std::cout << tab[i];
        (i == size - 1) ? std::cout << ']' << std::endl : std::cout << ',';
    }
}

void reverseTab(int * const tab, unsigned int size){ //funkcja operuje na oryginalnej tablicy i ja zmienia
    int placeholder;
    for(int i = 0; i < size/2; i++){
        placeholder = tab[i];
        tab[i] = tab[size-1-i];
        tab[size-1-i] = placeholder;
    }
}
