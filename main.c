#include <stdio.h>
#include "gimatria.h"
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


    char word[WORD];
    char text[TXT];


    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);


    //gimatria
    printf("Gematria Sequences:"); 
    gimatria(word,text);
    



   //atbash

// void toLowerCase(char* word){

//     int i = 0;

//     while(word[i]){
//         word[i]=tolower(word[i]);
//         i++;
//     }
    
// }


    //angram
    printf("Anagram Sequences: ");
    angram(word,text);




}