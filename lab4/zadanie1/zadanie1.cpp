#include <iostream>
#include <iomanip>


int main(){

    using namespace std;

    int b = 1024;
    cout << "liczba: " << b << " teraz w hex: " << hex << b << endl;



    cout.width(30);
    cout << "szerokosc pola to 30: " << endl;



    float a = 5.1239544;
    cout << "precision 1 " << setprecision(1) << a << endl;
    cout << "precision 3 " << setprecision(3) << a << endl;
    cout << "precision 5 " << setprecision(5) << a << endl;
    cout << "precision 6 " << setprecision(6) << a << endl;
    cout << "precision 9 " << setprecision(9) << a << endl;


    

    return 0;
}