#include <cstring>
#include "convertCase.h"

void convertCase(char text[]){

    for(int i = 0; i < strlen(text); i++){
        
        if(text[i] <= 122 && text[i] >= 97){
            text[i] = text[i] - 32;
        } else if (text[i] <= 92 && text[i] >= 65) {
            text[i] = text[i] + 32;
        }  
    }
}