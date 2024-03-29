#include <iostream>

#include "calculator.h"

namespace {
	
	void quitWithError() {
		std::cout << "Invalid operation performed" << std::endl;
		exit(EXIT_FAILURE);
	}
	
} // anonymous namespace

// Place your definitions here
float add(float x, float y){ return x + y; }

float subtract(float x, float y){ return x - y; }

float multiply(float x, float y){ return x * y; }

float divide(float x, float y){
	if(y == 0)
		quitWithError();
	else
		return x / y;
}


float calculate(Operation operation, float x, float y){ 	
	switch(operation){
		//case nie muszą się kończyć breakiem - default ani inne przypadki sie nie wywolaja bo funkcja od razu zwraca wartosc
		case Operation::ADD: //odwolanie sie do wartosci z enum class
			return add(x,y);				
		
		case Operation::SUBTRACT:
			return subtract(x,y);
		
		case Operation::MULTIPLY:
			return multiply(x,y);
		
		case Operation::DIVIDE:
			return divide(x,y);
		
		default:
			quitWithError();
	}
}

