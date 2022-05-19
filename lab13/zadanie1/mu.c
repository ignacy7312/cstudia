#include "mu.h"

int gcd(int x, int y){
    if(y == 0)
            return x;
        else
            gcd(y, x % y);
}

int lcm(int x, int y){
    int i = x;
    while((x % y) != 0){
        x += i;
    }
    return x;
}