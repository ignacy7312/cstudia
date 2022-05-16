#include <stdio.h>
#include <stdlib.h>
#include "sminaczej.h"


//executors
void getNum(int * result, int * num){
    scanf("%d", num);
}
void add(int * result, int * num){
    *result += (*num);
}

void mul(int * result, int * num){
    *result *= (*num);
}
void printstate(int * result, int * num){
    printf("result: %d, num: %d", *result, *num);
}

//handlers
const State_t * checking(EventDescriptor_t event, int * result, int * num){
    if (*num > 0){
        return POSITIVE;
    }

    else if (*num < 0){
        return NEGATIVE;
    }
    else
        exit(EXIT_SUCCESS);
};
const State_t * ADDchangeToCheck(EventDescriptor_t event, int * result, int * num){
    add(result, num);
    return CHECK;
}
const State_t * MULchangeToCheck(EventDescriptor_t event, int * result, int * num){
    mul(result, num);
    return CHECK;
}
//predefiniowane stany
static const State_t CHECKING = {checking, printstate};
static const State_t ADD = {ADDchangeToCheck, getNum};
static const State_t MULTIPLY = {MULchangeToCheck, getNum};

void handleEvent(EventDescriptor_t event){
    static int result = 1;
    static int number;
    
    static const State_t * state = &CHECKING;
    state = state->handler(event, number);
    state->executor(&result, &number);
    printf("result: %d, number %d", result, number);
}

void execute(){
    EventDescriptor_t event = POSITIVE;
    
    while(1){
        handleEvent(event);
    }
}

