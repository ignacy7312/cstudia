#include "utils.h"

int main(void){

    int nLength, nSpecial, nNumbers, nCapital;
    char * password = new char[nLength];

    std::cout << "Welcome to password generator. First, You have to tell me few things.\nEnter desired password size:" << std::endl;
    std::cin >> nLength;
    std::cout << "How many special characters? Enter 999 to get a completely randomized output." << std::endl;
    std::cin >> nSpecial;
    if(nSpecial == 999){
        password = completelyRandom(nLength);
    } else {
        std::cout << "How many numbers?" << std::endl;
        std::cin >> nNumbers;
        std::cout << "How many capital letters?" << std::endl;
        std::cin >> nCapital;
        password = parametrizedRandom(nLength, nSpecial, nNumbers, nCapital);
    }
    

    savetoFile("haslo.txt", password);

    //std::cout << password;

    delete[] password;



    return EXIT_SUCCESS;
}