/*
s1: Scrivere un programma C che legge da
tastiera un intero num e invocando la funzione
int* trasforma (int);
ottiene l’array dinamico contenente in ogni cella
una cifra di num. Il programma principale stampa
l’array dinamico.
Ad esempio, se l’utente inserisce il numero 144 a
video verrà stampato l’array dinamico di
dimensione 3 contenente le cifre 1 (nella posizione
0), 4 (nella posizione 1), 4 (nella posizione 2). 
*/

int * trasforma(int, int *);

int cifre(int);

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, dim;
    int *array;
    scanf("%d", &num); //deve essere >0
    array=trasforma(num, &dim);
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

int * trasforma(int num, int*c){
    *c=cifre(num);
    int *arr;
    arr=(int*) malloc( *c *sizeof(int));
    for(int i=*c-1; i>=0; i--){
        arr[i]=num%10;
        num/=10;
    }
    return arr;

}