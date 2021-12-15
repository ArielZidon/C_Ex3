#include <stdio.h>
#include "function.h"
#include <string.h>
#include <ctype.h>


void gimatria(char* word , char* copy){

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

void gimatria1(char* word, char* text){
    int i = 0;
    int j = 0;
    int p = 0;
    int k = 0;
    
    int sum = 0;
    int value = 0;

    char read [30];     
    char res [1024];

    char wordC [30];
    char textC [1024];

    gimatria(word,wordC);
    gimatria(text,textC);

    value =  Value(wordC);
 
    while(text[i])
    {
        j = i;
        clean(read);
        if(textC[i]<'a' || textC[i]>'z')
        {
            i++;
            continue;
        }

        while(sum<value)
        {
            if(textC[j]>='a' && textC[j]<='z')
            {
            sum+=(textC[j]-96);
            // printf("%d\n",sum);
            }

            read[p] = text[j];

            if(sum==value)
            {
                p++;
                read[p]='~';
                printf("%s",read);
                // strcpy(read,res+k);
                // k=arr_size(read);
                break;
            }
            j++;
            p++;
        }
        sum = 0;
        p=0;
        i++;
    }

    // printf("\n");
    // int n = arr_size(res);
    // res[n-1] = '\0';
    // printf("%s\n",res);
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



int arr_size(char* text){
    int i = 0;
    int counter = 0;

    while(text[i]){
        counter++;
        i++;
    }
    return counter;
}