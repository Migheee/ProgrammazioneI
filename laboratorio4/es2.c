/*
Scrivere un programma che data una sequenza di numeri
positivi che termina con -1 (sentinella, non fa parte della
sequenza) stampa a video la media dei valori e quanti
numeri sono stati inseriti (sentinella esclusa).
*/

#include <stdio.h>

int main(){
    int numero, somma=0, cont=0;
    float media;
    do{
        printf("Inserire numero: ");
        scanf("%d", &numero);
    }while(numero<0);
    while(numero!=-1){
        cont++;
        somma = somma + numero;
        do{
            printf("Inserire numero: ");
            scanf("%d", &numero);
        }while(numero < 0 && numero !=-1);
    }
    media = (float) somma/cont;
    printf("media: %f\n", media);
    printf("cont: %d\n", cont);
    return 0;
}
