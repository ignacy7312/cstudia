# Notatki z trzeciego skryptu

## Systemy liczbowe

cyfra znajdująca się na danej pozycji w ciągu tworzącym liczbę stanowi wielokrotność potęgi liczby zwanej bazą systemu (2 w binarnym, 10 w dziesiętym, 16 w HEX)

C/C++ pozwają przypisać do int liczbe z różnych systemów, np: 
- int a = 180;  system dziesietny
- int b = 0 b10110100; system binarny ( prefiks 0b)
- int c = 0264;  system osemkowy ( prefiks 0)
- int d = 0 xB4; system szesnastkowy ( prefiks 0x)

System binarny znalazł powszechne zastosowanie w elektronice cyfrowej,m.in. w opisie układów bramek logicznych. System ósemkowy jest uzywany np. do nadawania uprawnien dostepu do plików i katalogów w systemach operacyjnych z rodziny Unix (polecenie chmod. System szesnastkowy słuzy do zapisu kodu maszynowego, adresów sprzetowych MAC, czy kodów barw stosowanych np. w HTML czy CSS.

## Rodzaje zmiennych

lokalne i globalne - różnią się zasięgiem (widoczność, zakres ważności), rodzajem wiazania, czasem zycia, wystepowaniem mechanizmu domyslnej inicjalizacji oraz segmentem pamieci, w którym sa alokowane.

zmienne lokalne - w obrębie bloku, w którym zostały zadeklarowane i od miejsca ich deklaracji. W momencie jej zdefiniowania lokowana jest w pamięci potrzebna pamięc zwana stosem. A gdy program opuści blok, jest zwalniana.

zmienne globalne - widoczne w całej aplikacji, deklarowane poza ciałami funkcji. Są domyślnie zerowane (jeżeli nie zainicjuje się ich). Stad tez czas zycia zmiennych globalnych jest równy czasowi wykonywania programu i moga zostac zainicjalizowane wyłacznie za pomoca wyrazen stałych.

lokalne zmienne statyczne - zmienne lokalne zadeklarowane wewnątrz bloku, przy użyciu słowa kluczowego static. Nie zmienia to ich widoczności, ale żyją od inicjalizacji do końca działania aplikacji.Inicjalizacja zachodzi jednorazowo, przy pierwszym wywołaniu zmiennej (domyslnie wartoscia 0).
Jest to tak zwana leniwa inicjalizacja zmiennej i stosowana jest czesto do inicjalizacji lokalnych zmiennych o znacznym rozmiarze, których kazdorazowetworzenie i zwalnianie byłoby kosztowne. W zwiazku z powyzszym, lokalne zmienne statyczne utrzymuja swoja wartosc miedzy wywołaniami funkcji. Innymi słowy, zmienna utrzymuje wartosc zapisana po poprzednim wykonaniu funkcji, w której została zdeklarowana. Zmienne zdeklarowane przy uzyciu słowa kluczowego static sa alokowane w tych samych segmentach pamieci co zmienne globalne.

globalne zmienne statyczne - zmienne globalne zadekl. przy użyciu słowa kluczowego static. Od zmiennych globalnych róznia sie rodzajem wiazania (wewnetrzne) – mozna odwołac sie do nich jedynie w jednostce kompilacji, w której zostały zdeklarowane.

### stałe - zmienne zadeklarowane przy użyciu sł klucz const
nie mogą być zmodyfikowane w kodzie programu (ale moze byc to osiagniete przez modyfikacje fragmentu pamieci, w której przechowywana jest stała). Z tego względu nie można rozdzielić deklaracji i definicji stałej. 

!!

Alokowane sa w segmencie pamieci tylko do odczytu (read-only) .rodata, a ich wykorzystanie w kodzie moze byc optymalizowane
przez kompilator. Z tego wzgledu zaleca sie, aby wszystkie wyrazenia, których wartosc nie bedzie modyfikowana w trakcie działania programu, były deklarowane przy uzyciu kwalifikatora const.

!!

## zasięg i wiązanie zmiennej, extern

