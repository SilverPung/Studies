#include <stdio.h>
float iter,rec;
float silnia_iter(float number){
    float silnia=1,i=1;
    while(i<=number){
        silnia*=i;
        i++;
    }
    return silnia;
}
float silnia_rec(float number){
    if(number>1)
        return number*silnia_rec(number-1);
    return 1;
}
int main(){

    float number;
    printf("Podaj liczbę: ");;
    scanf("%f",&number);
    iter=silnia_iter(number);
    printf("Silnia iter: %f\n",iter);
    rec=silnia_rec(number);
    printf("Silnia rec: %f",rec);
    return 0;
}