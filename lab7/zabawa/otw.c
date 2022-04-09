#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE * fptr = fopen("cos.txt", "a+b");
    if (fptr == NULL){
        printf("Failed to open");
        exit(EXIT_FAILURE);
    }
    printf("%p\n", fptr);
    fprintf(stdout, " stdout %#x\n", fptr);

    const char * slowo;
    printf("Enter a word that you would like to add to this file: ");

    scanf("%s", slowo);
    fprintf(fptr, slowo);



    if (fclose(fptr) != 0){
        printf("Failed to close");
        exit(EXIT_FAILURE);
    }  

    return 0;
}