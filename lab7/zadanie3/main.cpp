#include "openf.h"


int main(int argc, char ** argv){

    if(argc > 1){ //sprawdzenie czy zostaly przekazane argumenty
        
        std::string total = "";
        
        for(int i = 1; i < argc; i++){ //bo pierwszym argumentem jest path do programu
            total += get20(argv[i]);
        }

        save_strings("compilation.txt", total);

    }
    return EXIT_SUCCESS;
}