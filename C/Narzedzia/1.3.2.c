#include <stdio.h>

int main() {

int a, b, c;

printf("Podaj trzy liczby całkowite: ");

scanf("%d %d %d", &a, &b, &c);

int max = a;

if (b > max) {

max = b;

}

if (c > max) {
    max = c; 
    } 
    printf("Największa liczba to: %d\n", max); 
    return 0;
}