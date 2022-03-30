#include <iostream>
#include <stdio.h>
#include <bitset>
#include <limits>

int main(void){


    float liczba = 99.9;
    int liczba2 = 2;
    std::cout << "liczba to: " << std::bitset<8>(liczba2) << liczba2;
    
    int lbin = 0b1010101;
    int lhex = 0x298aff;
    int loct = 02137;
    float liczba3 = 17.5591283;

    
    printf("tutaj ta liczba z bazą %#x \n", lhex);
    printf("tutaj ta liczba z bazą %#o \n", loct);

    printf("liczba!! %+.5f",liczba3);

    enum class Ocena : unsigned int {
        A,
        B,
        C,
        D,
        E,
        F,
        INVALID = std::numeric_limits<unsigned int>::max()
    };  
    
    Ocena ocenaw;
    std::cout << "Podaj ocene: \n";
    scanf("%d", &ocenaw);
    //Ocena (ocenaw); //= static_cast<Ocena>(ocenaw); 
    //std::cout << "Twoja ocena to: \n" << Ocena::ocenaw;

    switch(ocenaw){
        case Ocena::F:
            std::cout << "Nie zdales!";
            break;
        case Ocena::E:
            std::cout << "Nie zdales!";
            break;
        case Ocena::D:
            std::cout << "Nie zdales!";
            break;
        default:
            std::cout << "Gratulacje, zaliczone";
            break;
    }


    return 0;
}