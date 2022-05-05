#include <stdio.h>
#include <stdlib.h>

int main(void){

    int nSize;

    printf("Enter size: \n");
    scanf("%d", &nSize);
    
    int * liczba = calloc(1, sizeof(int));
    float * liczba2 = malloc(sizeof(float));
    *liczba = nSize;
    *liczba2 += 0.3219837;

    printf("na stosie liczba: %d i jej adres: %0X\n", nSize, &nSize);
    printf("na stercie liczba: %d i jej adres: %0X\n", *liczba, &liczba);
    printf("na stercie liczba2: %f i jej adres: %0X\n", *liczba2, &liczba2);


    int * tablica = (int *) malloc(nSize*sizeof(*tablica));
    for (int i = 0; i < nSize; i++){
        printf("%d, %d\n", tablica[i] = i + 7, i);
    }

    free(liczba);
    free(liczba2);
    free(tablica);


    /*char * nazwa = (char *) calloc((nSize + 1), sizeof(*nazwa));
    nazwa[nSize] = '\0';
    printf("%d\n", nazwa[2]);

    printf("Enter tab elements\n");
    scanf("%s", nazwa);
    
    printf("AAA %s", nazwa);*/


    //free(nazwa);
    /*
    printf("Enter expaneded size:\n");
    int nExpSize;
    scanf("%d", &nExpSize);

    int * expandedTab = (int *) realloc(nazwa, nExpSize * sizeof(*nazwa));
    for(int i = 0; i < nExpSize; i++)
        printf("%d", expandedTab[i]);

    free(expandedTab);*/

    
    return 0;
}




