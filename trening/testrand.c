#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int main(void){

    srand(time(NULL));   //trzeba bardzo zwiekszyc ziarno, zeby liczby losowane nie byly podobne do siebie, 
                                            //skoro to opiera sie na sekundach itp
    unsigned int p,q,e,tocjent;
    p = 0;
    q = 0;


    while(isPrime(p) == false){
        p = rand() % 100;
        printf("p: %u\n",p);
    }
        

    while(isPrime(q) == false){
        q = rand() % 100;
        printf("q: %u\n",p);
    } 

    //printf("%s", tp ? "true" : "false");
    //printf("%s", tq ? "true" : "false");

    return 0;
}
