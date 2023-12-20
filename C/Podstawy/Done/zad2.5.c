#include <stdio.h>
int main()
{
    int number1;
    float a;
    printf("podaj numer operacji 1-kwadrat;2-prostokąt;3-trójkąt\n");
    scanf("%d",&number1);
    switch (number1)
    {                  
    case 1:
        printf("Podaj bok kwadratu\n");
        scanf("%f",&a);
        a=a*a;
        printf("Pole wynosi: ");
        printf("%f",a);
        break;
    case 2:
        float b;
        printf("Podaj boki prostokąta\n");
        scanf("%f",&a);
        scanf("%f",&b);
        a=a*b;
        printf("Pole wynosi: ");
        printf("%f",a);
        break;
    case 3:
        float h;
        printf("Podaj bok i wysokość trójkąta\n");
        scanf("%f",&a);
        scanf("%f",&h);
        a=a*h/2;
        printf("Pole wynosi: ");
        printf("%f",a);
        break;
    default:
        printf("Nia ma takiej operacji");
        break;
    }

    
    return 0;
}