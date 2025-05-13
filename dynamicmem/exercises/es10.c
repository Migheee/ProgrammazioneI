/*
LISTE (4): DA TEMA D’ESAME
Scrivere un sottoprogramma int2list che ricevuto in
ingresso un numero intero restituisce una lista in cui
ogni cifra del numero in ingresso compare tante volte
quanto il suo valore. Nel caso in cui il valore ricevuto in
ingresso sia negativo, il sottoprogramma restituisce la
lista creata a partire dalla cifre in ordine opposto. Se
per esempio il sottoprogramma riceve in ingresso
l’intero 3204, il sottoprogramma restituisce la lista
seguente: 3 → 3 → 3 → 2 → 2 → 4 → 4 → 4 → 4
Se il sottoprogramma riceve in ingresso l’intero -3204, il
sottoprogramma restituisce la lista seguente: 4 → 4 → 4
→ 4 → 2 → 2 → 3 → 3 → 3
Definire un tipo di dato opportuno per la lista. Scrivere
un programma che acquisisce da riga di comando il
valore intero e chiama il sottoprogramma int2list. 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct elem_{
    int num;
    struct elem_* next;
} elem;

elem * int2list(int);
void stampa(elem* );
elem * inseriscitesta(int, elem*);
elem * inseriscicoda(elem*, int);

int main(){
    int num;
    scanf("%d", &num);
    elem * lista=int2list(num);
    stampa(lista);


}

elem * int2list(int num){
    int cifra=0;
    elem * lista = NULL;
    if(num>0){
        while(num>0){
            cifra=num%10;
            
            for(int i=0; i<cifra; i++){
                lista = inseriscitesta(cifra, lista);
            }
            num/=10;
        }
    }
    if(num<0){
        num =- num;
        while(num>0){
            cifra=num%10;
            
            for(int i=0; i<cifra; i++){
                lista = inseriscicoda(lista, cifra);
            }
            num/=10;
        }

    }
    return lista;
    
}

elem * inseriscitesta(int val, elem * lista){
    elem * tmp = malloc(sizeof(elem));
    tmp->num=val;
    tmp->next=lista;
    return tmp;
}

void stampa(elem * lista){
    while(lista!=NULL){
        printf("%3d", lista->num);
        lista=lista->next;
    }
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