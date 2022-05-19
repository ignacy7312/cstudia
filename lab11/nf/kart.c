#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funkcja(int * tab, int rozmiar, int * buffer){
    
    bool result = false;
    if (tab != NULL && buffer != NULL){
        for(int i = 0; i < rozmiar; i++){
            printf("%d", tab[i]=i);
            if (tab[i] == 3)
                *buffer =  tab[i];
        }
        result = true;
    }
    return result;
}

int main (void){

    int rozmiar = 5;
    int buffer;
    int * tab = (int *) calloc(rozmiar, sizeof(int));
    funkcja(tab, rozmiar, &buffer) ? printf("%d", buffer) : printf("failure");
    int * buffptr = NULL;
    funkcja(tab, rozmiar, buffptr) ? printf("%d", buffer) : printf("failure");

    free(tab);
    return 0;
}