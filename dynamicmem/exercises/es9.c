/*
Sia data una lista contenente i cui nodi sono
definiti tramite la seguente struttura C:
struct nodo{
int valore;
struct nodo *next;
};
¢ Si scriva la funzione prodotto che restituisce il
prodotto dei valori degli elementi contenuti nella
lista. La funzione deve ricevere come parametro
la testa della lista. Se la lista è vuota, la funzione
deve restituire il valore 1.
¢ SCRIVERE SIA LA VERSIONE ITERATIVA
(CHE RICORSIVA)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int valore;
    struct nodo *next;
}node_;

node_ * inseriscitesta(int, node_ *);
int prodotto(node_*);

int main(){
    node_ * lista = NULL;
    int num;
    scanf("%d", &num);
    while (num!=-1){
        lista = inseriscitesta(num, lista);
        scanf("%d", &num);
    }
    int prod = prodotto(lista);
    printf("%d\n", prod);
    return 0;
}

node_ * inseriscitesta(int num, node_ * lista){
    node_ * tmp = (node_*) malloc(sizeof(node_));
    tmp->valore=num;
    tmp->next=lista;
    return tmp;
}

int prodotto(node_* lista){
    if(lista==NULL)
        return 1;
    return lista->valore*prodotto(lista->next);
}