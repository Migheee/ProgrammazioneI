/*Scrivere una funzione ricerca che dato un array di int da cercare restituisca l'indice dove compare l'elemento nell'array. -1 se non presente*/

int ricerca(int *a, int dim, int num){
    int i;
    for(i=0; i<dim; i++){
        if(a[i]==num)
            return i;
    }
    return -1;
}

/*RICERCA BINARIA-----> RICORSIVA MA SI APPLICA AD ARRAY ORDINATI. */

#include <stdio.h>

int ricercabin(int vet[], int first, int last, int tofind){
    if(first>last)
        return -1;
    int med = (first + last)/2;
    if(tofind==vet[med])
        return med;
    if(tofind > vet[med])
        return ricercabin(vet, med+1, last, tofind);
    return ricercabin(vet, first, med-1, tofind);
    
}
