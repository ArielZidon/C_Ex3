#include <stdio.h>
#include "function.h"

int main(){
    char word[WORD];
    char text[TXT];

    scanf("%[^\n]s" , word);
    getchar();
    scanf("%[^\n]s" , text);


    //gimatria
    gimatria1(word,text);

// A sailor went to sea, sea, sea To see what he could see, see, see But all that he could see, see, see Was the bottom of the deep blue sea, sea, sea!~

   //atbash



// void toLowerCase(char* word){

//     int i = 0;

//     while(word[i]){
//         word[i]=tolower(word[i]);
//         i++;
//     }
    
// }
}