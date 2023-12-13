#include <stdio.h>
int main(){
    int i=1,j=0,number,number2=1;
    printf("Podaj liczbę max:\n");
    scanf("%d",&number);//wczytuje max
    while(i<=number)
    {
        if(i%2!=0)
        {
            printf("%d",i);//wypisuje liczby
            printf(" ");
        }
        i++;
    } 
    return 0;
}