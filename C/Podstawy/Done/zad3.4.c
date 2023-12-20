#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int j=0,number2=1;
    do
    {
        
        number2=(rand()%6)+1;//losuje liczbę
        
        printf("liczba to %d\n",number2);
        j++;    // wyswietlam liczbę i podwyższam  liczbę prób 
    } while(number2!=6);//powtarzam dopóki nie otrzymam "szóstki"
    printf("Udało Ci się to w %d prób",j);
    return 0;
}