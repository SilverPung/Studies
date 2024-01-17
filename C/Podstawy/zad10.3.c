#include <stdio.h>

void wypiszBity(int num) {//funkcja wypisujaca liczbe binarnie
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int liczba1, liczba2;
    int wynik;
    int wybor;

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &liczba1);

    printf("Podaj drugą liczbę: ");
    scanf("%d", &liczba2);

    printf("Wybierz operację bitową:\n");
    printf("1. AND\n");
    printf("2. LUB\n");
    printf("3. XOR\n");
    printf("4. Negacja\n");//wypisywanie menu
    printf("Podaj swój wybór: ");
    scanf("%d", &wybor);

    switch (wybor) {//wybor operacji
        case 1:
            wynik = liczba1 & liczba2;
            printf("Operacja bitowa AND: %d\n", wynik);
            printf("Operacja bitowa I (binarnie): ");
            wypiszBity(wynik);
            break;
        case 2:
            wynik = liczba1 | liczba2;
            printf("Operacja bitowa LUB: %d\n", wynik);
            printf("Operacja bitowa LUB (binarnie): ");
            wypiszBity(wynik);
            break;
        case 3:
            wynik = liczba1 ^ liczba2;
            printf("Operacja bitowa XOR: %d\n", wynik);
            printf("Operacja bitowa XOR (binarnie): ");
            wypiszBity(wynik);
            break;
        case 4:
            wynik = ~liczba1;
            printf("Operacja bitowa negacji: %d\n", wynik);
            printf("Operacja bitowa negacji (binarnie): ");
            wypiszBity(wynik);
            break;
        default:
            printf("Nieprawidłowy wybór!\n");
            break;
    }

    return 0;
}
