#include <iostream>
#include <iomanip>


int main(){


    int a = 255;
    int b = 10;
    int c = 1024;
    /*
    std::cout << "liczba: " << b << " teraz w hex: " << std::setiosflags(std::ios::showbase) << std::setbase(16) << b << std::endl;
    std::cout << "liczba: " << b << " teraz w binary: " << std::setiosflags(std::ios::showbase) << std::setbase(2) << b << std::endl;
    std::cout << "liczba: " << b << " teraz w oct: " << std::setiosflags(std::ios::showbase) << std::setbase(8) << b << std::endl;

    std::cout << "liczba: " << a << " teraz w hex: " << std::setiosflags(std::ios::showbase) << std::setbase(16) << a << std::endl;
    std::cout << "liczba: " << a << " teraz w binary: " << std::setiosflags(std::ios::showbase) << std::setbase(2) << a << std::endl;
    std::cout << "liczba: " << a << " teraz w oct: " << std::setiosflags(std::ios::showbase) << std::setbase(8) << a << std::endl;

    std::cout << "liczba: " << c << " teraz w hex: " << std::setiosflags(std::ios::showbase) << std::setbase(16) << c << std::endl;
    std::cout << "liczba: " << c << " teraz w binary: " << std::setiosflags(std::ios::showbase) << std::setbase(2) << c << std::endl;
    std::cout << "liczba: " << c << " teraz w oct: " << std::setiosflags(std::ios::showbase) << std::setbase(8) << c << std::endl;
    */


    //cout.width(100);
    std::cout << std::setw(100) << std::setfill('0') << "szerokosc pola to 100: " << std::endl;
    printf("\n %*d \n", 80, 10);


    float d = 5.12395489999; 
    float e = 6.98;
    std::cout << "precision 1 " << std::setprecision(1) << d << std::endl;
    std::cout << "precision 3 " << std::setprecision(3) << d << std::endl;
    std::cout << "precision 5 " << std::setprecision(5) << d << std::endl;
    std::cout << "precision 6 " << std::setprecision(6) << d << std::endl;
    std::cout << "precision 7 " << std::setprecision(7) << d << std::endl;
    std::cout << "precision 8 " << std::setprecision(8) << d << std::endl;
    std::cout << "precision 9 " << std::setprecision(9) << d << std::endl; 
    std::cout << "precision 10 " << std::setprecision(10) << d << std::endl;
    std::cout << "precision 11 " << std::setprecision(11) << d << std::endl;


    std::cout << "precision 1 " << std::setprecision(1) << e << std::endl;
    std::cout << "precision 2 " << std::setprecision(2) << e << std::endl;
    std::cout << "precision 3 " << std::setprecision(3) << e << std::endl;
    std::cout << "precision 5 " << std::setprecision(5) << e << std::endl; //nie dodaje zer - printuje tylko tyle ile liczb po przecinku ma cfra

    
    return 0;
}