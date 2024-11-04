/*
Scrivere un programma che dato un array di interi >0 (sicuramente è così,
non serve correggere errori) inizializzato in fase di dichiarazione e che
finisce con il valore sentinella -1 (dichiarato come costante simbolica STOP),
verificare se l’array è in ordine:
1. Crescente
2. Decrescente
3. Nessun ordine
e stampare un opportuno messaggio. Ad esempio l’array int values[] = {7,
4, 5, 4, 2, STOP}; non è in nessun ordine, l’array int values[] = {7, 5, 3, 2, 1,
STOP}; è in ordine decrescente, mentre l’array int values[] = {1, 3, 4, 7, 9,
STOP}; è in ordine crescente.
*/

#include <stdio.h>
#define D 5

int main(){
    int values[] = {7, 5, 3, 2, 1}, is_crescente = 1, is_decrescente=1, pos=0;
    while((is_crescente || is_decrescente) && pos < D - 1){
        if(values[pos] < values[pos+1])
            is_decrescente = 0;
        if(values[pos] > values[pos+1])
            is_crescente = 0;
        pos++;
    }
    if(is_crescente)
        printf("crescente\n");
    else if(is_decrescente)
        printf("decrescente\n");
    else
        printf("no ordine\n")
    return 0;
}

