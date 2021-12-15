#include <stdio.h>
#include "function.h"
#include <ctype.h>

int main(){

    char word[WORD];
    char text[TXT];
    char ch;
    int i = 0;

    // scan to word
    do {
        ch = getchar();
        if (ch != '\n' | ch != '\t')
        {
            word[i++] = ch;
        }
        
    } while (ch != '\n' | ch != '\t');
    printf("word");
    // scan to text
    i = 0;
    do
    {
        ch = getchar();
        if (ch != '~')
        {
            text[i++] = ch;
        }
        
    } while (ch != '~');
     
    // scanf("%[^\n]s" , word);
    // getchar();
    // scanf("%[^\n]s" , text);


    //gimatria
    gematria(word,text);

   //atbash

}

void toLowerCase(char* word){

    int i = 0;

    while(word[i]){
        tolower(word[i]);
        i++;
    }
    
}