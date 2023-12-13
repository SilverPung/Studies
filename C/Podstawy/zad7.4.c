#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int znajduje_sie_w(const char* znaki, char znak, int* litery, int* cyfry) {
    int powt = 0;
    
    while (*znaki != '\0') {//dopóki nie dojdzie do końca tablicy
        if (*znaki == znak) {
            powt++;//jeśli znak jest w tablicy zwraca true
        }
        if (*znaki >= 'a' && *znaki <= 'z') {
            (*litery)++;//zwiększa licznik liter
        }
        if (*znaki >= '0' && *znaki <= '9') {
            (*cyfry)++;//zwiększa licznik cyfr
        }
        znaki++;
    }
    
    return powt;
}

int main() {
    int litery = 0;
    int cyfry = 0;
    int *wsk1 = &litery;
    int *wsk2 = &cyfry;
    char lancuch[100];
    printf("Wprowadź ciąg znaków (max(100 znaków)):\n");
    fgets(lancuch, sizeof(lancuch), stdin);
    int dlugosc = strlen(lancuch);

    char znak;
    printf("Wprowadź znak do sprawdzenia: ");
    scanf(" %c", &znak);

    int powt = znajduje_sie_w(lancuch, znak, wsk1, wsk2);
    printf("Znak '%c' występuje %d razy w ciągu znaków.\n", znak, powt);
    printf("W tekście jest %d liter i %d cyfr", litery, cyfry);
    return 0;
}
