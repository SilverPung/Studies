#include <stdio.h>
int main() {
   int tab[10];
    int *wsk = tab;
    printf("Podaj 10 liczb całkowitych:\n");
    for (int i = 0; i < 10; i++) {//wczytuje do tablicy
        scanf("%d", &tab[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(*(wsk+i)<*(wsk+j))
            {
                int temp=*(wsk+i);
                *(wsk+i)=*(wsk+j);//chyba to jest sortowanie bąbelkowe ale nie jestem pewien
                *(wsk+j)=temp;
            }
        }
    }
    printf("Wartości w tablicy:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(wsk+i));//wychodzi od najmniejszej
    }
    return 0;
}