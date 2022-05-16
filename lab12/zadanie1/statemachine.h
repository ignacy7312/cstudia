#pragma once

typedef enum State {
    ECHO, //wypisuje na stdout
    WRITE //zapisuje do pliku 
} State_t;

void exec();
