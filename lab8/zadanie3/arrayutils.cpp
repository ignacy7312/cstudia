#include <string.h>
#include "arrayUtils.h"

char * resizeArray(char * array, unsigned int newSize){

    if(array == nullptr){
        return nullptr;
    } 

    char * newArray = new char[newSize + 1];
    
    
    if(newSize >= strlen(array)){
        for(int i = 0; i < strlen(array); i++){
            newArray[i] = array[i];
        }
    } else {
        for(int i = 0; i < newSize; i++){
            newArray[i] = array[i];
        }

    }
    newArray[newSize] = '\0';
    delete[] array;

    return newArray;
}