#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "utils.h"

int main(void){

    time_t t;
    srand(NULL);   
                                            
    unsigned int p,q,e,tocjent;
    int gcd1, gcd2;
    p = 0;
    q = 0;
    gcd1 = 0;
    gcd2 = 0;
    
    for(;;){    //nieskończona pętla
            while(isPrime(p) == false){
                p = rand() % 10000;
                printf("\np = %u",p);
            }
            while(isPrime(q) == false){
                q = rand() % 10000;
                printf("\nq = %u",q);
            }
        tocjent = (p - 1)*(q - 1);
        e = 1 + rand() % tocjent; //na wikipedii było, że e należy do przedziału od 1 do tocjentu
        gcd1 = gcd(e, p - 1);
        gcd2 = gcd(e, q - 1);
        if(gcd1 == 1 && gcd2 == 1){
            break;
        }
    }
    
    printf("liczba %u jest pierwsza: %s\n",p, isPrime(p) ? "true" : "false");
    printf("liczba %u jest pierwsza: %s\n",q, isPrime(q) ? "true" : "false");
    printf("p = %u, q = % u, e = %u\n",p,q,e);
    printf("tocjent wynosi: %u\n", tocjent);
    printf("NWD %u, %u wynosi: %d\n",e,p-1,gcd(e,p-1));
    printf("NWD %u, %u wynosi: %d\n",e,q-1,gcd(e,q-1));
    return 0;

}
