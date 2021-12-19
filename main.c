#include <stdio.h>
#include "functions.h"

#define TXT 1024
#define WORD 30

int main(){

    //example:

    // char word [] = "abcd";
    // char text [] ="a-bc,dbca-zwxyzabzyxw0dcba~";

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



