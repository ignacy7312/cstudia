#include "gcd.h"

int iterGcd(int x, int y){
    //Algorytm euklidesa - NWD dwóch liczb jest największa z liczb, która dzieli obie te liczby bez reszty
    
    int p;  //zmienna - placeholder
    while(y != 0){ //dopóki druga liczba jest różna od zera
        p = y;      //zapamietaj y
        y = x % y;  // y staje sie reszta z dzielenia x przez y
        x = p;      //x dostaje wartosc y z poczatku iteracji      
    }
    return x;
}

int recurGcd(int x, int y){
    if(y == 0)
        return x;
    else
        recurGcd(y, x % y); //x musi przyjmowac wartosc y (jak w iteracyjnym) a y musi przyjmowac wartosc x % y

}
