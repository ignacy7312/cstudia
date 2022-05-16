#include <stdio.h>
#include <stdlib.h>
#pragma once


typedef enum StateDescriptor {
    INPUT,
    ADD,
    MUL
} StateDescriptor_t;


typedef enum EventDescriptor {
    CHECK,
    POSITIVE,
    NEGATIVE,
} EventDescriptor_t;

typedef StateDescriptor_t (*EventHandler)();

//kazda funkcja obslugi zdarzenia (handler) w obrębie pojedynczego stanu mapowana na deskryptor zdarzenia
//kazda funkcja zwraca deskryptor stanu, w który nastąpi przejście po obsłudze danego zdarzenia
//uniknięcie tracenia zasobów i czasu na dynamiczną alokację całej struktrty przy każdorazowym wywołaniu funkcji obłusgi zdarzenia 

typedef struct State {
    StateDescriptor_t stateDescriptor;
    EventDescriptor_t eventDescriptor;
    EventHandler handler;
} State_t;


//obsługa zdarzenia INPUT_POS w stanie ADD
StateDescriptor_t executeADD(int * result, int previous, EventDescriptor_t * event);
//obsługa zdarzenia INPUT_NEG w stanie MUL
StateDescriptor_t executeMUL(int * result, int previous, EventDescriptor_t * event);

//obsługa zdarzenia CHECK w stanie INPUT
StateDescriptor_t checkNumber(int * result, int previous, EventDescriptor_t * event);


void handleEvent(EventDescriptor_t * event);
void execute();

