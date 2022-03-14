
#include < plik > - preprocesor szuka pośród plików biblioteki standardowej

#inlcude "plik" - szuka pośród plików projektu (ten sam folder - chyba że się inaczej określi)


Dyrektywa #pragma once zapewnia, ze dany plik nagłówkowy zostanie załaczony w obrebie zadanej jednostki translacji tylko raz, nawet, jezeli w innym załaczanym pliku nagłówkowym zastosujemy dyrektywe #include ”defs.h”.

Wcelu zbudowania aplikacji nalezy wykonac polecenie gcc main.c defs.c -o multApp. Po uruchomieniu pliku wykonywalnego multApp.exe (lub multApp.out) na konsoli wyswietlony zostaje wynik mnozenia 2 przez 5,5.
Mozliwe jest zatrzymanie proces kompilacji na etapie proprocesingu, aby zobaczyc wynik pracy preprocesora. W tym celu nalezy skorzystac z flagi -E (gcc -E main.c defs.c).