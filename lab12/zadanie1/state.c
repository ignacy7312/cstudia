#include <stdio.h>
#include <stdlib.h>
#include "reader.h"
#include "statemachine.h"


void exec(){

    FILE * fPtr = fopen("output.txt", "w+");
    if (fPtr == NULL)
        exit(EXIT_FAILURE);

    State_t CurrentState = ECHO;
    char character;

    while(1){
        character = readChar();
        if (character == 'q'){
            if (fclose(fPtr) != 0)
                exit(EXIT_FAILURE);
            exit(EXIT_SUCCESS);
        }
        
        switch (CurrentState){
            case ECHO:
                if (character == 'w')
                    CurrentState = WRITE;
                else     
                    echo(character);
                break;
            
            case WRITE:
                if (character == 'e')
                    CurrentState = ECHO;  
                else     
                    write(character, fPtr);
                break;
        }
    }
}


void echo(char character){
    fprintf(stdout, "%c", character);
}

void write(char character, FILE * fptr){
    if(fptr == NULL)
        exit(EXIT_FAILURE);
    
    fprintf(fptr, "%c", character);

}