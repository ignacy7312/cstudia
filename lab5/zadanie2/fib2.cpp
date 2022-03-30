#include "fib.h"

int iterFib(unsigned int n){
	//jezeli n <= 2 zwraca act
	int previous1 = 1,  previous2 = 1, act = 1;
	for(n; n > 2; n--){
		previous2 = previous1;
		previous1 = act;
		act = previous1 + previous2; 
	}
	return act;
}

int iterFib2(unsigned int n){
	int previous1 = 1,  previous2 = 1, act = 1;
	for(int k = 3; k <= n; k++){
		previous2 = previous1;
		previous1 = act;
		act = previous1 + previous2; 
	}
	return act;
}
