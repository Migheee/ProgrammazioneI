/*
Scrivere due sottoprogrammi maxr e maxc che
prendono in ingresso una matrice 3X3 di interi e
restituiscono rispettivamente al chiamante l’indice
della riga/colonna in cui la somma di tutti gli elementi
è massima.
*/

#include <stdio.h>

#define N 3

int maxc(int a[][N], int r, int c);
int maxr(int a[][N], int r, int c);

int main(){
    int a[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int riga= maxr(a, N, N);
    int colonna = maxc(a, N, N);
    printf("riga %d\ncolonna %d\n", riga, colonna);
    return 0;
}

int maxc(int a[][N], int m, int n){
    int colonna=0, somma, sommamax=0;
    for(int i=0; i<n; i++ ){
        sommamax+=a[i][0];
    }
    printf("%d\n", sommamax);
    for(int i=0; i<n; i++){
        somma=0;
        for(int j=0; j<m; j++){
            somma+=a[j][i];
        }
        if(somma>sommamax){
            sommamax=somma;
            colonna=i;
        }
    }
    return colonna;
}


int maxr(int a[][N], int m, int n){
    int riga=0, somma, sommamax=0;
    for(int i=0; i<n; i++ ){
        sommamax+=a[0][i];
    }
    printf("%d\n", sommamax);
    for(int i=0; i<n; i++){
        somma=0;
        for(int j=0; j<m; j++){
            somma+=a[i][j];
        }
        if(somma>sommamax){
            sommamax=somma;
            riga=i;
        }
    }
    return riga;
}
