#include <stdio.h>
#define SPACE ' '
int main(){
    int word=1,letter=0;
    char ch;
    ch =getchar();
    while(ch!= '\n')
    {
        if(ch==SPACE)
        {
            putchar(ch);
            word+=1;
        }
        else
        {
            putchar(ch);
            letter+=1;
        }
        ch=getchar();

    }
    printf("\n zdanie ma %d słów i %d liter",word,letter);
    return 0;
}
