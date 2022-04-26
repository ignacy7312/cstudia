#include <stdio.h>

typedef struct Test Test_t;
typedef struct Test2 Test2_t;
typedef struct Test {
        int x;
        double y;
        char tablica[10];
        struct {
            int q,w,e;
        } inter; 
    };


int main(void){

    
    Test_t jeden = {
        15,
        15.59,
        "Ktos",
        {
            1,
            2,
            3,
        }
    };


    printf("Elementy struktury %d %.2lf %s", jeden.x, jeden.y, jeden.tablica);
    printf("Nested struct: %d", jeden.inter.e);

    return 0;
}