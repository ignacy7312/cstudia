#include <iostream>
#include "quiz.h"


int main(void){

    int punkty = 0;

    Pytanie * pytania = new Pytanie[4];

    for (int i = 0; i <= 3; i++){
        pytania[i].numer = i + 1;
        pytania[i].wczytaj();
        pytania[i].zadajPytanie();
        pytania[i].sprawdz(&punkty);
    }

    std::cout << "koniec quizu. Punkty = " << punkty << std::endl;
    delete[] pytania;
    return 0;
}