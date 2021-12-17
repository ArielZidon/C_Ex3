#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

#define WORD 30
#define TXT 1024

char* makeAtbashWord(char* word) {
     int i = 0;
     while (word[i] != '\0')
     {
         word[i] = 'z' - (word[i]) + 'a';
         i++;
     }
     return word;
 }

 int contains(char* word, char letter) {
     for (int i = 0; i < strlen(word); ++i) {
         if (word[i] == letter)
             return TRUE;
     }
     return FALSE;
}

 void atbash(char* word, char* text) {
     char copyW[WORD];
     char copyT[TXT];
     allToLower(word, copyW);
     allToLower(text, copyT);
     makeAtbashWord(copyW);
    //  printf("%s", copyW);
    //  printf("\n%s", copyT);
     int gemValue = Value(copyW);
     char ch;
     int sum = 0;
     int counter = 0;
     int i, j;
     int tilda = TRUE;

     for (i = 0; copyT[i] != '\0' ; i++)
     {
         ch = copyT[i];
         if (charValue(ch) == 0)
         {
             continue;
         }
         for (j = i; copyT[j] != '\0'; j++)
         {
             ch = copyT[j];
             if (ch != copyW[counter] && ch != copyW[strlen(word) - counter  -1])
             {
                 break;
             }
             counter++;
            //  printf("%d\n", charValue(copyT[j]));
             sum+= charValue(copyT[j]);
             if (sum >= gemValue)
             {
                 break;
             }
        }               
    
        if (sum == gemValue)
        {
            if (!tilda)
            {
                printf("~");
            }   
             for (int p = i; p <= j; p++)
            {
                printf("%c", copyT[p]);
            }
            tilda = FALSE;
        }
        sum = 0;
        counter = 0;
       
     }
 }

 int charValue(char ch) {
         if (ch >= 'a' && ch <= 'z')
         {
             return ch - 96;
         }
    return 0;
 }
    

//  void atbash(char* word, char* text) {
    

//      char copyW[WORD];
//      char copyT[TXT];
//      char foundChar[WORD];
//      static char answer[TXT];

     
//      allToLower(word, copyW);
//      allToLower(text, copyT);
     
//      makeAtbashWord(word, copyW);
//      makeAtbashWord(text, copyT);
     
//      int j = 0;
//      int i = 0;
//      while (text[i]) {
//          if (contains(word, text[i])) {
    
//              foundChar[j++] = text[i];
           
//              for (int p = i + 1; p < i + strlen(word); p++) {
//                  if (contains(word, text[p]) && !contains(foundChar, text[p]) && strlen(foundChar) < strlen(word)) {
//                         foundChar[j++] = text[p];
//                         printf("%s", foundChar);
//                      }
//                 }
//              }
          
//              if (strlen(foundChar) == strlen(word)) { // both strings have the same chars
//                  foundChar[j] = '\0';
//                  strcat(answer, "~");
//                  strcat(answer, foundChar);
//                  strcat(answer, "\0");
//              }
//              clean(foundChar);
//              i++;
//          }
         
//      }

// void atbash(char* word, char* text) {
//     char copyW[WORD];
//      char copyT[TXT];
//      char foundChar[WORD];
//     //  static char answer[TXT];

//      allToLower(word, copyW);
//      allToLower(text, copyT);

//      makeAtbashWord(word, copyW);
//      makeAtbashWord(text, copyT);
//     // printf("%s\n", copyW);
//     //  printf("%s\n", copyT);
//     int i = 0;
//     int j = 0;
//     int counter = 0;
//     while (copyT[i]) 
//     {
//         if (contains(copyW, copyT[i]))
//         {
            
//         }
        
//     //     for(int p = 0; copyW[p] != '\0' || foundChar[p] != '\0'; p++){     
//     //         if(strcmp(&copyW[p], &foundChar[p]) && 'a' < copyT[j] && copyT[j] < 'z') {      
//     //              counter++;        
//     //             }        
//     //     }
//     //     if (counter == strlen(word))
//     //    {
//     //         printf("~");
//     //          printf("%s", foundChar);
//     //         clean(foundChar);
//     //         counter = 0;
//     //     }
//     //     i++;
//     // }
// }
        

 

