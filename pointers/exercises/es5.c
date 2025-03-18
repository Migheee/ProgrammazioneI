/*
Scrivere un programma C (non scomposto in
funzioni) che acquisisce una stringa s1 di
massimo 50 caratteri e un numero intero n. Il
programma controlla se n è maggiore di zero e
minore della lunghezza della stringa e, se le
condizioni non sono verificate continua a
richiedere il valore; poi il programma crea una
nuova stringa s2 che contiene la rotazione
(spostamento) verso destra di s1 di n posizioni e
la visualizza. Esempio: s1="studente" e n=2 ->
s2="udentest".
*/

#define N 50

#include <stdio.h>

int main(){
    char stringa[N+1];
  
    int n;
    int lunghezza;
    scanf("%s", stringa);
    do{
        scanf("%d", &n);
        for(int i=0; *(stringa+i)!='\0'; i++){
            lunghezza++;
        } 
    }while(n<0 || n>lunghezza);
    char stringa2[lunghezza];
    for(int i=n, a=0; *(stringa+i)!='\0'; i++, a++){
        stringa2[a]=stringa[i];

    }
    for(int i=0, a=lunghezza-n; i<n; i++,a++){
        stringa2[a]=stringa[i];
    }
    printf("%s", stringa2);
    return 0;
}