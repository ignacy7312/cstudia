#include <iostream>

int main(void){


    int tab[5];
    tab[0] = 1;
    tab[6] = 4;

    
    std::cout << sizeof(tab)/sizeof(*tab);

    return 0;
}