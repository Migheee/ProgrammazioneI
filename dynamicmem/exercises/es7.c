/*
Sia data una lista contenente almeno due elementi ed i
cui nodi sono definiti tramite la seguente struttura C:

Si scriva una funzione C che ricevendo in ingresso un
puntatore alla lista modifichi la stessa, memorizzando
come primo nodo la somma dei valori di tutti i nodi
presenti nella lista.
Ad esempio, una lista contenente la sequenza di interi
4 6 2 3 9 verrà modificata dalla funzione nella lista
24 4 6 2 3 9
Realizzare anche la funzione per stampare la lista.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int valore;
    struct nodo *next;
} node_;

node_ * inseriscitesta(node_ * , int);

void stampa(node_ *);

node_ * inseriscisomma(node_ *);

int main(){
    node_ * lista = NULL;
    int num;
    scanf("%d", &num);
    while(num!=-1){
        lista = inseriscitesta(lista, num);
        scanf("%d", &num);
    }
    lista = inseriscisomma(lista);
    stampa(lista);
    return 0;
    
}


node_ * inseriscitesta(node_ * lista, int num){
    node_* tmp;
    tmp =(node_ *) malloc(sizeof(node_));
    tmp->valore=num;
    tmp->next=lista;
    return tmp;
}

void stampa(node_ * lista){
    while(lista!=NULL){
        printf("%3d", lista->valore);
        lista=lista->next;
    }
}

node_ * inseriscisomma(node_ * lista){
    node_ * tmp = lista;
    int somma=0;
    while(lista!=NULL){
        somma+=lista->valore;
        lista=lista->next;
    }
    tmp->valore=somma;
    return tmp;
}