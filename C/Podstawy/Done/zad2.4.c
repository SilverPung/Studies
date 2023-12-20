#include <stdio.h>
int main()
{
    float number1,number2;
    char znak;
    printf("podaj liczby: ");
    scanf("%f",&number1);       //wczytujemy liczby
    scanf("%f",&number2);
    printf("podaj znak\n");
    scanf(" %c",&znak);
    switch (znak)
    {                   //sprawdzamy znak i wykonujemy obliczenia
    case '/':
        number1=number1/number2;
        printf("%f",number1);
        break;
    case '*':
        number1=number1*number2;
        printf("%f",number1);
        break;
    case '+':
        number1=number1-number2;
        printf("%f",number1);
        break;
    case '-':
        number1=number1-number2;
        printf("%f",number1);
        break;
    default:
        printf("Nia ma takiej operacji");
        break;
    }

    
    return 0;
}