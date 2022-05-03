#include <iostream>


void printTab(const int * tab, unsigned int size);
void swap(int * a, int * b);
int partition(int * tab, int lo, int hi);
void quickSort(int * tab, int lo, int hi);



int main(void){
    const unsigned int tabSize = 24;
    int tablica[tabSize] = {5,4,1,62,4,7,2,1,4,7,8,8,2,3,56,1,3,6,3,2,-2,1,-20,-100};
    
    std::cout << sizeof(tablica)/sizeof(*tablica) << ' ' << sizeof(tablica)/sizeof(unsigned int) << std::endl;
    printTab(tablica, sizeof(tablica)/sizeof(unsigned int));
    quickSort(tablica, 0, sizeof(tablica)/sizeof(unsigned int));
    printTab(tablica, sizeof(tablica)/sizeof(unsigned int) - 1);

    return 0;
}


//wyswietl zawartość tablicy
void printTab(const int * const tab, unsigned int size){ //funkcja operuje na oryginalnej tablicy ale jej nie zmienia
    std::cout << '[';
    for(int i = 0; i < size; i++){
        std::cout << tab[i];
        (i == size - 1) ? std::cout << ']' << std::endl : std::cout << ',';
    }
}

//zmien kolenjosc elementow tablicy
void swap(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//funkcja partycjonowania tablicy
int partition(int * tab, int lo, int hi){
    // Ostatni element tablicy to piwot
    int pivot = tab[hi];
    //ustaw punkt podzialu tablicy na indeks początkowy
    int pivotIdx = lo;
    //iteruj po zakresie indeksow
    for(unsigned int i = lo; i < hi; i++){
        //jezeli element tabliy jst niewiekszy niz piwot
        if(tab[i] <= pivot){
            //umiesc element przed punktem podzialu tablicy
            swap(tab + i, tab + pivotIdx);
            //zaktualizuj indeks podzialu
            pivotIdx++;
        }
    }
    //umiesc piwot na wlasciwej pozycji
    swap(tab + hi, tab + pivotIdx);
    return pivotIdx;
}

void quickSort(int * tab, int lo, int hi){
    if (tab != NULL && hi > lo){
        //wyznacz indeks podzialu tablicy
        int pivotIdx = partition(tab, lo, hi);
        //osobno posortuj tablice powstale po podziale
        quickSort(tab, lo, pivotIdx -1);
        quickSort(tab, pivotIdx + 1, hi);
    }
}