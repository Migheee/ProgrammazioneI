/*
Scrivere un programma che data una matrice
quadrata int M[D][D] calcoli la sua trasposta int
N[D][D].
 NB: N è la trasposta di M se N[i][j]=M[j][i] per
ogni j∈[0,D-1] e i∈[0,D-1] 
*/

#include <stdio.h>
#define D 4

int main(){
    int temp;
    int matrice[D][D];
    for(int i=0; i<D; i++){
        for(int j=0; j<D; j++){
            scanf("%d", &matrice[i][j]);
        }
    }
    
    for(int i=0; i<D; i++){
        for(int j=i+1; j<D; j++){
            temp=matrice[i][j];
            matrice[i][j]=matrice[j][i];
            matrice[j][i]=temp;
        }
    }
    for(int i=0; i<D; i++){
        for(int j=0; j<D; j++){
            printf("%3d", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
