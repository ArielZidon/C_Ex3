#include <stdio.h>
#include "function.h"
#include <string.h>
#include <ctype.h>

void gimatria(char* word , char* copy){

    strcpy(copy,word);
    int i = 0;

    while(copy[i]){
        copy[i]=tolower(copy[i]);
        i++;
    }
    
}

void gimatria1(char* word, char* text){
    int i = 0;
    int j = 0;
    int p = 0;
    int k = 0;
    int sum = 0;
    int  value = 0;

    char read [31];
    char res [1024];

    char wordC [31];
    char textC [1024];
    gimatria(word,wordC);
    gimatria(text,textC);
    value =  Value(wordC);


    while(textC[i]!='~'){

        if((textC[i]<'a' || textC[i]>'z') && text[i]==text[j]){
            continue;
        }

        while(text[j]!='~'){

            if(textC[j]>='a' && textC[j]<='z'){
            sum+=textC[j];
            }

            if(sum>value){
                sum = 0;
                break;
            }

            if(sum==value){
                sum = 0;
                read[p]='~';
                strcpy(res+k,read);
                k = p;
                break;
            }

            read[p] = text[j];
            j++;
            p++;
        }

        
    }
}


int Value(char* word){
    int i = 0;
    int sum = 0;

    while(word[i]){
        sum+=word[i];
        i++;
    }

    return sum;
}



void clean(char* res){
    int i = 0;
    while(res[i]){
        res[i] = '0';
        i++;
    }
}