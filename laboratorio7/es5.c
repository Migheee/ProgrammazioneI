/*
Scrivere un programma che memorizza tutte le
righe di una matrice di interi 4x6 in un unico
array di interi lungo 24.
*/

#define R 4
#define C 6
#include <stdio.h>

int main(){
    int matrice[R][C], array[R*C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &matrice[i][j]);
            array[(C*i)+j]=matrice[i][j];
        }
    }
    printf("ARRAY: ");
    for(int i=0; i<R*C; i++){
        printf("%3d", array[i]);
    }
    return 0;
}
