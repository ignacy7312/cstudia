#include <iostream>
#include <cstring>
#include "calculator.h"

void quitWithError() {
		std::cout << "Invalid operation performed" << std::endl;
		exit(EXIT_FAILURE);
	}

float add(float x, float y){
    return x + y;
}
float subtract(float x, float y){
    return x - y;
}
float multiply(float x, float y){
    return x*y;
}
float divide(float x, float y){
    if (y == 0){
        quitWithError();
    } else 
        return x/y;
    
}
void printsum(float sum){
    std::cout << sum << '\n';
}

float calculate(float x, float y, char * operations[], unsigned int size){
    float sum = 0;
    for(int i = 0; i < size; i++){
        if(std::strncmp(operations[i], "add", strlen(operations[i])) == 0){
            sum += add(x, y);
        } else if(std::strncmp(operations[i], "sub", strlen(operations[i]))== 0) {
            sum += subtract(x, y);
        } else if(std::strncmp(operations[i], "mul", strlen(operations[i]))== 0) {
            sum += multiply(x, y);
        } else if(std::strncmp(operations[i], "div", strlen(operations[i]))== 0) {
            sum += divide(x, y);
        } 
        printsum(sum);
    }
    return sum;
}