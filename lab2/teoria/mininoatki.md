# Notatki z drugiego skryptu 

## Podstawy
C/C++ - języki wysokiego poziomu, ich składnia nie jest zrozumiała dla procesora

języki assemblera wykorzystują zbiór instrukcji procesora określonym poleceniom w kodzie maszynowym - nieprzeonośne, charakterstyczne dla danej architektury procesora

języki wyoskiego poz - przenośne

kompilator C - tłumaczy kod na kod asemblera, ktory nastepnie jest zmieniany na kod maszynowy (asemblacja)

## Funkcja main()

- ma ją każdy program w C/C++

- wywołuje wszystkie instrukcje przeznaczone do wykonania w ramach aplikacji, w określonej kolejności

- WAŻNE - - umieszczać w pliku main.c

Funkcje nie zwracające żadnej wartości nazywa się też procedurami

!! Typ zwracany przez funkcję nie należy do jej sygnatury. Istotne przy zagadnieniu przeciążania funkcji

!! Wartość zwracana przez funkcję main() to kod błędu wykonania aplikacji. Jeżeli jest 0 - brak błędu.

## Pliki nagłówkowe - header files

zawierają głównie deklaracje zmiennych i funkcji wykorzystywanych w aplikacji, a pliki źródłowe ich definicje

Kazdy plik zródłowy stanowi odrebna jednostke translacji (kompilacji) i jest poddawany procesowi kompilacji oddzielnie. 

Linker (konsolidator) łączy wszystkie pliki ze sobą

Rozdzielenie kompilatora i konsolidatora nazywa sie kompilacja rozłaczna. Jednym z powodów takiego zabiegu jest mozliwosc ponownej kompilacji jedynie zmodyfikowanego pliku, a nie wszystkich plików projektu. (makefiles)

## kod bledu

komendą echo %ERRORLEVEL% można sprawdzić kod błędu ostatnio wykonanej instrukcji.

## #include

#include to dyrektywa preprocesora

Preprocesor to program komputerowy, którego zadaniem jest odpowiednie przetworzenie instrukcji zawartych w kodzie, zwanych własnie dyrektywami preprocesora. Preprocesor przetwarza kod zródłowy, zanim kompilator rozpocznie jego analize. 
Mozna powiedziec, ze preprocesor przygotowuje kod zródłowy dla
kompilatora.

Istotną regułą jest, aby za pomoca dyrektywy #include załaczac tylko pliki nagłówkowe (rozszerzenie .h). Pliki zródłowe (rozszerzenie .c) sa kompilowane rozdzielnie i wiazane przez konsolidator.

## deklaracja a definicja

deklaracja - zapowiedz zmiennej (lub funkcji): int a
definicja zmiennej (lub funkcji): a = 15
deklaracja i definicja: int b = 15

## void 

void sluzy do deklarowania procedur

## deklaracja zapowiadajaca 

zadeklarowanie funkcji przed main(), a zdefiniowanie po main()


## flagi kompilatora

## operator sizeof

## liczby zmiennoprzecinkowe