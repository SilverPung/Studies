
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void minint(int a,int b)
{
    if(a<b)
    {
        printf("Mniejsza liczba całkowita: %d\n",a);
        printf("Większa liczba całkowita: %d\n",b);
    }
    else
    {
        printf("Mniejsza liczba całkowita: %d\n",b);
        printf("Większa liczba całkowita: %d\n",a);
    }
}
void minfloat(float a,float b)
{
    if(a<b)
    {
        printf("Mniejsza liczba zmiennoprzecinkowa: %f\n",a);
        printf("Większa liczba zmiennoprzecinkowa: %f\n",b);
    }
    else
    {
        printf("Mniejsza liczba zmiennoprzecinkowa: %f\n",b);
        printf("Większa liczba zmiennoprzecinkowa: %f\n",a);
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int tab[10];
    float tab2[10];
    int *wsk1=tab;
    float *wsk2=tab2;//wczytuje do tablicy
    int sumint=0;
    float sumfloat=0;
    for(int i=0;i<10;i++)
    {
        *(wsk1+i)=rand()%100;
        *(wsk2+i)=(float)rand()/RAND_MAX*1;//losuje liczby chyba da sie to lepiej ale nie wiem jak
    }
    for(int i=0;i<10;i++)
    {
        sumint+=*(wsk1+i);
    }
    for(int i=0;i<10;i++)
    {
        sumfloat+=*(wsk2+i);
    }
    printf("Suma liczb całkowitych: %d\n",sumint);
    printf("Suma liczb zmiennoprzecinkowych: %f\n",sumfloat);
    minint(*(wsk1+4),*(wsk1+9));//wypisze najmniejszą i największą liczbę całkowitą
    minfloat(*(wsk2+4),*(wsk2+9));//wypisze najmniejszą i największą liczbę zmiennoprzecinkową
    
    return 0;
}

