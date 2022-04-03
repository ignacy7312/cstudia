#include <iostream>

int main(void){

    int x = 2137;
    char k = 'c';
    const int * ptr = &x;
    char * ptr2 = &k;
    printf("%d %p %p %p", sizeof(ptr), ptr, &x, &ptr);
    std::cout << '\n';
    std::cout << x << std::endl;
    std::cout << *ptr << std::endl; //*ptr oznacza odwolanie sie do zmiennej o adresie ptr
    
    //*ptr = 2; przypisanie zmiennej o adresie ptr 2
    std::cout << &x << ' ' << *ptr << ' ' << ptr << std::endl;
    
    
    int * ccc = nullptr;
    
   
    return 0;
}   