/*
Introduzione alla memoria dinamica in C
Per chiedere lo spazio ci sono due chiamate ci sono due chiamate
    -malloc: non azzera lo spazio allocato dello heap
    -calloc: allocano lo spazio  dello heap e lo inizializzano a zero

    calloc(int n, int size): alloca n elementi di size byte e li inizializza a zero. Restituisce puntatore (void*) 
    a primo byte della zona allocata.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numv;
    float media; int somma=0;
    //Se adesso inizializzassi un array static di numv elementi, l'array verrà allocato nello stack e non conosco nemmeno la sua dimensione7
    int *a;
    printf("Quanti voti vuoi inserire? ");
    scanf("%d", &numv);
    a = (int*) calloc(numv, sizeof(int)); //è stato effettuato un cast a int*
    //oppure a = (int*) malloc(numv*sizeof(int)); 
    for(int i=0; i<numv; i++){
        printf("Inserisci il voto %d: ", i+1);
        scanf("%d", &a[i]);
        somma += a[i];
    }
    media = (float) somma/numv;
    printf("La media è: %f\n", media);
    //Devo liberare la memoria allocata con calloc, altrimenti rimane allocata fino alla chiusura del programma
    free(a); //libera la memoria allocata con malloc o calloc. Non libera la memoria allocata, ma indica che è disponibile


    //Esiste la possibilità di riallocare la memoria dinamica che era già stata allocata con malloc o calloc, con realloc.
    int*p, *q;
    int i;
    int dim;
    scanf("%d", &dim);
    p = (int*) malloc(dim*sizeof(int)); 
    if(p == NULL){ 
        printf("Errore allocazione memoria\n");
        return 1;
    }
    for(i=0; i<dim; i++){
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &p[i]);
    }
    p= realloc(p, (dim+1)*sizeof(int));
    //sarebbe meglio usare un'altra varibaile in qunato non è detto che per la realloc ci sia abbastanza spazio7
    q=(int*) realloc(p, (dim+1)*sizeof(int));
    if(q != NULL){ 
        p=q;
    }
    scanf("%d", &p[i]);
    for(int i=0; i<dim+1; i++){
        printf("%d", p[i]);
    }
    return 0;

}