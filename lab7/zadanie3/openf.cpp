#include "openf.h"

std::string get20(std::string path){
//opens a file and gets first twenty characters

    std::ifstream file;
    file.open(path);

    if (!file.is_open()){
        std::cout << "failed to open" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string first20 = "";
    char k;
        while((first20.length() < 20) && (file >> k)){ //jezeli eof to sie nie bedzie dalej wczytywac. std::noskipws pozwala wczytywac białe znaki
            first20.push_back(k);
        }

    if (!file.eof() && file.fail()){
        std::cout << "Error occured during reading the file" << std::endl;
        exit(EXIT_FAILURE);
    }
    file.close();

    return first20;
}


void save_strings(std::string path, std::string words){
//opens a file and saves a string to it

    std::ofstream file;
    file.open(path, std::ios_base::out | std::ios_base::trunc);
    if (!file.is_open()){
        std::cout << "failed to open" << std::endl;
        exit(EXIT_FAILURE);
    }

    file << words; // << std::noskipws
    
    if (!file.eof() && file.fail()){
        std::cout << "Error occured during reading the file" << std::endl;
        exit(EXIT_FAILURE);
    }

    file.close();

}
