#include <stdio.h>

int main()
{
    float weight,height;
    printf("Podaj wagę w kg: ");
    scanf("%f",&weight);//pobiera wagę
    printf("Podaj wysokośc w cm: ");
    scanf("\n%f",&height);//pobiera wysokość
    float bmi=weight/((height/100)*(height/100));//oblicza bmi
    printf("\nTwoje BMI wynosi ");
    printf("%f",bmi);//wypisuje bmi
    return 0;
}