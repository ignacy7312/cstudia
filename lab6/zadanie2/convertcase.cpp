#include <cstring>
#include "convertCase.h"

void convertCase(char text[]){

    for(int i = 0; i < strlen(text); i++){  //trzeba uzyc strlen() bo kazdy string konczy sie \0 
        
        if(text[i] <= 122 && text[i] >= 97){ //duze litery z tablicy ASCII
            text[i] = text[i] - 32;
        } else if (text[i] <= 92 && text[i] >= 65) {//male litery z tablicy ASCII
            text[i] = text[i] + 32;
        }  
    }
}