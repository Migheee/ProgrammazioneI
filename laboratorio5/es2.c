/*
Scrivere un programma che realizzi il gioco
Mastermind. Il primo giocatore inserisce 4 caratteri
che corrispondono alle iniziali di 4 colori tra (r = rosso;
g = giallo; v = verde, b = blu, n = nero; si assuma che
gli utenti inseriscano sempre una lettera compresa in
questo elenco). Il secondo giocatore ha a disposizione
10 tentativi per indovinare la combinazione, inserendo
a sua volta quattro caratteri ad ogni tentativo. Dopo
ogni tentativo il programma visualizza il numero di
colori corretti in posizione corretta (non vengono
segnalati i colori corretti in posizione sbagliata).
Terminati i tentativi, se il secondo giocatore non è
riuscito a indovinare la sequenza, vengono visualizzati
i caratteri corretti.
*/

#include <stdio.h>

#define D 4
int main(){
    int col_corretti ,tentativi=0;
    char sequser1[D];
    char sequser2[D];
    printf("Turno del giocatore 1. Inserire la combinazione ");
    for(int i=0; i<D; i++){
        scanf(" %c", &sequser1[i]);
    }
    printf("Turno del giocatore 2. Indovinare la combinazione ");
    while(tentativi < 10 && col_corretti!=4){
        for(int i=0; i<D; i++){
            scanf(" %c", &sequser2[i]);
        }
        col_corretti=0;
        for(int i=0; i<D; i++){
            if(sequser1[i] == sequser2[i])
                col_corretti++;
        }
        printf("Numero di colori in posizione corretta: %d\n", col_corretti);
        tentativi++;
    }
    if(col_corretti==4)
        printf("Hai indovinato la combinazione \n");
    else{
        printf("Non hai indovinato la combinazione... La combinazione corretta era");
        for(int i=0; i<D; i++){
            printf("%c\n", sequser1[i]);
        }
    }
    return 0;
}
