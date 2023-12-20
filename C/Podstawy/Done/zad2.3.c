
#include <stdio.h>
int main()
{
    int y,x;
    scanf("%d",&y);       //wczytujemy dane
    x=(y<0) ? (-y):y;            //sprawdzamy czy jest mniejsze od 0
                            //podmieniamy
    printf("%d",x);
    return 0;
}