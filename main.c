#include <stdio.h>
#include "functions.h"

#define TXT 1024
#define WORD 30

int main(){

    //example:

    // char word [] = "sheep";
    // char text [] = "Baa, baa black sheep Have you any wool Yes sir, yes sir Three bags full.~ One for my master And one for my dame And one for the little boy Who lives down the lane";

    char word[WORD];
    char text[TXT];
    int i = 0;
    char ch;

    ch = getchar();
    while(ch!=' ' && ch!='\t' && ch!='\n'){
        word[i] = ch;
        ch = getchar();
        i++;
    }
    
    // get text
    i = 0;
    ch = getchar();
    while(ch!='~'){
        text[i] = ch;
        ch = getchar();
        i++;
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
//     // printf("\n");
}



