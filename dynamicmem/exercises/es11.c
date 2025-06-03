/*
Sia data una lista i cui nodi sono definiti tramite la
seguente struttura C:
struct nodo{
int valore;
struct nodo *next;
};
Scrivere due funzioni C RICORSIVE che ricevendo
in ingresso un puntatore alla lista: (1) stampano la
lista e (2) contano quanti multipli di 3 sono
presenti nella lista.
NB: per testare il programma scrivere la funzione
inserisci in testa per creare una lista con 10 valori.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int valore;
    struct nodo *next;
} node;

void visualizza(node *);
int multipli(node *);
node* inseriscitesta(node *, int);

int main(){
    node * lista=NULL;
    int num;
    int i=0;
    while(i<10){
        scanf("%d", &num);
        lista = inseriscitesta(lista, num);
        i++;
    }

    visualizza(lista);
    printf("multipli di 3 %d\n", multipli(lista));
    return 0;

}

int multipli(node * lista){
    if(lista==NULL)
        return 0;
    if(lista->valore %3==0)
        return 1+multipli(lista->next);
    return multipli(lista->next);
}

void visualizza(node *lista){
    if(lista==NULL)
        return ;
    printf("%d\n", lista->valore);
    visualizza(lista->next);
}

node * inseriscitesta(node * lista, int num){
    node* tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->valore=num;
    tmp->next=lista;
    return tmp;
}