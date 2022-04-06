#include <iostream>

void tabmodi( int * const tab, int size);
void inc(int a);
void winc(int * a);

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
    
    int tablica[5] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(tablica)/sizeof(*tablica); i++)
        std::cout << tablica[i];
    std::cout << std::endl;
    tabmodi(tablica, 5);
    std::cout << std::endl;
    for(int i = 0; i < sizeof(tablica)/sizeof(*tablica); i++)
        std::cout << tablica[i];

    std::cout << std::endl;
    int a = 10;
    int b = 15;
    inc(a);
    winc(&b);
    std::cout << a << ' ' << b << std::endl; 

    return 0;
}   


void tabmodi(int * const tab, int size){
    for(int i = 0; i < size; i++){
        tab[i] += 1;
    }
}

void inc(int a){
    a += 2;
}
void winc(int * a){
    *a += 2;
}
