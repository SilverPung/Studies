#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void sklej(char *a,char *b)
{
    int dlugosc=strlen(a);
    int dlugosc2=strlen(b);//długość drugiego ciągu znaków
    for(int i=0;i<dlugosc2;i++)
    {
        *(a+dlugosc+i-1)=*(b+i);//przepisuje drugi ciąg znaków do pierwszego
    }
    *(a+dlugosc+dlugosc2)='\0';
}
int main() {
    char lancuch[200],lancuch2[100];
    printf("Wprowadź ciąg znaków (max(100 znaków)):\n");
    fgets(lancuch, sizeof(lancuch), stdin);
    printf("Wprowadź ciąg znaków (max(100 znaków)):\n");
    fgets(lancuch2, sizeof(lancuch2), stdin);
    sklej(lancuch,lancuch2);//skleja dwa ciągi znaków
    fputs(lancuch,stdout);

    return 0;
}
