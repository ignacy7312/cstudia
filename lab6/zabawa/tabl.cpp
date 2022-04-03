#include <iostream>
#define MAXSIZE 15

int main(void){

    const unsigned int tab_size = 10;
    const unsigned int mtbs = 5;

    int tab[MAXSIZE] = {2,1,3,7};
    char tab1[7] = {"czesc\0"};
    char k[tab_size] = {"123\0"};
    for(int i = 0; i < tab_size; i++){
        std::cout << k[i];
    }

    std::cout << std::endl;
    int tablica[mtbs][mtbs];
    for(int i = 0; i< mtbs; i++){ 
        for(int j = 0; j < mtbs; j++){
            tablica[i][j] = i;
        }
    }
    for(int i = 0; i< mtbs; i++)
        for(int j = 0; j < mtbs; j++)
            std::cout <<tablica[i][j];
    std::cout << '\n';

    //rownowazne zapisy
    std::cout << k[1] << std::endl;
    std::cout << *(k + 1) << std::endl;

    return 0;
}