/*Scrivere un programma che chiede all’utente di
inserire due sequenze di 5 numeri ciascuna
(salvandole in 2 array). Il programma stampa a
video se la seconda sequenza èuna permutazione
della prima. */


#define D 5
#include <stdio.h>

int main(){
    int is_permutazione;
    int contv2;
    int contv1;
    int v1[D];
    int v2[D];
    for(int i=0; i<D; i++){
        scanf("%d",&v1[i]);
    }
    for(int i=0; i<D; i++){
        scanf("%d",&v2[i]);
    }
    is_permutazione=1;
    for(int i=0; i<D && is_permutazione; i++){
        contv1=0;
        contv2=0;
        for(int a=0; a<D; a++){
            if(v1[i]==v1[a])
                contv1++;
        }
        for(int a=0; a<D; a++){
            if(v1[i]==v2[a])
                contv2++;
        }
        if(contv1!=contv2)
            is_permutazione=0;
    }
    printf("%s\n", is_permutazione ? "si" : "no");
    return 0;
}
