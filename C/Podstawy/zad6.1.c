#include <stdio.h>

int main() {
    int tab[5];
    int *wsk = tab;//dodaje wzkaźnik
    printf("Podaj 5 liczb całkowitych:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &tab[i]);//wczytuje do tablicy
    }
    printf("Wartości w tablicy:\n");
    for (int i = 4; i >=0; i--) {
        printf("%d\n", *(wsk+i));//wyświetla od tyłu
    }
     return 0;
}