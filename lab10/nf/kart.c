#include <stdio.h>

typedef struct mojaStruktura{
    int x;
    double y;
    int * tabl;
} mojaStruktura_t;

int add(int * a, int * b){
    int * pointer = a;
    *pointer = *b + 15;
    return *a;
}
int add2(int a, int b){
    a = b + 15;
    return a;
}



int main(void){

    /*printf("Enter length");
    int len;
    scanf("%d", &len);


    mojaStruktura_t mojaPierwsza = {
        15,
        21.37,
        NULL
    };
    
    

    printf("kek: %d, %lf, %d\n", mojaPierwsza.x, mojaPierwsza.y, mojaPierwsza.tabl);
    
    mojaPierwsza.tabl = (int *) malloc(len*sizeof(int));
    printf("Podaj jakas liczbe, liczbe zmiennoprzecinkowa i slowo na 10 znakow: \n");
    scanf("%d %lf %s", &(mojaPierwsza.x), &(mojaPierwsza.y), mojaPierwsza.tabl);
    printf("kek2: %d, %lf, %s\n", mojaPierwsza.x, mojaPierwsza.y, mojaPierwsza.tabl);
    for(int i = 0; i < len; i++) 
        printf("%d\n", mojaPierwsza.tabl[i]);

    int * tablica = (int *) calloc(len, sizeof(*tablica));
    for(int i = 0; i < len; i++) 
        printf("%d\n", tablica[i] = i);
    
    free(tablica);
    free(mojaPierwsza.tabl);*/

    int a = 10;
    int b = 16;

    int * c = &a;
    
    add2(a,b);
    printf("bez pointerów %d\n", a);
    add(c,&b);
    printf("z pointerami %d\n", a);
    //printf("bez pointerów %d\n", add(c,&b));

    return 0;
}