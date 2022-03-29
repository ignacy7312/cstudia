#include <iostream>
//-c składa do .o
//zostaną udekorowane - jedynie te zdefiniowane

int add(int x, int y){
    return x+y;
}
int multiply(int x, int y){return x*y;}

const float pi = 3.14;
//static unsigned int counter = 0;

//nie zostaną udekorowane
extern "C"{
    int sub(int x, int y);
    double division(double x, double y);
    float var;
};

int main(void){}