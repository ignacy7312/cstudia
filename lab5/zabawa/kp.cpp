#include <iostream>

int main(void){

    enum class Marki : unsigned int  {
        AUDI = 0, MERCEDES, BMW, TOYOTA, MAZDA, CITROEN, FORD
    };

    Marki val;
    int nnn;
    scanf("%d %d", &val, &nnn);

    val == Marki::MERCEDES ? printf("tak") : printf("nie");
    Marki k = static_cast<Marki>(nnn);
    k == Marki::MERCEDES ? printf("tak") : printf("nie");
    
    switch (val) {
        case Marki::AUDI:
            printf("Jezdzisz fajnym autem");
            break;
        
        case Marki::MERCEDES:
            printf("Jezdzisz fajnym autem");
            break;
        
        case Marki::BMW:
            printf("Jezdzisz fajnym autem");
            break;
        
        case Marki::TOYOTA:
            printf("Jezdzisz fajnym autem");
            break;
        
        case Marki::FORD:
            printf("Przykro mi");
            break;
       
        default:
            printf("tu nie ma twojego auta");
            break;

    }

    return 0;
}