#include <stdio.h>

int main() {
    int octet1, octet2, octet3, octet4;

    printf("Podaj IP (format: xxx.xxx.xxx.xxx): ");
    scanf("%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4);
    if(octet1<0||octet1>255||octet2<0||octet2>255||octet3<0||octet3>255||octet4<0||octet4>255)
    {//sprawdzanie poprawności ip
        printf("Niepoprawny IP");
        return 0;
    }
    if (octet1 >= 1 && octet1 <= 127) {//przypisanie klasy
        printf("Class A\n");
    } else if (octet1 >= 128 && octet1 <= 191) {
        printf("Class B\n");
    } else if (octet1 >= 192 && octet1 <= 223) {
        printf("Class C\n");
    } else if (octet1 >= 224 && octet1 <= 239) {
        printf("Class D\n");
    } else if (octet1 >= 240 && octet1 <= 255) {
        printf("Class E\n");
    } else {
        printf("Invalid IP address\n");
    }

    return 0;
}
