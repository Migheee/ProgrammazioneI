/*
Ordinamento di array 
NAIVE SORTING: sposto il massimo in ultima posizione, poi guardo l'array diminuito di una posizione e sposo il massimo in penultima posizione, e così via
ad esempio
[1,3,8,0]
[1,3,0,8]
[1,0,3,8]
[0,1,3,8]
*/

#include <stdio.h>
#define N 10
int main(){
    int array[N];
    int tmp;
    int i;
    int dim;
    int posmax;
    for(i=0; i<N; i++){
        scanf("%d", &array[i]);
    }

    dim=N;
    while(dim>1){
        posmax=0;
        for(i=1; i<dim; i++){
            if(array[i]>array[posmax]){
                posmax=i;
            }
        }
        tmp=array[posmax];
        array[posmax]=array[dim-1];
        array[dim-1]=tmp;
        dim--;
    }

    for(i=0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}