#include <stdio.h>
#define N 10

int somma(int *, int); //il secondo parametro è la sua dimensione

int main(){
    int arr[N], s1,s2,s3,i;
    for(i=0; i<N ; i++){
        scanf("%d", &arr[i]);
    }
    //somma tutti gli elementi;
    s1=somma(arr,N);

    //sommma metà
    s2=somma(arr, N/2); 

    //somma metà
    s3=somma(&arr[N/2], N/2); //il main attende la risposta del sottoprogramma. 

    //si chieda all'utente qunate celle si vuole sommare
    int quante;
    scanf("%d", &quante);
    int s=somma(&arr[3], quante);
    return 0;
}

int somma(int a[], int dim){ //la dimensione dell'array potrebbe non essere fissa. Infatti nel main, la dimensione è la metà di quella reale.
    int i, s;
    s=0;
    for(i=0; i<dim; i++){
        s+=a[i]; //----> *(a+i)
    }
    
    return s;
}