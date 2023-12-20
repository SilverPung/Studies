#include <stdbool.h>
#include <stdio.h>
#include <string.h>


bool znajduje_sie_w(const char* znaki, char znak) {
    while (*znaki != '\0') {//dopóki nie dojdzie do końca tablicy
        if (*znaki == znak) {
            return true;//jeśli znak jest w tablicy zwraca true
        }
        znaki++;
    }
    return false;
}

int main() {
    char lancuch[100];
    printf("Wprowadź ciąg znaków (max(100 znaków)):\n");
    fgets(lancuch, sizeof(lancuch), stdin);//wczytuje do tablicy
    int dlugosc = strlen(lancuch);

    for (int i = 0; i < dlugosc-1; i++) {
        char znak;
        printf("Wprowadź znak do sprawdzenia: ");
        scanf(" %c", &znak);

        if (znajduje_sie_w(lancuch, znak)) {
            printf("Znak '%c' znajduje się w ciągu znaków.\n", znak);
        } else {
            printf("Znak '%c' nie znajduje się w ciągu znaków.\n", znak);
        }
    }

    return 0;
}
