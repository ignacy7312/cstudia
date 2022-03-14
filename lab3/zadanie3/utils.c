#include <stdbool.h>

bool isPrime(unsigned int x){
    
    if(x == 0 || x == 1)
        return false;
    else if(x == 2)
        return true;
    else{
        for(int i = 2; i < x; i++){
            if(x % i == 0){
                return false;
            }
        }
        return true;
    }
}

int gcd(unsigned int x, unsigned int y){
    //Algorytm euklidesa
    
    int p;  //zmienna - placeholder
    while(y != 0){ //dopoki druga liczba jest wieksza od zera
        p = y;      //zapamietaj y
        y = x % y;  // y staje sie reszta z dzielenia x przez y
        x = p;      //x dostaje wartosc y z poczatku iteracji      
    }
    return x;
}