#include "statemachine.h"
#include "getnum.h"

//handlers:
void add(int * result, int num){
    *result += num;
}

void multiply(int * result, int num){
    *result *= num;
}


//obsługa zdarzenia INPUT_POS w stanie ADD
StateDescriptor_t executeADD(int * result, int number, EventDescriptor_t * event){
    add(result, number);
    *event = CHECK;
    return INPUT;
};

//obsługa zdarzenia INPUT_NEG w stanie MUL
StateDescriptor_t executeMUL(int * result, int number, EventDescriptor_t * event){
    multiply(result, number);
    *event = CHECK;
    return INPUT;
}

//obsługa zdarzenia CHECK w stanie INPUT
StateDescriptor_t checkNumber(int * result, int previous, EventDescriptor_t * event){
    if (previous > 0){
        *event = POSITIVE;
        return ADD;
    }

    else if (previous < 0){
        *event = NEGATIVE;
        return MUL;
    }
    else
        exit(EXIT_SUCCESS);
}

void handleEvent(EventDescriptor_t * event){
    static const State_t StateMachine[] = {{ADD, POSITIVE, executeADD}, {MUL, NEGATIVE, executeMUL}, {INPUT, CHECK, checkNumber}, {INPUT, CHECK, checkNumber}};
    static int result = 1;
    static int previous = 0;
    static int number, prpr; //prpr tylko zeby printowac poprzedni numer
    
    static StateDescriptor_t currentState = ADD;
    //static EventDescriptor_t * event = &event;
    
    for (int i = 0; i < sizeof(StateMachine)/sizeof(State_t); i++){
        
        if (StateMachine[i].stateDescriptor == currentState && StateMachine[i].eventDescriptor == *event){
        
            if(StateMachine[i].stateDescriptor == INPUT){
                currentState = StateMachine[i].handler(&result, previous, event);
                printf("previous is %d, number is: %d, result is: %d\n", prpr, number, result);
            }
            else if (StateMachine[i].stateDescriptor != INPUT) {
                getNum(&number);
                currentState = StateMachine[i].handler(&result, number, event);
            }
                
            prpr = previous;
            previous = number;
            break;
        }
    } 

}
void execute(){
    EventDescriptor_t event = POSITIVE;
    
    while(1){
        handleEvent(&event);
    }

}