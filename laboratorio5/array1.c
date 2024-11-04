/*
Scrivere un programma C che richiede all’utente
10 voti (compresi tra 18 e 30, correggere gli errori)
e li memorizza all’interno di un array, quindi
stampa l’array, il voto massimo, minimo e medio.
*/


#include <stdio.h>

#define D 10

int main(){
    int voti[D], voto;
    for(int i=0; i<D; i++){
        do{
            printf("Inserisci voto: ");
            scanf("%d", &voti[i]);
        }while(voti[i]<18 || voti[i]>30);
    }
    for(int i=0; i<D; i++){
        printf("%d\n", voti[i]);
    }
    voto=voti[0];
    for(int i=1;i<D; i++){
        if(voti[i]>voto)
            voto=voti[i];
    }
    printf("voto massimo: %d\n", voto);
    voto=voti[0];
    for(int i=1;i<D; i++){
        if(voti[i]<voto)
            voto=voti[i];
    }
    printf("voto minimo: %d\n", voto);
    return 0;
}
