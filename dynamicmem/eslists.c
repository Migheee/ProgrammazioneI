#include <stdio.h>
#include <stdlib.h>

typedef struct elem_{
    int num;
    struct elem_* next;
} elem;

elem* insersicitesta(elem*, int); //inserisce un elemento in testa alla lista
elem* inseriscicoda(elem*, int);
void* stampa(elem*); // stampa la lista
int trovamax(elem*); //trova il massimo della lista

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

elem* inseriscicoda(elem * lista, int n){
    elem* tmp;
    elem* prec; //servira dopo per raggiungere l'ultimo elemento della lista

    tmp = (elem*)malloc(sizeof(elem));
    if(tmp!=NULL){
        tmp->num=n;
        tmp->next=NULL;
        
        if(lista==NULL) //nel caso in cui la lista sia vuota
            lista=tmp;
        else{
            for(prec=lista; prec->next!=NULL; prec=prec->next); //serve per raggiungere ultimo nodo
            prec->next=tmp;
        }
    }
        return lista;
}

int esiste(elem* lista, int n){
    while(lista!=NULL && lista->num!=n){ //scorro la lista fino a quando non trovo NULL o il numero che cerco
        lista=lista->next;
    }
    return (lista!=NULL); //restituisco 1 se ho trovato il numero, 0 altrimenti
}

elem* elimina(elem* lista, int n){
    int trovato=0;
    elem *prec, *curr, *canc;
    curr=lista;
    prec=NULL;
    while(curr!=NULL && !trovato){ //scorro la lista fino a quando non trovo NULL o il numero da cancellare
        if(curr->num==n){
            trovato=1; 
            canc=curr; 
            curr=curr->next; //scorro alla prossima cella della lista
            if(prec!= NULL){ 
                prec->next=curr; //se il nodo da cancellare non è il primo, il nodo precedente punta al nodo successivo a quello da cancellare
            }
            else{ //se il nodo da cancellare è il primo
                lista=curr;
            }
            free(canc); //libero la memoria del nodo da cancellare
        }
        else{ //se il nodo da cancellare non è il primo
            prec=curr; //il nodo precedente diventa il nodo corrente
            curr=curr->next; //scorro alla prossima cella della lista
        }
        
    }
    return lista; 
}

int trovamax(elem* lista){
    int max = lista->num; //inizializzo max al primo numero della lista
    while(lista!=NULL){ 
        if(lista->num>max) 
            max=lista->num; 
        lista=lista->next; 
    }
    return max; }