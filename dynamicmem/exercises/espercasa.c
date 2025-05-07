 //per casa, dato un array letto da tastiera di 10 int, creare l'array dinamico che contiene i valori dell'array senza ripetizioni


#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int is_unique(int, int, int*);

int main(){
    int newdim=0;
    int *newarr;
    int pos=0;
    int array[DIM];
    for(int i=0; i<DIM; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<DIM; i++){
        newdim+=is_unique(array[i], i, array);
    }
    newarr=(int *) malloc(newdim * sizeof(int));
    for(int i=0; i<DIM; i++){
        if(is_unique(array[i], i, array)){
            newarr[pos]=array[i];
            pos++;
        }
    }
    
    for(int i=0; i<newdim; i++){
        printf("%3d", newarr[i]);
    }
    return 0;
}

int is_unique(int num, int pos, int * arr){
    for(int i=0; i<pos; i++){
        if(*(arr+i)==num)
            return 0;
    }
    return 1;
}