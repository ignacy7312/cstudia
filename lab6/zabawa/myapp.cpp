#include <iostream>

int main(int argc, char ** argv){

    if (argc > 1){
        std::cout << "First arg: " << argv[0] << std::endl;
    
    for(int i = 1; i < argc; ++i)    
        std::cout << "Next arg: " << argv[i] << std::endl;
    
    }

    return 0;
}