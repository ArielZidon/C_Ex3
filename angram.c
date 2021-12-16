#include <stdio.h>
#include "angram.h"
#include <string.h>
#include <ctype.h>


void angram(char* word,char* text){
int i = 0;
int j = 0;
int p = 0;
int c = 0;
int state = 0;
int word_vul = 0;
word_vul = ValueAng(word);
int check = word_vul;

char wordA[WORD];
char textA[TXT];
char temp[32];
char res[1024];

strcpy(wordA,word);
strcpy(textA,text);

while(textA[i] && textA[i]!='~'){
    
    j=i;
   
    if(wordA[p]==textA[i])
    {   
        temp[c++] = textA[j++];
        shrink(wordA,p);
        p = 0;
        check--;

        while(textA[j]!='~' && p<=check)
        {
            if(textA[j]==' ')
            {
            temp[c++] = textA[j++];
            }
            
            if(wordA[p]==textA[j]){
                temp[c++] = textA[j++];
                shrink(wordA,p);
                check--;
                p = 0;
                if(check==1 && wordA[0]==textA[j])
                {   
                    temp[c] = textA[j];
                    temp[++c] = '~';
                    temp[++c] = '\0';
                    while(p<c){
                        res[state++] = temp[p++];
                    }
                    p = 0;
                    break;
                }
                continue;
            }
            p++;
        }
        p = 0;
        c = 0;
        check = word_vul;
        strcpy(wordA,word);
        i++;
        continue;
    }

    p++;
    if(wordA[p]=='\0'){
        p = 0;
        i++;
    }
}
res[state-1] ='\0';
printf("%s",res);
}



int ValueAng(char* word){

    int i = 0;

    while(word[i])
    {
        i++;
    }
    return i;
}


void shrink(char* word,int p){
    int i = 0;
    int j = 0;
    char n[WORD];
    strcpy(n,word);

    while(word[j])
    {
        if(i==p)
        {
            i++;
            continue;
        }
        word[j] = n[i];
        i++;
        j++;
    }
}