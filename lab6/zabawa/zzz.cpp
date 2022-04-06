#include <iostream>
#include <time.h>
#include <iomanip>

#define nr 150
#define sum(a, b) (a + b)
#define printnr() printf("%d\n", nr)

int multiply(int a, int b = 3, int c = 7);
float multiply(float a, int b = 7);
int suma(int a, int b);

int main(void){


    int a = 2;
    int b = 10;
    
    clock_t begin = clock();

    std::cout << multiply(nr) << '\n';
    std::cout << multiply(5.0f, 4.1f) << '\n';
    std::cout << sum(a,b) * 5 << '\n';
    std::cout << suma(a,b) * 5 << '\n';
    printnr();
    clock_t end = clock();
    //czas wykonania:
    double duration = (double) (end - begin)/CLOCKS_PER_SEC*1000;
    //std::cout << std::fixed;
    std::cout << std::fixed << std::setprecision(10) << duration << '\n';

    return 0;
}



int multiply(int a, int b, int c){
    return a*b*c;
}
float multiply(float a, int b){
    return a*b;
}
int suma(int a, int b){
    return a+b;
}