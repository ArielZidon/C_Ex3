#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

#define WORD 30
#define TXT 1024

 void makeAtbashWord(char* word, char* atbashWord) {
     int i = 0;
     while (word[i] && i != strlen(word))
     {
         atbashWord[i] = 'z' - (word[i]) + 'a';
         i++;
     }
 }

 int contains(char* word, char* letter) {
     for (int i = 0; i < strlen(word); ++i) {
         if (strcmp(&word[i], letter) == 0)
             return TRUE;
     }
     return FALSE;
}

//  void atbash(char* word, char* text) {
    //  printf("enter");

    //  char copyW[WORD];
    //  char copyT[TXT];
    //  char foundChar[WORD];
    //  static char answer[TXT];

    //  printf("declear");
    //  allToLower(word, copyW);
    //  allToLower(text, copyT);
    //  printf("lower");
    //  makeAtbashWord(word, copyW);
    //  makeAtbashWord(text, copyT);
    //  printf("makeatbash");
    //  int j = 0;
    //  int i = 0;
    //  while (text[i]) {
    //      if (contains(word, &text[i])) {
    //          printf("contains");
    //          foundChar[j++] = text[i];
    //          for (int p = i + 1; p < i + strlen(word); p++) {
    //              if (contains(word, &text[p]) && !contains(foundChar, &text[p]) && strlen(foundChar) < strlen(word)) {
    //                  if (text[p] != ' ')
    //                  {
    //                     foundChar[j++] = text[p];
    //                  }
    //          }
    //          }
    //          printf("for");
    //          if (strlen(foundChar) == strlen(word)) { // both strings have the same chars
    //              foundChar[j] = '\0';
    //              strcat(answer, "~");
    //              strcat(answer, foundChar);
    //              strcat(answer, "\0");
    //          }
    //          clean(foundChar);
    //      }
    //  }
    //  printf("%s" ,answer);
//  }

void atbash(char* word, char* text) {
    char copyW[WORD];
     char copyT[TXT];
     char foundChar[WORD];
    //  static char answer[TXT];

     allToLower(word, copyW);
     allToLower(text, copyT);

     makeAtbashWord(word, copyW);
     makeAtbashWord(text, copyT);
    // printf("%s\n", copyW);
    //  printf("%s\n", copyT);
    int i = 0;
    int j = 0;
    int counter = 0;
    while (copyT[i]) 
    {
        for(int p = 0; copyW[p] != '\0' || foundChar[p] != '\0'; p++){     
            if(strcmp(&copyW[p], &foundChar[p]) && 'a' < copyT[j] && copyT[j] < 'z') {      
                 counter++;        
                }        
        }
        if (counter == strlen(word))
       {
            printf("~");
             printf("%s", foundChar);
            clean(foundChar);
            counter = 0;
        }
        i++;
    }
}
        

 

