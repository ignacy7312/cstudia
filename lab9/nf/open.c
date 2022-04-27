#include <stdio.h>
#include <string.h>

int main(void){

    FILE * fPtr = fopen("data.txt", "w+");
    char litera;
    int size;

    printf("Enter what you want to add to the file and size:\n");
    scanf("%c", &size);
    for(int i = 0; i <= size; i++){
        scanf("%c", &litera);
        fprintf(fPtr,"%c", litera);
    }


    fclose(fPtr);

    return 0;
}