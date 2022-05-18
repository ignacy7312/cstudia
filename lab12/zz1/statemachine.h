#pragma once


typedef enum EventDescriptor {
    ECHO_CHECK;
    WRITE_CHECK;
} EventDescriptor_t;

typedef struct State State_t;
//handlers
const State_t * check(char);

//executors
void echo(char);
void write(char);


typedef const State_t * (*EventHandler)(EventDescriptor_t, char);
typedef void (*StateExecutor)(char);

struct State {
    EventHandler handler;
    StateExecutor executor;
};

static const State_t ECHO = {check, echo};
static const State_t WRITE = {check, write};






void handleEvent();
void exec();
