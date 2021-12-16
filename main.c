#include <stdio.h>
#include "functions.h"
#include "angram.h"

int main(){

    //example:

//     char word [] = "Head";
//     char text [] ="Head, shoulders, knees and toes,\n"
// "Knees and toes.\n"
// "Head, shoulders, knees and toes,\n"
// "Knees and toes.\n"
// "And eyes, and ears, and mouth, and nose.\n"
// "Head, shoulders, knees and toes,"
// "Knees and toes.~";


    char word[];
    char text[];


    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);


    //gimatria
    printf("Gematria Sequences: ");
    gematria(word,text);
    printf("\n");
    



   //atbash
    printf("Atbash Sequences: ");
    printf("%s", atbash(word, text));


    //angram
    printf("Anagram Sequences: ");
    angram(word,text);




}



