#include <iostream>
#include <chrono>
#include "gcd.h"

int main(void){
    
    int liczba1 = 232423169;
    int liczba2 = 1235555344;
    int rgcd,igcd;


    auto begin = std::chrono::high_resolution_clock::now();
    igcd = iterGcd(liczba1,liczba2);
    auto finish = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - begin).count(); //rzutowanie różnicy na milisekundy 
    std::cout << "NWD liczb: " << liczba1 << " oraz " << liczba2 << " to: " << igcd << std::endl;
    std::cout << "Zajelo iteracyjnie " << duration << "ms." << std::endl;


    begin = std::chrono::high_resolution_clock::now();
    rgcd = recurGcd(liczba1,liczba2);
    finish = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - begin).count(); //rzutowanie różnicy na milisekundy 
    std::cout << "NWD liczb: " << liczba1 << " oraz " << liczba2 << " to: " << rgcd << std::endl;
    std::cout << "Zajelo rekurencyjnie " << duration << "ms." << std::endl;

    return 0;
}