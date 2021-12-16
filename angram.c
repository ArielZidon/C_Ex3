#include <stdio.h>
#include "angram.h"
#include <string.h>
#include <ctype.h>


void angram(char* word,char* text){
int i = 0;
int j = 0;
int p = 0;
int c = 0;
int f = 0;
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
        temp[c] = textA[j];
        shrink(wordA,p);
        p = 0;
        check--;
        c++;
        j++;
       
        while(textA[j]!='~' && p<=check)
        {
            if(textA[j]==' ')
            {
            temp[c] = textA[j];
            c++;
            j++;
            }
            
            if(wordA[p]==textA[j]){
                temp[c] = textA[j];
                shrink(wordA,p);
                check--;
                p = 0;
                j++;
                c++;
                
                if(check==1 && wordA[0]==textA[j])
                {  
                    temp[c] = textA[j];
                    temp[word_vul] = '~';
                    temp[word_vul+1] = '\0';
                    printf("%s",temp);
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