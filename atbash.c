#include <stdio.h>
#include "function.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char** makeAtbashWord(char** word) {
    char** atbashWord = malloc(strlen(word) * sizeof(char*));
    int i = 0;
    while (word[i])
    {
        atbashWord[i] = 122 - *(word[i]) + 97;
        i++;
    }
    return atbashWord;
}



