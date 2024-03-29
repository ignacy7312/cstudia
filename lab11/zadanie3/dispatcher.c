#include <string.h>
#include <stdbool.h>
#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"
#include "dispatcher.h"


//struktura zawierająca string - nazwę funkcji do wywołania oraz wskaźnik na tą funkcję 
typedef struct Comparator {
    char instruction[MAX_INSTRUCTION_LENGTH];
    Predicate (*predicate)(int, int);
} Comparator_t;


//funckja dostaje strukturę parsedCommand - zawierającą funkcję do wywołania i argument 

void dispatch(Node_t ** root, ParsedCommand_t parsedCommand){
    
    //mapowanie nazw funkcji na wskaźniki funkcyjne - leniwa inicjalizacja
    //dzięki static tablica będzie widziana między kolejnymi wywołaniami funkcji (będzie żyła tak długo jak program, a nie tylko czas działania funkcji, w której jest określona)
    //przez to zostanie zaincjalizowana tylko raz - oszczędność czasu i pamięci 
    static const Comparator_t comparators[] = {{"isEqual", isEqual}, {"isGreater", isGreater},{"isLess", isLess}};

    for(unsigned int i = 0; i < sizeof(comparators)/sizeof(Comparator_t); i++){
        //przejście po każdym elemencie tablicy porównywaczy
        if (strncmp(comparators[i].instruction, parsedCommand.instruction, sizeof(parsedCommand.instruction)/sizeof(*(parsedCommand.instruction))) == 0){
            //jeżeli instrukcja z polecenia jest taka sama jak z tablicy
            removeIf(root, comparators[i].predicate, parsedCommand.argument);
            //instrukcja występuje tylko raz - bez sensu iterowanie po wszystkim jak już się wywoła
            break; 
        }
    }

}
