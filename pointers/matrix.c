#include <stdio.h>
#define DIM 4

void input(int m[][DIM]); //qua c'è bisogno di specificare la dimensione delle colonne

int simmetrica(int m[][DIM]);

int main(){
    int mat[DIM][DIM],r;
    input(mat);
    r=simmetrica(mat);
    printf("%d\n", r);
    return 0;

}

void input(int m[][DIM]){
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int simmetrica(int m[][DIM]){
    int flag=1;
    for(int i=0; i<DIM && flag; i++){
        for(int j=0; j<i && flag; j++){ //posso guardare tutte le colonne al di sotto della diagonale
            if(m[i][j]!=m[j][i])
                flag=0;
        }
    }
    return flag;
}