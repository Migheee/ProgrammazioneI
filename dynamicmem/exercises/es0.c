/*
Dato un numero letto da tastiera,
crea array dinamico contenente le sue cifre
*/

int * trasforma(int);

int cifre(int);

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, dim;
    int *array;
    scanf("%d", &num); //deve essere >0
    array=trasforma(num);
    dim=cifre(num);
    for(int i=0; i<dim; i++){
        printf("%3d", array[i]);
    }
    free(array);
    return 0;

}

int cifre(int num){
    int c=0;
    while(num>0){
        c++;
        num/=10;
    }
    return c;
}

int * trasforma(int num){
    int c=cifre(num);
    int *arr;
    arr=(int*) malloc(c*sizeof(int));
    for(int i=0; i<c; i++){
        arr[i]=num%10;
        num/=10;
    }
    return arr;

}