#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

 char** makeAtbashWord(char** word) {
     char** atbashWord = malloc(strlen(*word) * sizeof(char*));
     int i = 0;
     while (word[i])
     {
         atbashWord[i] = 122 - *(word[i]) + 97;
         i++;
     }
     return atbashWord;
 }

 int contains(char** word, char* letter) {
     for (int i = 0; i < ; ++i) {
         if (strcmp(word[i], letter) == 0)
             return TRUE;
     }
     return FALSE;
}

 char[] atbash(char word[], char text[]) {

     char copyW[];
     char copyT[];
     char** foundChar;
     char answer[];

     allToLower(word, copyW);
     allToLower(text, copyT);

     copyW = makeAtbashWord(&word);
     copyT = makeAtbashWord(&text);

     int j = 0;
     while (text[i]) {
         if (contains(word, text[i])) {
             foundChar[j++] = text[i];
             for (int p = i + 1; p < i + strlen(word); p++) {
                 if (contains(&word, &text[p]) && !contains(foundChar, &text[p]) && strlen(*foundChar) < strlen(word))
                     foundChar[j++] = &text[p];
             }
             if (strlen(*foundChar) == strlen(word)) { // both strings have the same chars
                 foundChar[j] = "\0";
                 strcat(answer, '~');
                 strcat(answer, foundChar);
                 strcat(answer, "\0");
             }
             clean(*foundChar);
         }
     }
     return answer;
 }

