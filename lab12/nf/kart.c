#include <stdio.h>
#include <stdbool.h>

void funkcja(int, int);
int * funkcja2(int *, bool);
int calculate(int*, float,  int (*funk)(int, int));


int main(void){

    void (*funcptr)(int,int) = funkcja;
    int * (*funcptr2)(int *, bool) = funkcja2;

    void (*ptr)(int, int);

    return 0;
}