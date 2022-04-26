#include <iostream>

typedef struct Test {
        int x;
        double y;
        char tablica[10];
        struct {
            int q,w,e;
        } inter; 
    } Test_t;


int main(void){

    
    Test_t jeden = {};

    

    //printf("Elementy struktury %d %.2lf %s", jeden.x, jeden.y, jeden.tablica);
    //printf("Nested struct: %d", jeden.inter.e);

    std::cout << std::endl;
    std::cout << &jeden.x << std::endl;

    

    return 0;
}