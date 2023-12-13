#include <stdio.h>
#define STD 40
int main(){
    int number,payment,podatek;
    printf("Podaj liczbę:\n");
    scanf("%d",&number);
    if(number<=40)
    {
    payment=number*STD;
    printf("Wynagrodzenie wynosi %d zł",payment);
    }
    else{
        payment=1600;
        number-=40;
        payment+=number*60;
        printf("Wynagrodzenie wynosi %d zł",payment);
    }
    if(payment<=1200)
    {
        podatek=payment*0.15;
        printf("\nPodatek wynosi %d zł",podatek);
    }
    if (payment<=1800&&payment>1200)
    {
        podatek=180;
        podatek+=(payment-1200)*0.20;
        printf("\nPodatek wynosi %d zł",podatek);
    }
    if(payment>1800)
    {
        podatek=300;
        podatek+=(payment-1800)*0.25;
        printf("\nPodatek wynosi %d zł",podatek);
    }
    payment-=podatek;
    printf("\nWynagrodzenie Netto wynosi %d zł",payment);
    
    return 0;
}