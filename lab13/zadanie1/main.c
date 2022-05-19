#include <stdio.h>

#include "mu.h"

int main(void){

    int x, y;
    printf("Podaj dwie liczby calkowite, a program obliczy ich NWD i NWW\n");
    
    scanf("%d%d", &x, &y);
    
    printf("dla liczb: %d i %d NWW wynosi: %d, a NWD: %d\n",x, y, lcm(x,y), gcd(x,y));

    return 0;
}