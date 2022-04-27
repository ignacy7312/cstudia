#include <iostream>

void addtoValue(int & value){
    value += 10;
}


int * createArray(const int size){
    int * newarray = new int[size];
    for (int i = 0; i < size; i++)
        newarray[i] = 5;
    return newarray;
}



int main(void){

    int nSize;
    std::cout << "ENter size:" << std::endl;
    std::cin >> nSize;

    int & refSize = nSize;
    int * refPtr = &refSize;
    int * sizePtr = &nSize;

    std::cout << "size: " << nSize << " refSize: " << refSize << std::endl;
    std::cout << "sizePtr: " << sizePtr << " refPtr: " << refPtr << std::endl;
    addtoValue(refSize);
    std::cout << nSize << std::endl;

    char * tab = new char[nSize];
    float * fff = new float(5);

    /*std::cout << *fff << std::endl;
    std::cout << "Enter tab eleements:" << std::endl;
    for (int i = 0; i < nSize; i++)
        std::cin >> tab[i];

    for (int i = 0; i < nSize; i++)
        std::cout << tab[i];
    */

    int * nowy = createArray(10);
    for (int i = 0; i < 10; i++)
        std::cout << nowy[i];

    delete fff;
    delete[] tab;

    return 0;
}