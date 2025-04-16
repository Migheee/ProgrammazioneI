/*Definire la funzione ricorsiva int doppie(char *) che presa per parametro
una stringa, restituisce 1 se la stringa contiene almeno un carattere doppio
(ripetuto in posizioni consecutive, es «gatto»), 0 altrimenti.*/

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
        return 1;
    return doppie(stringa+1);
}