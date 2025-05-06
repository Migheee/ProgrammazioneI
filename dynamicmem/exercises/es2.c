/*
Es 2: Sia dato un array contenente una sequenza
ordinata di interi ed allocato dinamicamente. Si
scriva una funzione C che ricevendo in ingresso
l’array, la sua dimensione ed un intero, modifichi il
vettore in questione inserendo il nuovo intero nella
posizione corretta. Ad esempio, se il vettore v
contiene gli interi 4 32 57 98 la funzione chiamata
con i parametri v, 4, 50 dovrà modificare v in un
vettore di 5 elementi contenente 4 32 50 57 98.
*/

#include <stdio.h>
#include <stdlib.h>

void modifica(int*, int, int);

int main(){
    int dim=4;
    int numtoadd;
    int *arr=(int*) malloc(dim*sizeof(int));
    for(int i=0; i<dim; i++){
        scanf("%d", arr+i);
    }
    printf("Inserire numero: ");
    scanf("%d", &numtoadd);
    modifica(arr, dim, numtoadd);
    for(int i=0; i<dim+1; i++){
        printf("%3d", *(arr+i));
    }
    free(arr);
    return 0;

}

void modifica(int* arr, int dim, int numtoadd){
    arr = (int*) realloc(arr, (dim+1)*sizeof(int));
    int i = dim -1;
    while(i>=0 && arr[i] > numtoadd){
        arr[i+1]=arr[i];
        i--;

    }
    arr[i+1]=numtoadd;
}