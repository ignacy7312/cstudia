#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE * f_ptr = fopen("input.txt", "wt");

    if (f_ptr == NULL){
        printf("Failed to open.");
        exit(EXIT_FAILURE);
    }
    
    
    char placeholder;
    printf("Enter max 20 characters. q/Q breaks.");
    for(int i = 0; i < 20; i++){
        scanf("%c", &placeholder);
        if ((placeholder == 'q') || (placeholder == 'Q')){
            break;
        } else {
            fprintf(f_ptr, "%c", placeholder);
        } 
    }

    if (fclose(f_ptr) != 0){
        printf("Failed to close");
        exit(EXIT_FAILURE);
    }
    return 0;
}