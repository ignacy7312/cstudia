#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int d = 15;
	int e = 1551;
	float c = 0.0123;
	char z = 'a';
    
	printf("\n%d", sizeof(d));
	printf("\n%d", sizeof(e));
	printf("\n%d", sizeof(c));
	printf("\n%d", sizeof(z));
	
    printf("\n%d", sizeof(float));
    printf("\n%d", sizeof(int));
    printf("\n%d", sizeof(long));
    printf("\n%d", sizeof(char));
    printf("\n%d", sizeof(short));
    printf("\n%d", sizeof(unsigned long long));
    printf("\n%d", sizeof(long long));
    printf("\n%d", sizeof(bool));
	

	return 0;
}