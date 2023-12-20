#include<stdio.h>
#include<stdlib.h>
#include <string.h>
# define M_PI           3.14159265358979323846  // pi 

struct kolo{//struktura kolo
    int id;
    char nazwa[20];
    int a;
    int b;
    int r1;
};

int main(){
    struct kolo kolo1, kolo2, kolo3;
    
    kolo1.id = 1;//inicjalizacja struktury kolo1
    strcpy(kolo1.nazwa, "Kolo1");
    kolo1.a = 4;
    kolo1.b =5;
    kolo1.r1 = 4;
    
    kolo2.id = 2;//inicjalizacja struktury kolo2
    strcpy(kolo2.nazwa, "Kolo2");
    kolo2.a = 8;
    kolo2.b = 10;
    kolo2.r1 = 3;
    
    kolo3.id = 3;//inicjalizacja struktury kolo3
    strcpy(kolo3.nazwa, "Kolo3");
    kolo3.a = 1;
    kolo3.b = 2;
    kolo3.r1 = 5;
    
    printf("Podaj wspolrzedne punktu: ");//podawanie wspolrzednych punktu
    int x, y;
    scanf("%d %d", &x, &y);

    float pole;
    printf("Punkt (%d, %d) znajduje sie w kole/kołach:\n", x, y);
    if((x-kolo1.a)*(x-kolo1.a)+(y-kolo1.b)*(y-kolo1.b) <= kolo1.r1*kolo1.r1){//sprawdzanie czy punkt nalezy do kola1

        pole = M_PI * kolo1.r1 * kolo1.r1;
        printf("%s, o polu %f\n", kolo1.nazwa, pole); 
    }
    if((x-kolo2.a)*(x-kolo2.a)+(y-kolo2.b)*(y-kolo2.b) <= kolo2.r1*kolo2.r1){//sprawdzanie czy punkt nalezy do kola2
        pole = M_PI * kolo2.r1 * kolo2.r1;
        printf("%s, o polu %f", kolo2.nazwa, pole);
    }
    if((x-kolo3.a)*(x-kolo3.a)+(y-kolo3.b)*(y-kolo3.b) <= kolo3.r1*kolo3.r1){//sprawdzanie czy punkt nalezy do kola3
        pole = M_PI * kolo3.r1 * kolo3.r1;
        printf("%s, o polu %f", kolo3.nazwa, pole);
    }
    printf("\n");
    return 0;
}