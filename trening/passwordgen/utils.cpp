#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "utils.h"


char * completelyRandom(int nLength){

    srand(time(NULL));
    char* password = (char *) calloc(nLength + 1, sizeof(*password));
    password[nLength] = '\0';

    for (int i = 0; i < nLength; i++){
        password[i] = 33 + rand() % 92;
    }
    return password;
}


char * parametrizedRandom(int nLength, int nSpecial, int nNumbers, int nCapital){
    
    srand(time(NULL));
    char* password = (char *) calloc(nLength + 1, sizeof(*password));
    password[nLength] = '\0';

    int * placeholder = (int *) malloc(nLength * sizeof(*placeholder));
    for(int i = 0; i < nLength; i++)
        placeholder[i] = i;

    int capitalPos,numbersPos,specialPos;

    //randomize positions for capital letters, numbers and special characters 
    for(int i = 0; i < nCapital; i++){
            capitalPos = rand() % nLength;
            if(placeholder[capitalPos] == 198 && placeholder[capitalPos] == 199 && placeholder[capitalPos] == 200){
                while(placeholder[capitalPos] != 198 && placeholder[capitalPos] != 199 && placeholder[capitalPos] != 200){
                    capitalPos = rand() % nLength;
                }
            }
            placeholder[capitalPos] = 198;
    }
    for(int i = 0; i < nNumbers; i++){
            numbersPos = rand() % nLength;
            if(placeholder[numbersPos] == 198 && placeholder[numbersPos] == 199 && placeholder[numbersPos] == 200){
                while(placeholder[numbersPos] != 198 && placeholder[numbersPos] != 199 && placeholder[numbersPos] != 200){
                    numbersPos = rand() % nLength;
                }
            }
            placeholder[numbersPos] = 199;
    }
    for(int i = 0; i < nSpecial; i++){
            specialPos = rand() % nLength;
            if(placeholder[specialPos] == 198 && placeholder[specialPos] == 199 && placeholder[specialPos] == 200){
                while(placeholder[specialPos] != 198 && placeholder[specialPos] != 199 && placeholder[specialPos] != 200){
                    specialPos = rand() % nLength;
                }
            }
            placeholder[specialPos] = 200;
    }

    for(int i = 0; i < nLength; i++){
        
        if(placeholder[i] == 198){
            //randomize a capital letter
            password[i] = 65 + rand() % 26;
        } 
        else if (placeholder[i] == 199){
            //randomize a number
            password[i] = 48 + rand() % 10;
        } 
        else if (placeholder[i] == 200){
            //randomize a special character
            password[i] = 33 + rand() % 15;
        } 
        else {
            password[i] = 97 + rand() % 26;
        }
        
    }
    return password;

}


void savetoFile(const char * path, const char * password){
    std::ofstream file;
    file.open(path, std::ios_base::out | std::ios_base::trunc);
    file << password;
    file.close();

}

