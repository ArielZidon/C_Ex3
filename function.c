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
    int finel = 0;
    
    int i = 0;
    int j = 0;
    int p = 0;
    int k = 0;
    
    int sum = 0;
    int value = 0;

    char read [30];
    char res [1024];

    char wordC [31];
    char textC [1024];
    gimatria(word,wordC);
    gimatria(text,textC);
    value =  Value(wordC);

    
    while(text[i]!='~')
    {

        j = i;
        
        if((textC[i]<'a' || textC[i]>'z') && textC[i]==textC[j])
        {
            i++;
            continue;
        }
        
        while(textC[j]!='~')
        {

            if(textC[j]>='a' && textC[j]<='z')
            {
            sum+=textC[j];
            }

            read[p] = text[j];

            if(sum>value)
            {
                clean(read);
                break;
            }

            if(sum==value)
            {
                p++;
                read[p]='~';
                strcpy(res+k,read);
                k+=arr_size(read);
                clean(read);
                break;
            }

            j++;
            p++;
        }
        sum = 0;
        p=0;
        i++;
    }
    int n = arr_size(res);
    res[n-1] = '\0';
    printf("%s\n",res);
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

void clean(char* read){
    int i = 0;
    while(read[i]){
        read[i] = '\0';
        i++;
    }
    read[0] = '\n';
}

int arr_size(char* text){
    int i = 0;
    int counter = 0;

    while(text[i]){
        counter++;
        i++;
    }
    return counter;
}