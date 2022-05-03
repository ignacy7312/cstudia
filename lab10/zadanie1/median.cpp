#include <iostream>
#include <cstring>
#include "median.h"

//wyswietl zawartość tablicy
void printTab(const int * const tab, unsigned int size){ //funkcja operuje na oryginalnej tablicy ale jej nie zmienia
    std::cout << '[';
    for(int i = 0; i < size; i++){
        std::cout << tab[i];
        (i == size - 1) ? std::cout << ']' << std::endl : std::cout << ',';
    }
}

//funkcja scalania tablic
void merge(int * array, unsigned int lo, unsigned int mi, unsigned int hi){

    //kopia przesłanej tablicy
    const unsigned int tabSize = hi + 1;
    int arrayCopy[tabSize]; 
    memcpy(arrayCopy, array, sizeof(*arrayCopy)*tabSize);

    unsigned int iterator = lo;
    unsigned int loIterator = lo;
    unsigned int hiIterator = mi + 1;
    
    // Scalaj tablice do tablicy wynikowej az do wyczerpania elementow jednej z podtabli
    while (loIterator <= mi && hiIterator <= hi){
        if (arrayCopy[loIterator] <= arrayCopy[hiIterator])
            array[iterator++] = arrayCopy[loIterator++];
        else
            array[iterator++] = arrayCopy[hiIterator++];
    }

    //Dopisz pozostałe elementy pierwszej podtablicy d otabily wynikowej, jeśli istnieja
    while (loIterator <= mi)
        array[iterator++] = arrayCopy[loIterator++];

    //Dopisz pozostale elementy druhiej podtablicy wynikowej, jesli insteja
    while (hiIterator <= hi)
        array[iterator++] = arrayCopy[hiIterator++];
/* array - tablica do posortowania
lo - indeks poczatkowy
hi - indeks koncowy */

}


void mergeSort(int * array, unsigned int lo, unsigned int hi){
    if (array && hi > lo){
        //znajdz punkt podzialu tablicy
        unsigned int mi = (lo + hi) / 2;
        //wywolania rekurencyjne na kazdej z powstalych podtablic
        mergeSort(array, lo, mi);
        mergeSort(array, mi + 1, hi);
        //scal tablice
        merge(array, lo, mi, hi);
    }
}



bool median(const int * tab, unsigned int n, float * buffer){

    if(tab != nullptr && buffer != nullptr){
        *buffer = (n % 2 == 0) ? ((float) (tab[n/2 - 1] + tab[n/2]))/2 : tab[(n+1)/2 - 1];  //-1 bo indeksy muszą się zgadzać
        return true;
    } else {
        return false;
    }
}