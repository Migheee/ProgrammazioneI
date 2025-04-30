#include <stdio.h>
#include <stdlib.h>

typedef struct elem_{
    int num;
    struct elem_* next;
} elem;

elem* insersicitesta(elem*, int); //inserisce un elemento in testa alla lista
void* stampa(elem*); //stampa la lista

int main(){
    int num;
    elem* lista=NULL; //è l'inizio della lista, che è vuota. mai perdere di vista il puntatore alla testa della lista


    scanf("%d", &num);
    while (num!=-1){
        lista = insersicitesta(lista, num); //inserisco in testa alla lista il numero. nel main si punta sempre al primo nodo della lista
        scanf("%d", &num); //leggo il numero successivo

    }
    
}

elem* insersicitesta(elem* lista, int num){
    elem* tmp;
    tmp=(elem*) malloc(sizeof(elem)); 
    (*tmp).num=num; 
    tmp->num=num; //equivalente a (*tmp).num=num; la freccia è per dire accesso al campo num del punatore alla struttura
    tmp->next=lista; 
    return tmp; //restituisco il puntatore alla nuova lista
}

void visualizza(elem* lista){
    while(lista!=NULL){ //scorro la lista fino a quando non trovo NULL
        printf("%d ", lista->num); //stampo il numero
        lista=lista->next; //scorro alla prossima cella della lista
    }
    printf("\n");
}