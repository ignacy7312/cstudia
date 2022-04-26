#include <iostream>
#include <cstring>


int main(void){

    int tab[4] = {2,1,3,7};
    int tab2[4] = {5,5,5,5};

    for(int i = 0; i < 4; i++)
        std::cout << tab[i] << std::endl;
    for(int i = 0; i < 4; i++)
        std::cout << tab2[i] << std::endl;

    memcpy(tab2, tab, 4*sizeof(int));

    for(int i = 0; i < 4; i++)
        std::cout << tab2[i] << std::endl;

    return 0;
}