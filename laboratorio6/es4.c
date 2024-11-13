/*Scrivere un programma C che:
○ Richiede all’utente di inserire 20 numeri interi a piacere e li
salva in un array.
○ Crea e stampa un array risultato in cui:
● Ogni elemento in posizione pari (n) è uguale alla somma
degli elementi dell’array originale in posizione pari
dall’inizio fino a n.
● Ogni elemento in posizione dispari (m) è uguale alla
somma degli elementi dell’array originale in posizione
dispari dall’inizio fino a m.*/



#include <stdio.h>
#define D 10

int main(){
    int array[D];
    for(int i=0; i<D; i++){
        scanf("%d", &array[i]);
    }
    int somma = array[0];
    for(int i=2; i<D; i=i+2){
        somma=somma+array[i];
        array[i]=somma;
    }
    somma=array[1];
    for(int i=3; i<D; i=i+2){
        somma=somma+array[i];
        array[i]=somma;
    }
    for(int i=0; i<D; i++){
        printf("%3d", array[i]);
    }
    return 0;
}
