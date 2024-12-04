/*Scrivere un programma che:
o Legge da tastiera una matrice 4X4 di interi
o La stampa a video
o Conta quanti numeri dispari ci sono in tutta la matrice
o Conta quanti numeri primi ci sono in ogni riga della
matrice
*/

#include <stdio.h>
#define D 4

int is_primo(int num){
    if(num==1)
        return 0;
    else{
        int primo=1;
        for(int i=2; i<=num/2 && primo; i++){
            if(num%i==0)
                primo=0;
        }
        return primo;
    }
}

int main(){
    int matrice[D][D], n_dispari, n_primi;
    for(int i=0; i<D; i++){
        for(int j=0; j<D; j++){
            scanf("%d", &matrice[i][j]);
        }
    }

    for(int i=0; i<D; i++){
        for(int j=0; j<D; j++){
            printf("%3d", matrice[i][j]);
        }
        printf("\n");
    }
    
    n_dispari=0;
    for(int i=0; i<D; i++){
        n_primi=0;
        for(int j=0; j<D; j++){
            n_dispari=n_dispari+matrice[i][j]%2;
            n_primi=n_primi+is_primo(matrice[i][j]);
        }
        printf("Numeri primi in riga %d: %d\n",i, n_primi);
    }
    printf("Numeri dispari presenti: %d\n", n_dispari);
    return 0;
}
