#include <stdio.h>
int main()
{
    float number1,number2,number3,number4,mniejsze=0,większe=4;
    scanf("%f",&number1);       //wczytujemy dane
    scanf("%f",&number2);
    scanf("%f",&number3);
    scanf("%f",&number4);
    if(number1<0){      //sprawdzamy poszczególne dane
        mniejsze++;
        większe--;
    }
    if(number2<0){
        mniejsze++;
        większe--;
    }
    if(number3<0){
        mniejsze++;
        większe--;
    }
    if(number4<0){
        mniejsze++;
        większe--;
    }
    if(większe>mniejsze)    //sprawdzamy których jest więcej
        printf("większych jest więcej");
    if(większe<mniejsze)
        printf("mniejszych jest więcej");
    else{
        printf("jest ich równo");
    } 
    return 0;
}