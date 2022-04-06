#include <iostream>
#include <string>
#include "convertCase.h"
#define LENGTH 15

int main(void){

    //const unsigned int dl = 15;
    char slowo[LENGTH+1];
    int k = 0;
    slowo[LENGTH+1] = '\0';
    std::cout << "Enter " << LENGTH << " characters\n";
    while(k < LENGTH){
        std::cout << LENGTH - k << " characters left\n";
        std::cin >> slowo[k];
        k++; 
    }
    std::cout << slowo << std::endl;
    convertCase(slowo);
    std::cout << slowo << std::endl;
    
    return EXIT_SUCCESS;
}