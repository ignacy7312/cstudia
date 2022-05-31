#include <string.h>
#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"
#include "dispatcher.h"
#include "gtest.h"


//struktura zawierająca string - nazwę funkcji do wywołania oraz wskaźnik na tą funkcję 
typedef struct Comparator {
    char instruction[MAX_INSTRUCTION_LENGTH];
    Predicate predicate;
} Comparator_t;


//funckja dostaje strukturę parsedCommand - zawierającą funkcję do wywołania i argument 

void dispatch(Node_t ** root, ParsedCommand_t parsedCommand){
    bool rightCommand = false;
    static const Comparator_t comparators[] = {{"isEqual", isEqual}, {"isGreater", isGreater},{"isLess", isLess}};

    for(unsigned int i = 0; i < sizeof(comparators)/sizeof(Comparator_t); i++){
        //przejście po każdym elemencie tablicy porównywaczy
        if (strncmp(comparators[i].instruction, parsedCommand.instruction, sizeof(parsedCommand.instruction)/sizeof(*(parsedCommand.instruction))) == 0){
            //jeżeli instrukcja z polecenia jest taka sama jak z tablicy
            removeIf(root, comparators[i].predicate, parsedCommand.argument);
            //instrukcja występuje tylko raz - bez sensu iterowanie po wszystkim jak już się wywoła
            rightCommand = true;
            break; 
        }
    }
    if(!rightCommand)
        std::cout << "Nonexistent command";
    
}
