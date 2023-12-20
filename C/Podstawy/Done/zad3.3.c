#include <stdio.h>
int main(){
    int i=32,j=0,number=256,number2=1;
    
    while(i<number)
    {
        printf("%c ",i);/*wyswieltam wartosci z tabeli acii od 32 do 255 choć przy
        wartości około 126 staja sie nie możliwe do wypisania*/
        if(i%16==0)
            printf("\n");//zeruje wiersz
        i++;
    } 
    return 0;
}