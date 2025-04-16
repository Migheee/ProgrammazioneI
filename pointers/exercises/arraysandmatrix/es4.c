#include <stdio.h>
#define DIM 10

void crea (int *, int, int*);

int main(){
    int ar1[DIM];
    int ar2[DIM];
    int i;
    for(int i =0; i<DIM; i++){
        scanf("%d", &ar1[i]);
    }

    crea(ar1,  DIM, ar2);
    
    return 0;
}

void crea(int n[], int dim, int m[]){
    int somma=0;
    for(int i=0; i<dim; i++){
        somma=somma+n[i];
        if(i%2==0){
            m[i]=somma;
        }
        else{
            n[i]=m[i]*m[i-1];
        }
    }
}