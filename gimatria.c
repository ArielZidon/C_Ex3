#include <stdio.h>
#include "gimatria.h"
#include <string.h>
#include <ctype.h>


void allToLitel(char* word , char* copy){

    int i = 0;
    strcpy(copy,word);


    while(copy[i]){
        if(copy[i]>='A' && copy[i]<='Z')
        {
        copy[i]=copy[i]+32;
        }
        i++;
    }
    
}

void gimatria(char* word, char* text){
    int i = 0;
    int j = 0;
    int p = 0;
    int k = 0;
    int c = 0;
    
    int sum = 0;
    int value = 0;

    char read [100];     
    char res [1024];

    char wordC [30];
    char textC [1024];

    allToLitel(word,wordC);
    allToLitel(text,textC);

    value =  Value(wordC);
 
    while(text[i] && text[i]!='~')
    {
        j = i;

        clean(read);

        if(textC[i]<'a' || textC[i]>'z')
        {
            i++;
            continue;
        }

        while(sum<value && text[j]!='~')
        {
            if(textC[j]>='a' && textC[j]<='z')
            {
            sum+=(textC[j]-96);
            }

            read[p] = text[j];

            if(sum==value)
            {   
                read[++p]='~';
                read[++p]='\0';
                while(c<p){
                    res[k++] = read[c++];
                }
                res[k] = read[c];
                c = 0;
                break;
            }
            j++;
            p++;
        }
        sum = 0;
        p=0;
        i++;
    }
    res[k-1] = '\0';
    printf("%s",res);
}


int Value(char* word){
    int i = 0;
    int sum = 0;

    while(word[i] && word[i] != '~'){
        if(word[i]>='a' && word[i]<='z')
        {
        sum+=(word[i]-96);
        }
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

    }


