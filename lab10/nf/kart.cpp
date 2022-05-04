#include <iostream>

typedef struct Car {
    int brand;
    int model;
} Car_t;




int main(void){

    Car_t * mojeAuto = new Car_t;
    mojeAuto->brand = 1;
    (*mojeAuto).model = 2;

    std::cout << (*mojeAuto).brand << mojeAuto->model;


    return 0;
}