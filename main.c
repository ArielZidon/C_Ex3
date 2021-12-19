#include <stdio.h>
#include "functions.h"

#define TXT 1024
#define WORD 30

int main(){

    //example:

    // char word [] = "sea";
    // char text [] = "A sailor went to sea, sea, sea To see what he could see, see, see But all that he could see, see, seeWas the bottom of the deep blue sea, sea, sea!~";

    char word[WORD];
    char text[TXT];
    int i = 0;
    char ch;

    int counter = 0;
    ch = getchar();
    while(ch!=' ' && ch!='\t' && ch!='\n'){
        word[counter] = ch;
        ch = getchar();
        counter++;
    }
    
    // get text
    i = 0;
    ch = getchar();
   
    counter = 0;
    ch = getchar();
    while(ch!='~'){
        text[counter] = ch;
        ch = getchar();
        counter++;
    }

    // gimatria
    printf("Gematria Sequences: ");
    gematria(word,text);
    printf("\n");
    
    //atbash
    printf("Atbash Sequences: ");   
    atbash(word, text);
    // // printf("%s", result);
    printf("\n");

    // angram
    printf("Anagram Sequences: ");
    angram(word,text);
    printf("\n");
}



