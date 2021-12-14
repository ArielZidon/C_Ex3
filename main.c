#include <stdio.h>
#include "function.h"

int main(){
    char word[WORD];
    char text[TXT];

    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);

    //gimatria
    char word1[30];
    char text1[1024];
    gimatria(word,word1);
    gimatria(text,text1);
   
    // test to see if i can push to git
    

    printf("%s",word1);
    printf("%s",text1);
    
}