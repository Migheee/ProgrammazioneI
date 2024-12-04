/*
Scrivere un programma che data una matrice int
M[D1][D2] ed un valore intero x inserito da tastiera
calcoli quante volte x occorre in M.
*/

#include <stdio.h>

#define D1 4
#define D2 3

int main(){
    int cont=0,num,matrice[D1][D2];
    for(int i=0; i<D1; i++){
        for(int j=0; j<D2; j++){
            scanf("%d", &matrice[i][j]);
        }
    }
    scanf("%d", &num);
    for(int i=0; i<D1; i++){
        for(int j=0; j<D2; j++){
            if(num==matrice[i][j])
                cont++;
        }
    }
    printf("Occorrenze di %d in matrice: %d\n", num,cont);
    return 0;
}
