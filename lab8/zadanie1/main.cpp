#include <iostream>
#include <iomanip>

int main(void){

    /*wyżej w przestrzeni adresowej jest stos. */

    //zmienne alokowane na stosie - statycznie 
    int a = 15;
    float b = 10.56;
    double c = 22.0067;
    unsigned short d = 250;
    int tab[50] = {1,2};

    unsigned int adra = (unsigned int) &a;
    unsigned int adrb = (unsigned int) &b;
    unsigned int adrc = (unsigned int) &c;
    unsigned int adrd = (unsigned int) &d;
    
    std::cout << "adresy zmiennych alokowanych na stosie:" << std::endl;
    std::cout << adra << ' ' << adrb << ' ' << adrc << ' '  << ' '<< adrd << '\n';
    std::cout << adra - adrb << std::endl;
    std::cout << adrb - adrc << std::endl;
    std::cout << adrc - adrd << std::endl;
    std::cout << sizeof(tab) << std::endl;
    //adresy przydzielane są w dół
    
    //zmienne alokowane na stercie - dynamicznie

    int * t = new int(15);
    float * x = new float(10.56);
    double * y = new double(22.0067);
    unsigned short * z = new unsigned short(250);

    unsigned int adrt = (unsigned int) &t;
    unsigned int adrx = (unsigned int) &x;
    unsigned int adry = (unsigned int) &y;
    unsigned int adrz = (unsigned int) &z;     

    std::cout << "adresy zmiennych alokowanych na stercie:" << std::endl;
    std::cout << adrt << ' ' << adrx << ' '<< adry << ' '<< adrz << '\n';
    std::cout << adrt - adrx << std::endl;
    std::cout << adrx - adry << std::endl;
    std::cout << adry - adrz << std::endl;
    //adresy przydzielane są w dół
    

    std::cout << "---------------" << std::endl;
    std::cout <<  adra - adrt << std::endl;
    std::cout << (unsigned int) &tab[0] - adrt << std::endl;
    
    return EXIT_SUCCESS;
}