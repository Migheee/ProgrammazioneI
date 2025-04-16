/*
            
           
                                  / const int=2;
            VARIABILI/COSTANTI-- /
               |                 \
               |                  \ Simbolicliche #define DIM 10
               |
               ↓
               Variabili locali di tipo int, float, char, double, ecc.
  
  
     ___________________
    |_______heap________| ---> memoria dinamica (malloc, calloc, realloc, free)
    |_______stack_______| ---> variabili locali di tipo int, float, char, double, ecc DEFINITE NEL MAIN (visibili solo all'interno del main e delle funzioni chiamate da esso)
    |______globali______| ---> variabili globali di tipo int, float, char, double, ecc DEFINITE FUORI DAL MAIN (visibili in tutto il programma)
    |______codice-______| ---> 

*/

#include <stdio.h>
#define DIM 10
int a[DIM]; //variabile globale di tipo int
void leggi();
int contapari();
void stampa();


int main(){
    int i;
    leggi(); //chiamata alla funzione leggi
    stampa(); //chiamata alla funzione stampa
    i=contapari(DIM);
    printf("\nCi sono %d numeri pari\n", i);
    return 0;

}

void leggi(){
    int i;
    for(i=0; i<DIM; i++){
        printf("inserisci il numero %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void stampa(){
    int i;
    for(i=0; i<DIM; i++){
        printf("%d ", a[i]);
    }
}

int contapari(int dim){
    if(dim=0)
        return 0;
    if(a[dim-1]%2==0)
        return 1 + contapari(dim-1);
    return contapari(dim-1);
}