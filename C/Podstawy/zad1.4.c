#include <stdio.h>

int main()
{
    int age;
    printf("Podaj wiek w latach: ");
    scanf("%d",&age);//pobiera wiek
    long int sec_age=age*3.156*10000000;//oblicza wiek w sekundach
    printf("%d",sec_age);//wypisuje wiek
    return 0;
}