/*
Sia data una lista contenente almeno due elementi
ed i cui nodi sono definiti tramite la seguente
struttura C:
struct nodo{
int valore;
struct nodo *next;
};
Si scriva un sottoprogramma cancella che preso il
puntatore alla testa della lista e un intero num,
cancella tutti i nodi che contengono come valore
num.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int valore;
    struct nodo *next;
} node_;

node_ * inseriscitesta(int , node_ * );
node_ * cancella(int, node_* );
void visualizza(node_ *);

int main(){
    node_ * lista = NULL;
    int num;
    int numtodelete;
    num=scanf("%d", &num);
    while(num!=-1){
        lista = inseriscitesta(num, lista);
        scanf("%d", &num);
    }
    printf("numero da eliminare: ");
    scanf("%d", &numtodelete);
    lista = cancella(numtodelete, lista);
    visualizza(lista);
    return 0; 
}

node_ * inseriscitesta(int num, node_ * lista){
    node_ * tmp = (node_*) malloc(sizeof(node_));
    tmp->valore= num;
    tmp->next= lista;
    return tmp;
}

node_ * cancella(int num, node_ * lista){
    node_ * curr, * prec, * canc;
    prec = NULL;
    curr = lista;
    while(curr != NULL){
        if(curr->valore==num){
            canc=curr;
            curr=curr->next;
            if(prec!=NULL){
                prec->next=curr;
            }
            else{
                lista=curr;
            }
            free(canc);
        }
        else{
            prec=curr,
            curr=curr->next;
        }

    }
    return lista;
}


void visualizza(node_ * lista){
    while(lista!=NULL){
        printf("%3d", lista->valore);
        lista=lista->next;
    }
}

