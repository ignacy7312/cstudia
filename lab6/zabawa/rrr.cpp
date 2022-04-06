
#include <iostream>

void printTab(const int * const tab, unsigned int size){
    for(int i = 0; i < size; i++)
        std::cout << tab[i];
}

void reverseTab(int * const tab, unsigned int size){ 
    int k;
    for(int i = 0; i < size/2; i++){
        k = tab[i];
        tab[i] = tab[size-1-i];
        tab[size-1-i] = k;
    }
}

int main(void){







    return 0;
}