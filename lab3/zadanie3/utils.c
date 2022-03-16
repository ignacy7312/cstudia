#include <stdbool.h>

bool isPrime(unsigned int x){
    
    if(x == 0 || x == 1) //0 ani 1 nie są pierwsze
        return false;
    else if(x == 2) //2 jest pierwszą liczbą pierwszą 
        return true;
    else{
        for(int i = 2; i < x; i++){ //jeżeli reszta z dzielenia liczby przez cokolwiek innego niż 1 lub ona sama da 0, to liczba nie jest pierwsza
            if(x % i == 0){
                return false;
            }
        }
        return true;
    }
}

int gcd(unsigned int x, unsigned int y){
    //Algorytm euklidesa - NWD dwóch liczb jest największa z liczb, która dzieli obie te liczby bez reszty
    
    int p;  //zmienna - placeholder
    while(y != 0){ //dopóki druga liczba jest różna od zera
        p = y;      //zapamietaj y
        y = x % y;  // y staje sie reszta z dzielenia x przez y
        x = p;      //x dostaje wartosc y z poczatku iteracji      
    }
    return x;
}