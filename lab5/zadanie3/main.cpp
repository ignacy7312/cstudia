#include <iostream>
#include <chrono>
#include "gcd.h"

int main(void){
    
    
    auto begin = std::chrono::high_resolution_clock::now();
    std::cout << sizeof(begin) << std::endl;
    std::cout << "liczby: " << 23242316 << " oraz " << 863 << std::endl;
    std::cout << iterGcd(23242316,863) << '\n';
    auto finish = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - begin).count();
    std::cout << "Zajelo iteracyjnie " << duration << "ms." << std::endl;


    auto begin2 = std::chrono::high_resolution_clock::now();
    std::cout << "liczby: " << 23242316 << " oraz " << 863 << std::endl;
    std::cout << recurGcd(23242316,863) << '\n';
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::milliseconds>(finish2 - begin2).count();
    std::cout << "Zajelo rekurencyjnie " << duration2 << "ms." << std::endl;

    return 0;
}