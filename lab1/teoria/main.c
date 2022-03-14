#include <stdio.h> //dolaczenie biblioteki

int main(){
    
    int tlen,azot;
    tlen = 21;
    azot = 78;
    //komentarz 
    //: - )
    

    printf("Skladniki powietrza:\nTlen %d%%\nAzot %d%%", tlen, azot); //problem z wypisaniem % - bo jest to inf o fladzie dla zmiennej dlatego trzeba dac % dwa razy
    printf("\nIgnacy Pochodyla\n"); //sluzy tez do wypisywania zmiennych
    puts("Kazdy tekst wypisze ta funkcja\n wypisze rowniez np %d"); //wypisze rowniez np %d
    
    
    int wiek;
    puts("Ile masz lat?");
    scanf("%d", &wiek); //& - skierowanie do adresu pamięci w komputerze tam gdzie znajduje się zmienna 
    
    printf("W takim razie urodziles sie w %d roku",2022-wiek);

    
    return 0;
}