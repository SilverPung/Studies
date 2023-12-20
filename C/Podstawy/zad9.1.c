#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);//pobieranie ilosci liczb

    int* numbers = (int*)malloc(n * sizeof(int)),total = 0;//alokacja pamieci
    if (numbers == NULL) {
        printf("Error , nie mozna przydzielic pamieci\n");
        return 1;
    }

    printf("podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);//pobieranie liczb i sumowanie
        total += numbers[i];
    }
    printf("Suma liczb wynosi: %d\n", total);//wypisywanie sumy
    free(numbers);//zwalnianie pamieci
    return 0;
}