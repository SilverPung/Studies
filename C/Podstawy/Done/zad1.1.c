#include <stdio.h>

int main()
{
    int number=3;
    float numberfl=number;//zmienia int na float
    char numberch=number+'0';//zaminia int na char
    printf("%.1f",numberfl);//wypis z jednyk miejscem po przecinku
    printf("\n%.3f",numberfl);//wypis z trzema miejscami po przecinku
    printf("\n%c",numberch);//wypisuje char
    return 0;
}