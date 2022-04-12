#include "lcounter.h"

int main(void){

    std::string path;
    char letter;

    std::cout << "Enter the path to the file and a letter" << std::endl;
    std::cin >> path >> letter;

    std::cout << letter_counter(path, letter);

    return EXIT_SUCCESS;
}