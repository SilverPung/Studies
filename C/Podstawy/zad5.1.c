#include <stdio.h>

double min(double a,double b)
{
    if(a>b)
        return b;
    return a;
}
int main(){

    double number1,number2,mini;
    printf("Podaj liczbę 1:");
    scanf("%lf",&number1);
    printf("Podaj liczbę 1:");
    scanf("%lf",&number2);
    mini=min(number1,number2);
    printf("Mniejsza liczba to %lf",mini);
    return 0;
}