#include <stdio.h>

#define MAX 5

void cambia (int A[][MAX], int m, int n, int B[][MAX]);

int medio (int A[][MAX], int i, int j, int m, int n);

int main(){
    int m1[MAX][MAX], m2[MAX][MAX], i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    cambia(m1, MAX, MAX, m2);
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            printf("%3d", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}


void cambia(int A[][MAX], int m, int n, int B[][MAX]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            B[i][j]=medio(A, i, j, m, n);
        }
    }

}

int medio (int A[][MAX], int i, int j, int m, int n){
    int cont=0, medio;
    for(int h=i-1; h<i+1; h++){
        for(int k=j-1; k<j+1; k++){
            if(h>=0 && h<m && k>=0 && k<n){
                medio+=A[h][k];
                cont++;
            }
        }
    }
    return medio/cont;
}