#include <stdio.h>
#include <math.h>

int main(void){
    int i = 6;
    int a = pow(10,i);




    int number = 15;
    number /= 2;


    //printf("%d",13/2);
    //while(number > 0){
     //   number /= 2;
    //    printf("%d",number);
    //} 


    int power = 1;
    for(int j = i; j>0; j--){
        power *= 10;
    }
    printf("%d",power);

}