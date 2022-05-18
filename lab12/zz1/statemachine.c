#include <stdlib.h>
#include <stdio.h>
#include "statemachine.h"
#include "reader.h"




//handler
const State_t * check(EventDescriptor_t event, char a){
    if (a == 'q')
        exit(EXIT_SUCCESS);
    else if (a == 'e')
        return &ECHO;
    else if (a == 'w')
        return &WRITE;
}

//executors
void echo(char a){
    printf("%c", a);
}

void write(char a){
    FILE * fPtr = fopen("output.txt", "w+");
    if (fPtr == NULL)
        exit(EXIT_FAILURE);
    fprintf(fPtr, "%c", a);
    

}


void handleEvent(){
    char letter = readChar();
    static const State_t * state = &ECHO;
    state = state->handler(letter);
    state->executor(letter);
}

void exec(){
    while(1){
        handleEvent();
    }
}


//    if (fclose(fPtr) != 0)
//                exit(EXIT_FAILURE);