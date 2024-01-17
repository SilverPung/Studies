#include <stdio.h>

struct DataCzas { 
    unsigned int dzien : 5; //przydzielywanie bitow
    unsigned int miesiac : 4;
    unsigned int godziny : 5;
    unsigned int minuty : 6;
};
struct DataCzas2 {
    unsigned int dzien; //bez przydzielywania bitow
    unsigned int miesiac;
    unsigned int godziny;
    unsigned int minuty; 
};


int main() {
    struct DataCzas dataCzas;

    dataCzas.dzien = 10;//przypisywanie wartosci
    dataCzas.miesiac = 8;
    dataCzas.godziny = 12;
    dataCzas.minuty = 30;

    printf(" %d/%d // %d:%d \n", dataCzas.dzien, dataCzas.miesiac, dataCzas.godziny, dataCzas.minuty);
    printf("Rozmiar struktury DataCzas: %d bajtów\n", sizeof(struct DataCzas));//wypisywanie rozmiaru struktury
    
    struct DataCzas2 dataCzas2;
    dataCzas2.dzien = 10;//przypisywanie wartosci
    dataCzas2.miesiac = 8;
    dataCzas2.godziny = 12;
    dataCzas2.minuty = 30;
    
    printf(" %d/%d // %d:%d \n", dataCzas2.dzien, dataCzas2.miesiac, dataCzas2.godziny, dataCzas2.minuty);
    printf("Rozmiar struktury DataCzas2: %d bajtów\n", sizeof(struct DataCzas2));//wypisywanie rozmiaru struktury
    
    return 0;
}
