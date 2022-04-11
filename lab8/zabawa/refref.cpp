#include <stdlib.h>
#include <iostream>

void use_ref(int & ref);


int main(void){


    int x = 15;
    int & refx = x;
    const int const_y = 20;
    const int & const_ref = const_y;
    const int & cref2 = x;

    use_ref(x);
    std::cout << x << std::endl;
    
    use_ref(refx);
    std::cout << refx << std::endl;

    return 0;
}

void use_ref(int & ref){
    ref++;
}
