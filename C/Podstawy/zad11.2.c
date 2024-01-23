#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char word[22];
    printf("Podaj słowo o długości od 3 do 10 liter: ");
    scanf("%s", word);
        
    int length = strlen(word);
    if(length < 3 || length > 10){
         printf("Niepoprawna długość słowa!\n");
        return 1;
    }
    if(length<6)
        strcat(word, word);
    
    word[0] = toupper(word[0]);
    word[length-1] = tolower(word[length-1]);//zmirnianie pierwszej i ostatnije litery
    
    char znak[] = "!";
    strcat(znak, word);
    
    for(int i = 0; i < strlen(znak)-1; i++){
        if(znak[i] == 'a')
            znak[i] = '4';
        if(znak[i] == 's')
            znak[i] = '$';
        if(znak[i] == 'o')
            znak[i] = '@';
    }//podmiana zanków
    int count=0;
    for (int i = 0; i < strlen(znak); i++) {
            if (islower(znak[i])) {
                count++;
                //printf("%c",znak[i]);
                //printf("%d",count);
            }
        } //wylicznie małych liter     
    printf("%s%d",znak,count);     
    return 0;
    
}

