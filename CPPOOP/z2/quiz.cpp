#include <cstdlib>
#include <fstream>
#include "quiz.h"


void Pytanie::wczytaj(){

    std::fstream file;
    file.open("quiz.txt", std::ios_base::in);
    if(!file.is_open())
        exit(EXIT_FAILURE);

    int nrLinii = (numer - 1) * 6 + 1;
    int aktualnyNumer = 1;

    std::string linia;

    while(getline(file, linia)){
        
        if (aktualnyNumer == nrLinii)
            tresc = linia;
        if (aktualnyNumer == nrLinii + 1)
            a = linia;
        if (aktualnyNumer == nrLinii + 2)
            b = linia;
        if (aktualnyNumer == nrLinii + 3)
            c = linia;
        if (aktualnyNumer == nrLinii + 4)
            d = linia;
        if (aktualnyNumer == nrLinii + 5)
            poprawna = linia;
        aktualnyNumer++;
    }

    file.close();

}

void Pytanie::zadajPytanie(){

    std::cout << '\n' << tresc << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << "---------------\n";
    std::cout << "podaj odpowiedz:\n";
    std::cin >> udzielona;

}

void Pytanie::sprawdz(int * punkt){
    *punkt += (udzielona == poprawna) ? 1 : 0;
}