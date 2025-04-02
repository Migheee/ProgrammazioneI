/*
Scrivere sottoprogramma conta che preso come
parametro un array di interi e la sua dimensione (al
massimo di 10 interi), conta quanti numeri dispari e
quanti numeri primi sono presenti nell’array e
restituisce entrambi i valori al chiamante. Il main
chiede in ingresso all’utente un array di massimo 10
interi (-1 per terminare), richiamando il
sottoprogramma conta stampa i due valori numerici
ottenuti.
*/

#include <stdio.h>

#define N 10

void conta(int *, int, int*, int*);

int is_prime(int);

int main(){
    int pos=0, num;
    int array[N];
    int dis=0, primi=0;
    scanf("%d", &num);
    while(num != -1 && pos < N){
        array[pos] = num;
        pos++;
        scanf("%d", &num);
    }
    conta(array, pos, &dis, &primi);
    printf("Numeri dispari %d\nNumeri primi %d\n", dis, primi);
    return 0;
}

void conta(int a[], int dim, int * dispari, int * primi){
    for(int i=0; i<dim; i++){
        if(a[i]%2!=0)
            *dispari+=1;
        *primi+=is_prime(a[i]);
    }
    
}

int is_prime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%2==0)
            return 0;
    }
    return 1;
}