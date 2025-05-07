/*
Matrice dinamica
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int  r,c ;
    int *p;
    //CASO 1: Matrice come array linearizzato

    scanf("%d %d",&r,&c);
    p=(int*)malloc(r*c*sizeof(int));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&p[i*c+j]); //perche viene trattato come array, ogni i riga avrà c valori
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d", p[i*c+j]);
        }
        printf("\n");
    }

    //CASO 2: come gestire la variabile come una matrice
    int **q;
    scanf("%d %d", &r, &c);
    q=(int**)malloc(r*sizeof(int*));
    for(int i=0; i<r; i++){
        q[i]=(int*)malloc(c*sizeof(int));
    }
    //da ora in poi posso trattare come una matrice standard

    //per casa, dato un array letto da tastiera di 10 int, creare l'array dinamico che contiene i valori dell'array senza ripetizioni
}