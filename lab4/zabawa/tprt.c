#include <stdio.h>

int main(void){

    int x = 255;
    float y = 21.37;
    int z = 0xff;
    char m = 'm';
    long long k = 10923;

    printf("int: %.50d ; %p \n", x, &x);
    printf("int: %050d ; %p \n", x, &x);
    printf("float: %.5f ; %p \n", y,&m);
    printf("w hex: %#X ; %p \n",z, &z);
    printf("adres: %p \n", &x);
    printf("asd: %#X \n", x);

    int l;
    scanf("%08x", &l);
    printf("%#X costam %p",l, &l);

    return 0;
}