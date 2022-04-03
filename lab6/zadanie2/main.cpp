#include <iostream>
#include <string>
#include "convertCase.h"

int main(void){

    const unsigned int dl = 15;
    char slowo[dl+1];
    int k = 0;
    slowo[dl+1] = '\0';
    std::cout << "Enter " << dl << " characters\n";
    while(k < dl){
        std::cout << dl - k << " characters left\n";
        std::cin >> slowo[k];
        k++; 
    }
    
    convertCase(slowo);
    std::cout << slowo;
    
    return 0;
}