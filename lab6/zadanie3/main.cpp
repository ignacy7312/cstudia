#include <iostream>
#include "calculator.h"

int main(int argc, char ** argv){

    if (argc > 1){
        /*std::cout << argc;
        //std::cout << sizeof(argv)/sizeof(int);
        char *ope[4];
        int i = 1;
        for(i; i < argc; i++){
            std::cout << argv[i] << std::endl;
            ope[i-1] = argv[i];
            std::cout << ope[i-1] << std::endl;
        }

    //char *ope[4] = {"add", "sub", "mul", "div"};
    //for(int k = 1; k < argc; k++) std::cout << argv[k];
    //std::cout  << std::endl;
    //for(int k = 0; k < argc; k++) std::cout <<" numer "<<k << ' '<< ope[k];
*/
    float a,b;
    std::cout << "podaj dwie liczby zmiennoprzecinkowe: \n";
    std::cin >> a >> b;
    std::cout << calculate(a, b, argv, argc);
    }
    return 0;
}