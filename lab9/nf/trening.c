#include <stdio.h>
#include <stdlib.h>

int main(void){

    int nSize;

    printf("Enter size: \n");
    scanf("%d", &nSize);
    
    char * nazwa = (char *) calloc((nSize + 1), sizeof(*nazwa));
    nazwa[nSize] = '\0';
    printf("%d\n", nazwa[2]);

    printf("Enter tab elements\n");
    scanf("%s", nazwa);
    
    printf("AAA %s", nazwa);


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




