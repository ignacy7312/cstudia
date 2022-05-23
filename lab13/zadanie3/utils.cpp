#include "utils.h"
#include "sort.h"

bool isLess(double a, double b){
    return a < b;
}

bool isGreater(double a, double b){
    return a > b;
}

void saveToFile(std::fstream file, double durBub, double durMer, double durQs){
    file << (std::noskipws) << durBub << ' ' << durMer << ' ' << durQs << '\n';
}



double * generateRandomizedArray(int size, bool decider){
    
    decider == true ? srand(0) : srand(time(NULL));
    
    double * tablica = new double[size];
    double decimal;
    for (int i = 0; i < size; i++){
        decimal  = (double) rand() / 1000;
        tablica[i] = decimal + rand() % 1000;
    }
        
    return tablica; 
}


double calculateDurationBubble(double * array, unsigned int n, sorting::Comparator comparator){
    clock_t beginBubble = clock();
    sorting::bubbleSort(array, n, comparator);
    clock_t endBubble = clock();
    return (double) (endBubble - beginBubble ) / CLOCKS_PER_SEC * 1000;
}

double calculateDurationQs(double * array, int lo, int hi, sorting::Comparator comparator){
    clock_t beginQuick = clock();
    sorting::quickSort(array, lo, hi, comparator);
    clock_t endQuick = clock();
    return (double) (endQuick - beginQuick) / CLOCKS_PER_SEC * 1000;
}
double calculateDurationMer(double * array, int lo, int hi, sorting::Comparator comparator){
    clock_t beginMerge = clock();
    sorting::mergeSort(array, lo, hi, comparator);
    clock_t endMerge = clock();
    return (double) (endMerge - beginMerge) / CLOCKS_PER_SEC * 1000;
}


