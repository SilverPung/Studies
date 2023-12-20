#include <stdio.h>
#include <stdlib.h>

struct zbiorka{//strktura zbiorka
    char imie[20];
    char nazwa_grupy[20];
    int kwota;
};
int main(){
    printf("Podaj ilosc zbiorek: ");//pobieranie ilosci zbiorek
    int n;
    scanf("%d", &n);
    struct zbiorka uczestnik[n];
    for(int i=0; i<n; i++){//pobieranie danych
        printf("Podaj imie: ");
        scanf("%s", uczestnik[i].imie);
        printf("Podaj nazwe grupy: ");
        scanf("%s", uczestnik[i].nazwa_grupy);
        printf("Podaj kwote: ");
        scanf("%d", &uczestnik[i].kwota);
    }
    for(int i=0; i<n; i++){//wycztywanie danych
        printf("Imie: %s; ", uczestnik[i].imie);
        printf("Nazwa grupy: %s; ", uczestnik[i].nazwa_grupy);
        printf("Kwota: %d;\n", uczestnik[i].kwota);
    }

    return 0;
}