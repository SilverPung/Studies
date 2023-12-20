#include <stdio.h>

int main() {
    int number1,number2;
    int *wsk1=&number1;
    int *wsk2=&number2;//dodaje wzkaźniki
    printf("Podaj dwie liczby całkowite:\n");
    scanf("%d %d",wsk1,wsk2);//pobiera dane
    printf("Suma wynosi %d\n",*wsk1+*wsk2); //wyświetla sumę
}