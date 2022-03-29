#include "multiply.h"

extern "C"{
	int multiply(int x, int y) {
		return x * y;
	}
}

int multiply(int x, int y, int z){ 
	return x*y*z;
}

float multiply(float x, float y){ 
	return x*y;
}

float multiply(int x, float y){ 
	return x*y;
}