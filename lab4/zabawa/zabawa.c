#include <stdio.h>
#include <string.h>


const int ABC = 123;

void drukuj(int a) { printf("\n hehe: %d", a); }


int main(void){

    //
    char tab1[] = {'a','b','c','d','\0'};
    char tab2[] = {"abcd"};
    char tab3[10] = "abcd";
    char tab4[] = {'a','b','c','d'}; //brak znaku zerowego - tablica sie drukujeponownie

    printf("\n%s", tab1);
    printf("\nrozmiar tab - %d ", sizeof tab1);

    printf("\n%s", tab2);
    printf("\nrozmiar tab - %d", sizeof tab2);

    printf("\n%s", tab3);
    printf("\nrozmiar tab - %d", sizeof tab3);

    printf("\n%s", tab4);
    printf("\nrozmiar tab - %d", sizeof tab4);

    char numer;
    printf("\npodaj numer \n");
    scanf("%c", &numer);
    drukuj(numer);

    printf("\ndlugosc stringa: %d \n", strlen(tab1)); //strlen nie liczy znaku zerowegos

    return 0;
}