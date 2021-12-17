#include <stdio.h>
#include "functions.h"

#define TXT 1024
#define WORD 30

int main(){

    //example:

    char word [] = "abcd";
    char text [] ="a-bc,dbca-zwxyzabzyxw0dcba~";


//     char word[];
//     char text[];
//
//
//     scanf("%[^\n]s" , word);
//     getchar();
//     scanf("%[^\n]s" , text);


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



