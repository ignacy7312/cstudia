#include <string.h>
#include <stdbool.h>
#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"
#include "dispatcher.h"

typedef struct Comparator {
    char instruction[MAX_INSTRUCTION_LENGTH];
    Predicate (*predicate)(int, int);
} Comparator_t;

void dispatch(Node_t ** root, ParsedCommand_t parsedCommand){
    
    static const Comparator_t comparators[] = {{"isEqual", isEqual}, {"isGreater", isGreater},{"isLess", isLess}};

    for(unsigned int i = 0; i < sizeof(comparators)/sizeof(Comparator_t); i++){
        if (strncmp(comparators[i].instruction, parsedCommand.instruction, sizeof(parsedCommand.instruction)/sizeof(*(parsedCommand.instruction))) == 0){
            //???????
            removeIf(root, comparators[i].predicate, parsedCommand.argument); 
        }
    }

}
