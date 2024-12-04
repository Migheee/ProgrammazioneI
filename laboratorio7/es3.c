/*
Scrivere un programma che data una matrice
M[D1][D2] di char (fare l'inserimento in fase di
inizializzazione) trasforma il primo carattere di ogni
riga nel corrispondente maiuscolo (se si tratta di una
lettera minuscola).
*/


#include <stdio.h>

#define D1 4
#define D2 3

int main(){
    char matrice[D1][D2];
    for(int i=0; i<D1; i++){
        for(int j=0; j<D2; j++){
            scanf(" %c", &matrice[i][j]);
        }
        if(matrice[i][0]>='a' && matrice[i][0]<='z')
            matrice[i][0]=matrice[i][0]-'a'+'A';
    }
    
    for(int i=0; i<D1; i++){
        for(int j=0; j<D2; j++){
            printf("%3c", matrice[i][j]);
        }
        printf("\n");
    }
    return 0;
}
