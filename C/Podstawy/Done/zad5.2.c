#include <stdio.h>
int silnia_iter(int number){
    int silnia=1,i=1;
    while(i<=number){
        silnia*=i;
        i++;
    }
    return silnia;
}
int silnia_rec(int number){
    if(number>1)
        return number*silnia_rec(number-1);
    return 1;
}
int main(){

    int number,iter,rec;
    printf("Podaj liczbę: ");;
    scanf("%d",&number);
    iter=silnia_iter(number);
    printf("Silnia iter: %d\n",iter);
    rec=silnia_rec(number);
    printf("Silnia rec: %d",rec);
    return 0;
}