/*Scrivere un programma in C che chiede all’utente un
carattere dell’alfabeto minuscolo (assumere non ci siano
errori in inserimento). Il programma calcola e visualizza il
corrispondente carattere maiuscolo.*/

#include <stdio.h>

int main(){
    char c,v;
    printf("Inserisci carattere: ");
    scanf(" %c", &c);
    printf("Carattere %c \n", c);
    printf("Inserisci carattere: ");
    scanf(" %c",&v);
    printf("Carattere %c \n", c);
    return 0;
}
