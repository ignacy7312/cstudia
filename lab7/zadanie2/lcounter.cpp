#include "lcounter.h"


int letter_counter(std::string path, char letter){
//counts how many times a letter occurs in a file
    int counter = 0;
    char k;

    std::ifstream file;
    file.open(path, std::ios_base::in);

    if(!file.is_open()){
        std::cout << "failed to open" << std::endl;
        exit(EXIT_FAILURE);
    }


    while(file >> k){
        if(k == letter)
            counter++;
    }
    if (!file.eof() && file.fail())
        std::cout << "Error occured during reading the file" << std::endl;

    file.close();

    return counter;
}