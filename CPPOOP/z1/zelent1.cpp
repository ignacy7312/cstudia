#include <iostream>

class Auto {
    public:

    //atrybuty
    std::string marka;
    std::string model;
    int rokProdukcji;
    int przebieg;

    //metody 
    void wczytaj(){
        std::cout << "wczytywanie auta do bazy\n";
        std::cout << "podaj markę\n";
        std::cin >> marka;
        std::cout << "podaj model\n";
        std::cin >> model;
        std::cout << "podaj rok produkcji\n";
        std::cin >> rokProdukcji;
        std::cout << "podaj przebieg\n";
        std::cin >> przebieg;
    }
    void wypisz(){
        std::cout << marka << ' ' << model << ' ' << rokProdukcji << ' ' << przebieg << std::endl;
    }
};

class Zwierze {

    public: //daje dostęp do wnętrza klasy wszystkim funkcjom w programie, w tym funkcji main
    //atrybuty
    std::string gatunek;
    std::string imie;
    int wiek;

    //metody
    void dodajZwierze(){
        std::cout << "Dodawanie nowego zwierzecia do bazy\n";
        std::cout << "Podaj gatunek:\n";
        std::cin >> gatunek;
        std::cout << "Podaj imie:\n";
        std::cin >> imie;
        std::cout << "Podaj wiek:\n";
        std::cin >> wiek;
    }

    void dajGlos(){

        if (gatunek == "kot")
            std::cout << imie << ' ' << wiek << " miau" << std::endl;
        else if (gatunek == "koza")
            std::cout << imie << ' ' << wiek << " lech" << std::endl;
        else if (gatunek == "krowa")
            std::cout << imie << ' ' << wiek << " muu" << std::endl;
        else 
            std::cout << "Nieznany gatunek" << std::endl;
    }

};


int main(void){

    Zwierze zwierzak1;
    std::cout << zwierzak1.wiek << ' ' << zwierzak1.imie << std::endl;
    zwierzak1.dodajZwierze();
    std::cout << zwierzak1.wiek << ' ' << zwierzak1.imie << std::endl;
    zwierzak1.dajGlos();

    Auto pierwsze;
    pierwsze.wczytaj();
    pierwsze.wypisz();


    std::cout << "Hello" << std::endl;

    return 0;
}

