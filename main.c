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

// One, two, three, four, five, Once I caught a fish alive, Six, seven, eight, nine, ten, Then I let go again.~

// Gematria Sequences: hree, f~fou~five~ve,
// O~e,
// Once~ce I cau~ght a f~fish~ht, n~nine~n,
// Th~t go

   //atbash



// void toLowerCase(char* word){

//     int i = 0;

//     while(word[i]){
//         word[i]=tolower(word[i]);
//         i++;
//     }
    
// }
}