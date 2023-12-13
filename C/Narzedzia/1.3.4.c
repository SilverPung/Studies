#include <stdio.h>

void funkcjaA(int a, int b) {

int suma = a + b;

printf("Wynik funkcjiA: %d\n", suma);

}

void funkcjaB(int x, int y) {

int iloczyn = x * y;

printf("Wynik funkcjiB: %d\n", iloczyn);

}

int main() {

int x = 5;

int y = 3;

funkcjaA(x, y);

funkcjaB(x, y);

return 0;
}