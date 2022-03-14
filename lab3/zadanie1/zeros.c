#include <stdio.h>
#include <math.h>



void zeros(float a, float b, float c){

/*Funkcja wypisujaca miejsca zerowe dwumianu kwadratowego*/
    
    float delta = b*b - 4*a*c;

    //If - sprawdzenie warunkow delty
    if(delta < 0)
        printf("\nBrak miejsc zerowych");

    else if(delta == 0)
        printf("\nFunkcja ma jedno miejsce zerowe: %f",(-1)*b/(2*a));

    else{
        float sqrtdelta = sqrt(delta);
        float x1 = ((-1)*b - sqrtdelta)/(2*a);
        float x2 = (-(1)*b + sqrtdelta)/(2*a);
        printf("\nFunkcja ma dwa miejsca zerowe: %f,%f",x1,x2);
    } 

}
