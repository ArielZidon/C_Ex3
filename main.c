#include <stdio.h>
#include "function.h"

int main(){
    char word[WORD];
    char text[TXT];

    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);


    //gimatria
<<<<<<< HEAD
    gimatria1(word,text);

}

=======
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
>>>>>>> 5b50864bc081a1b77c33296bd00f41337c09fbae
