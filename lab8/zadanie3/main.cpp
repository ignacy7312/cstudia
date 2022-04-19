#include <iostream>
#include <string.h>
#include "arrayUtils.h"

int main(void){

    int k = 1;
    char * tablica = new char[5];
    char a,b;

    resizeArray(tablica, 3);

    std::cout << "Wpisuj znaki dopoki sie nie powtorza dwa razy:\n";
    
    for(int i = 0; i < 5*k; i++){
        
        //wczytanie i sprawdzenie czy sie nie powtarza, jesli tak to wyjscie z petli poprzez zwiekszenie wartosci i
        std::cin >> std::noskipws >> a;
        (a == b) ? i = 5*k : tablica[i] = a;
        b = a;

        if(i == 5*k-1){  //ostatni element tablicy
            k++;        //zwiekszenie mnzonika
            tablica = resizeArray(tablica, 5*k); //zwiekszenie tablicy o kolejne 5 elementow
        }
    }
    
    std::cout << tablica << std::endl;

    return EXIT_SUCCESS;
}