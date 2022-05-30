#pragma once
#include <iostream>
#include <cstring>



class Pytanie {
    public:

    std::string tresc;
    std::string a,b,c,d;
    int numer;
    std::string poprawna;
    std::string udzielona;
    int punkt;

    
    void wczytaj(); //wczytuje pytnie z pliku
    void zadajPytanie(); //pokazuje pytanie 
    void sprawdz(int *); //sprawdza odpowiedz

};