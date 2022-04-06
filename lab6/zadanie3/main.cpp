#include <iostream>
#include "calculator.h"

//.\main "mul" "mul" "add" "add" "sub" "sub" "div" 

int main(int argc, char ** argv){   //** -wskaźnik na tablice wskaźników na char

    if (argc > 1){ //sprawdzenie czy do fcji zostaly przekazane argumenty
        
    float a,b;
    std::cout << "podaj dwie liczby zmiennoprzecinkowe: \n";
    std::cin >> a >> b;
    std::cout << calculate(a, b, argv, argc);
    }
    return EXIT_SUCCESS;
}