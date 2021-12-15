#include <stdio.h>
#include "gimatria.h"

int main() {
    char word[WORD];
    char text[TXT];


    scanf("%[^\n]s", word);
    getchar();
    scanf("%[^\n]s", text);


    //gimatria
    printf("Gematria Sequences:");

//example:

//     char word [] = "Head";
//     char text [] ="Head, shoulders, knees and toes,\n"
// "Knees and toes.\n"
// "Head, shoulders, knees and toes,\n"
// "Knees and toes.\n"
// "And eyes, and ears, and mouth, and nose.\n"
// "Head, shoulders, knees and toes,"
// "Knees and toes.~";

    gimatria(word, text);

// atbash


}
