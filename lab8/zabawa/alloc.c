#include <stdio.h>
#include <stdlib.h>

int main(void){

    unsigned int tab_size;
    printf("Enter array size\n");
    scanf("%d", &tab_size);
    
    /* MALLOC - zwraca wskaźnik na początek zaalokowanego bloku pamięci, alokuje na stercie niezainicjalizowaną pamięc */
    int * tab = (void *) malloc(tab_size * sizeof(*tab));
    if(tab != NULL){
        for(int i = 0; i< tab_size; ++i)
        printf("tab[%d] = %d\n", i, tab[i] = i);
    }
    //free(tab);    

    /* CALLOC - zwraca to samo, ale wszystkie bajty alokowanego obszaru są wstępnie zerowane 
    int * tab = (void *) calloc(tab_size, sizeof(*tab));
    if(tab != NULL){
        for(int i = 0; i< tab_size; ++i)
            printf("tab[%d] = %d\n", i, tab[i] = i);
    }
    free(tab);*/
    
    /* REALLOC - alokuje pamiec wskazaną przez ptr, który został wcześniej zaalokowany przez jedną z tych trzech funkcji
        ale nie został zwolniony przez free()*/

    unsigned int new_size;
    printf("Enter new array size");
    scanf("%d", &new_size);
    int * expanded_tab = (int *) realloc(tab, new_size * sizeof(*expanded_tab));

    if(expanded_tab){
        for(int i = 0; i < new_size; ++i)
            printf("expanded_tab[%d] = %d\n", i, expanded_tab[i] = 2*i);
        free(expanded_tab);
    } else {
        free(tab);
    }

    return 0;
}