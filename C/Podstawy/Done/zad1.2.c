#include <stdio.h>

int main()
{
    int ascii;
    printf("Podaj liczbę: ");
    scanf("%d",&ascii);//podstawiam wertośc na int
    char value=ascii;//zamienia int na char
    printf("%c",value);//wypisuje char
    return 0;
}