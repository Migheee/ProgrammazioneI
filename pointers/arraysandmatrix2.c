#include <stdio.h>
#define N 10

int somma(int *, int); //il secondo parametro è la sua dimensione

int main(){
    int arr[N], s1,s2,s3,i;
    for(i=0; i<N ; i++){
        scanf("%d", &arr[i]);
    }

    s1=somma(arr,N);

    return 0;
}

int somma(int a[], int dim){ //la dimensione dell'array potrebbe non essere fissa.
    int i, s;
    s=0;
    for(i=0; i<dim; i++){
        s+=a[i];
    }
    
    return s;
}