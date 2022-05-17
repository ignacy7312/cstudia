#pragma once
#include <stdio.h>
#include <stdlib.h>



typedef enum EventDescriptor {
    CHECK,
    POSITIVE,
    NEGATIVE,
} EventDescriptor_t;


typedef struct State State_t;


//handlers
const State_t * checking(EventDescriptor_t event, int * result, int * num);
const State_t * ADDchangeToCheck(EventDescriptor_t event, int * result, int * num);
const State_t * MULchangeToCheck(EventDescriptor_t event, int * result, int * num);
//executors
void getNum(int * result, int * num);
void add(int * result, int * num);
void mul(int * result, int * num);
void printstate(int * result, int * num);

typedef const State_t * (*EventHandler)(EventDescriptor_t, int *, int *);
typedef void (*StateExecutor)(int *, int *);

struct State {
    EventHandler handler;
    StateExecutor executor;
};


void handleEvent(EventDescriptor_t event);
void execute();