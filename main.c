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

    // get word
    ch = getchar();
    while (ch != ' ' && ch != '\t' && ch != '\n')
    {
        word[i++] = ch;
        ch = getchar();
    }
    
    // get text
    i = 0;
    ch = getchar();
   
    do
    {
        ch = getchar();
        text[i++] = ch;
    } while (ch != '~');

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



