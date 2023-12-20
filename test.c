#include<stdio.h>
int i;
int main() {
    extern int i;
    i = 20;
    printf("%d", sizeof(i));
    return 0;
}
