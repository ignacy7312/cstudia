#include <stdio.h>
#include <float.h>


double epsilon1(double a){
    double eps = 1;

    while(1 + eps/2 != 1){
        //printf("%f\n", eps);
        eps = eps/2;
    }
    return eps;
}

float epsilon2(float a){
    float eps = 1;

    while(1 + eps/2 != 1){
        //printf("%f\n", eps);
        eps = eps/2;
    }
    return eps;
}

long double epsilon3(long double a){
    long double eps = 1;

    while(1 + eps/2 != 1){
        //printf("%f\n", eps);
        eps = eps/2;
    }
    return eps;
}




int main(void){

    float a = 1.0;
    double b = 1.0;
    long double c = 1.0;

    printf("epsilon maszynowy dla float: %.30f\n", epsilon2(a));
    printf("epsilon maszynowy dla double: %.30f\n", epsilon1(b));
    printf("epsilon maszynowy dla long double: %.30f\n", epsilon3(c));

    //printf("Fasdsad")

    return 0;
}