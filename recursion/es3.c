/*
Definire la funzione ricorsiva int palindroma(char *, int, int) che
ricevuta in ingresso una stringa, la posizione del primo carattere valido
nella stringa (di solito 0 nella chiamata nel main) e la sua lunghezza,
restituisce 1 se la stringa passata come parametro è palindroma, 0
altrimenti.
*/

#include <stdio.h>
#include <string.h>

int len(char *s);

int palindroma(char *, int, int);

int main(){
    char stringa[30];
    scanf("%s", stringa);
    printf("%d", palindroma(stringa, 0, strlen(stringa)));
    return 0;
}

int palindroma(char * stringa, int pos, int length){
    if(stringa[pos]!=stringa[length-1])
        return 0;
    if(pos>=length)
        return 1;
    return palindroma(stringa,pos+1, length-1 );
}

int len(char *s){
    if(*s=='\0')
        return 0;
    return 1 + len(s+1);
}