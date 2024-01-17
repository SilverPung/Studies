#include <stdio.h>

int main() {
    int number;
    printf("Wpisz liczbę: ");
    scanf("%d", &number);

    int bit5 = (number >> 4) & 1;//przydzielenie bitow
    int bit8 = (number >> 7) & 1;

    printf("Bit 5: %d\n", bit5);//wypisywanie bitow
    printf("Bit 8: %d\n", bit8);

    return 0;
}
