#include <stdio.h>

int main() {
    int tab[3][3];
    int *wsk = &tab[0][0];//wczytuje do tablicy
    printf("Podaj 9 liczb całkowitych:\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &tab[i/3][i%3]); //i/3 - wiersz, i%3 - kolumna
    }
    printf("Wartości w tablicy:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("{ ");
        for(int j=0;j<3;j++)
        {
            printf("%d ", *(wsk+i*3+j));//wyświetla
        }
        printf("}\n");

    }
     return 0;
}