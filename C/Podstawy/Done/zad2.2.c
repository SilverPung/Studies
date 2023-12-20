#include <stdio.h>
int main()
{
    int number1;
    scanf("%d",&number1);       //wczytujemy dane
    if(number1<0)               //sprawdzamy czy jest mniejsze od 0
        number1=-number1;           //podmieniamy
    printf("%d",number1);
    return 0;
}