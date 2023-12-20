#include<stdio.h>
#include<string.h>
void skracaj(char tab[], int n) {
    int length = strlen(tab);
    while(n>0){
        tab[length-n]='\0';//zamienia ostatni znak na null
        n--;
    }
}
int main(){
    char tab[100];
    puts("Wproadz zdanie:(max(100 znaków))");
    fgets(tab,100,stdin);//wczytuje do tablicy
    puts("O ile skrócić?");
    int dlugosc;
    scanf("%d",&dlugosc);//trzeba korzystac by wcyztać int nie str
    skracaj(tab,dlugosc+1);
    fputs(tab,stdout);
    return 0;


}