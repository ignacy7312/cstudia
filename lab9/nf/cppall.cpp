#include <iostream>



int main(void){
    int nSize = 3;

    int *  liczba = new int(15);
    *liczba = 20;
    int * tablica = new int[3];

    std::cout << liczba << ' ' << &liczba <<' ' << *liczba << std::endl;

    for (int i = 0; i < nSize; i++)
        std::cout << i << ' ' << (tablica[i] = i + 7) << std::endl;

    delete liczba;
    delete[] tablica;

    return 0;
}