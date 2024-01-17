#include<stdio.h>
#include<stdlib.h>
int*init_table(int el,int value)
{
    int*pt;
    int i;
    pt=(int*)malloc(el*sizeof(int));//alokacja pamieci
    if(pt)
    {
        for(i=0;i<el;i++)
        pt[i]=value;//przypisywanie wartosci
    }
    return pt;
}
void show_table(const int tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",tab[i]);//wypisywanie tablicy
        if(i<n-1)
            printf(" : ");
    }
    printf("\n");
}

int main(void) 
{
    int*pt;
    int size;
    int value;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d",&size);
    while(size>0)
    {
        printf("Podaj wartosc:");
        scanf("%d",&value);//pobieranie wartosci
        pt=init_table(size,value);
        if(pt){
            show_table(pt,size);
            free(pt);
            }
        printf("Podaj liczbe elementow (<1-koniec):");//pobieranie ilosci elementow
        scanf("%d",&size);
    }
    printf("Dziekuje za uwage.\n");
    return 0;
}