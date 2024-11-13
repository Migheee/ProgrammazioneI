/*Scrivere un programma che dato un array di
interi (lungo 10) con i valori inseriti da tastiera
determina quanti massimi locali ci sono nell’array
stampando il risultato.
○ Dato l’array int A[10]; A[i] è detto massimo locale
se uno dei seguenti casi è verificato
1. i=0 e A[0]>A[1]
2. i=9 e A[8]<A[9]
3. 0<i<9 e A[i-1]<A[i]<A[i+1]*/

#define D 10
#include <stdio.h>

int main(){
    int array[D], cont ;
    for(int i=0; i<D;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<D; i++){
        if((i==0 && array[0]>array[i]) || (i==D-1 && array[D-2] < array[D]) || (array[i-1] < array[i] && array[i] < array[i+1] ))
            cont++;
    }
    printf("Il numero di massimi locali è: %d\n",cont);
    return 0;
}
