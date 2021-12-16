#include <stdio.h>

#define TXT 1024
#define WORD 30

void allToLower(char* word, char* copy);

void gematria(char* word , char* text);

int Value(char* word);

void clean(char* res);

char** makeAtbashWord(char** word);

void atbash(char** word, char** text);

int contains(char** word, char* letter);

void angram(char* word , char* text);

int ValueAng(char* word);

void shrink(char* word,int p);






