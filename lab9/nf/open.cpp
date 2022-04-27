#include <iostream>
#include <fstream>

int main(void){

    
    int nSize;
    std::cout << "Size: " << std::endl;
    std::cin >> nSize;

    char * slowo = new char[nSize]; 
    std::cout << "Slowo: " << std::endl;
    std::cin >> slowo;
    
    
    std::ofstream file;
    file.open("data2.txt");

    file << slowo;

    file.close();    

    return 0;
}
