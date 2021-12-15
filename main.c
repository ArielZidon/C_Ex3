#include <stdio.h>
#include "function.h"

int main(){
    char word[WORD];
    char text[TXT];

    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);


    //gimatria
    gematria(word,text);

   //atbash

}

void toLowerCase(char* word){

    int i = 0;

    while(word[i]){
        word[i]=tolower(word[i]);
        i++;
    }
    
}