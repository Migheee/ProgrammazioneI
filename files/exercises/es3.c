/*
Scrivere un programma C che chiede all’utente una sequenza
di numeri a priori illimitata e che termina con l’inserimento
del numero 0 – non fa parte della sequenza. Il programma
deve salvare i numeri (0 escluso) in un file di nome valori.txt
e come ultimo valore deve scrivere nel file quanti numeri
sono stati salvati. Ad esempio se l’utente inserisce 5 2 4 0
nel file nel file valori.txt troveremo 5 2 4 3.
*/

#include <stdio.h>

int main(){
    FILE *fo;
    int num, cont=0;
    fo=fopen("out.txt", "w");
    if(fo!=NULL){
        scanf("%d", &num);
        while(num!=0){
            cont++;
            fprintf(fo, "%d ", num);
            scanf("%d", &num);
        }
        fprintf(fo, "%d ", cont);
    }
    else printf("Errore scrittura file");
    return 0;
}