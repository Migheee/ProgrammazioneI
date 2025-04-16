#include <stdio.h>
#include <string.h>

#define N 20

void scambia (char*); //oppure char s[]

int main(){
    char s[N+1];
    scanf("%s",s);
    scambia(s); //s=s[0], gli sto passando un puntatore a char
    printf("%s", s);
    return 0;
}

void scambia(char s[]){ //s è un puntatore, non un array.
    char tmp;
    int size = strlen(s);
    tmp = *(s);
    *s = *(s+(size-1));
    *(s+(size-1))=tmp;
}