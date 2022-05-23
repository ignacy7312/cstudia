#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "time.h"
#include "sort.h"
#include "utils.h"


int main(void){

    std::fstream resultsFile;
    resultsFile.open("data.txt", std::ios_base::out);
    if (!resultsFile.is_open()){
        exit(EXIT_FAILURE);
    }
    resultsFile << (std::noskipws) << "bubbleSort" << ' ' << "mergeSort" << ' ' << "quickSort\n"; 

    double * lista1; 
    double * lista2; 
    double * lista3;
    double bubbleDur, mergeDur, quickDur;
    int sampleSizes[] = {10, 100, 1000, 10000, 20000};//100000};
    int n; 

    char partSelector;
    std::cout << "Enter f for the fist part or s the for second part" << std::endl;
    std::cin >> partSelector;

    if (partSelector == 'f'){   //wyznacz czasy dla poszczegolnych wielkosci probek
        
        for (int i = 0; i < sizeof(sampleSizes)/sizeof(int); i++){ 
    
            n = sampleSizes[i];

            lista1 = generateRandomizedArray(n, true);
            lista2 = generateRandomizedArray(n, true);
            lista3 = generateRandomizedArray(n, true);

            bubbleDur = calculateDurationBubble(lista1, n, isGreater);
            mergeDur = calculateDurationMer(lista2, 0, n - 1, isLess);
            quickDur = calculateDurationQs(lista3, 0, n - 1, isLess);

            resultsFile << (std::noskipws) << "Random order:\n";
            resultsFile << (std::noskipws) << bubbleDur << ' ' << mergeDur << ' ' << quickDur << '\n';

            bubbleDur = calculateDurationBubble(lista1, n, isLess);
            mergeDur = calculateDurationMer(lista2, 0, n - 1, isGreater);
            quickDur = calculateDurationQs(lista3, 0, n - 1, isGreater);

            resultsFile << (std::noskipws) << "Worst-case scenario:\n";
            resultsFile << (std::noskipws) << bubbleDur << ' ' << mergeDur << ' ' << quickDur << '\n';
        }
    }

    else if (partSelector == 's'){  //wyznacz czas dla 100 różnych próbek przy takiej samej wielkosći 
        
        n = 10000;
        lista2 = new double[n];
        lista3 = new double[n];

        for (int i = 0;  i < 100; i++){    
        
            lista1 = generateRandomizedArray(n, false);
            memcpy(lista2, lista1, n * sizeof(double));
            memcpy(lista3, lista1, n * sizeof(double));

            
            
            bubbleDur = calculateDurationBubble(lista1, n, isGreater);
            mergeDur = calculateDurationMer(lista2, 0, n - 1, isLess);
            quickDur = calculateDurationQs(lista3, 0, n - 1, isLess);

            resultsFile << (std::noskipws) << bubbleDur << ' ' << mergeDur << ' ' << quickDur << '\n';

        }
    }

    else {
        std::cout << "No option selected, closing...";
        return EXIT_SUCCESS;
    }

    



    resultsFile.close();
    delete[] lista1;
    delete[] lista2;
    delete[] lista2;

    return EXIT_SUCCESS;
}