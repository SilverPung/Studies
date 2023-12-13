#include <stdio.h>
int main(){
    int i=0,j=0,number,number2=1;
    printf("Podaj liczbę wersów:\n");
    scanf("%d",&number);//wczytuje licznbe wersów
    while(i<number)
    {
        j=0;
        while(j<=i)
        {
            printf("%d",number2);
            printf("  ");//wyświetlam liczby w wersie i
            number2++;
            j++;
        }
        printf("\n");
        i++;//zwiększam wers
    } 
    return 0;
}