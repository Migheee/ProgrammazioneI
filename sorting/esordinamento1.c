/******************************************************************************
Dato il seguente tipo strutturato
typedef struct{
int voto;
int numstudenti;
}t_voti;
che memorizza per ogni voto quanti studenti hanno
totalizzato quel voto. Definire in un programma un
array di tipo t_voti per memorizzare quanti studenti
hanno totalizzato 18, quanti 19, …. quanti 30.
Ordinare poi l'array in ordine crescente per
frequenza e stampare l'array ottenuto.
*******************************************************************************/

#include <stdio.h>
#define N 31
int main(){
    typedef struct{
        int voto;
        int numstudenti;
    }t_voti;

    t_voti voti[N];

    for(int i=0; i<N; i++){
        voti[i].voto=i;
        scanf("%d", &voti[i].numstudenti);
    }

    t_voti temp;
    for(int i=0; i<N; i++){
        for(int j=0; j<N-1-i; j++){
            if(voti[j].numstudenti > voti[j+1].numstudenti){
                temp=voti[j];
                voti[j]=voti[j+1];
                voti[j+1]=temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("voto: %d\n",voti[i].voto);
        printf("frequenza: %d\n",voti[i].numstudenti);
    }
    return 0;
}