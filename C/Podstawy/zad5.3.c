#include <stdio.h>
int temp;
char chr[100];
void dec_to_bin(int number)
{   
    temp=0;  
    while(number>0)
    {
        chr[temp]=number%2+'0';
        number/=2;
        temp+=1;
    }
}
int input()
{
    int number;
    printf("Podaj liczbę:");
    scanf("%d",&number);//jak przeszedł przez scanf to juz wiemy że to int więc nie ma co sprawdzać
    return number;
}
int main()
{   int temp=0;
    temp=input();
    dec_to_bin(temp);   
    while(temp>=0)
    {
        printf("%c",chr[temp]);
        temp--;
    }
    return 0;
}
