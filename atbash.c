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
         printf("make");
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
    int gimValue = Value(word);
    char copyW[WORD];
     char copyT[TXT];
     char foundChar[WORD];
    //  static char answer[TXT];

     allToLower(word, copyW);
     allToLower(text, copyT);
     printf("%s\n", copyW);
     printf("%s\n", copyT);
     makeAtbashWord(word, copyW);
     makeAtbashWord(text, copyT);
    // printf("%s\n", copyW);
    //  printf("%s\n", copyT);
    int sum = 0;
    int i = 0;
    int j = 0;
    while (i < strlen(text)) 
    {
        sum += copyT[i];
        if (sum == gimValue)
        {
            if (copyT[j] != ' ')
            {
                if (contains(copyW, &copyT[i]) && !contains(foundChar, &copyT[i]))
                {
                    foundChar[j] = copyT[i];
                    // printf("%d\n", foundChar[j]);
                    // printf("%d\n", copyT[i]);
                }
                j++;
            }
        }
        if (strlen(foundChar) == strlen(copyW))
        {
            // printf("%s", "~");
            // printf("%s", foundChar);
            j = 0;
            sum = 0;
        }
        i++;
    }
}
 

