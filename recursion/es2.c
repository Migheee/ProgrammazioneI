/*Definire la funzione ricorsiva int contadoppie(char *) che presa per
parametro una stringa, restituisce quante coppie di doppie la stringa
contiene, es. «ammiccare» ne contiene 2.*/

#include <stdio.h>

#define N 30

int doppie(char *);

int main(){
    char stringa[N+1];
    scanf("%s", stringa);
    printf("%d\n", doppie(stringa));
    return 0;
}

int doppie(char * stringa){
    if(*stringa == '\0')
        return 0;
    if(*stringa==*(stringa+1))
        return 1 + doppie(stringa+1);
    return 0 + doppie(stringa+1);
}