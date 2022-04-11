#include <iostream>

int main(void){

    //dynamiczna alokacja pojedyncznej zmiennej int
    int * ptr = new int(5);
    //dereferencja wskaznika
    std::cout << "*ptr = " << *ptr << std::endl;
    //zwolnienie pamięci 
    delete ptr;

    //dynamiczna alokacja tablicy floatow
    unsigned int tab_size;
    std::cout << "Enter tab size: \n";
    std::cin >> tab_size;

    float * tab = new float[tab_size];
    //inicjalizacja i wyswietlenie elementow
    for(int i = 0; i < tab_size; i++){
        std::cout << "tab[" << i << "] = " << (tab[i] = i) << '\n';
    }
    //zwolnienie pamięci
    delete[] tab;


    return EXIT_SUCCESS;
}