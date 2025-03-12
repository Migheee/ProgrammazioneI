/*
Puntatori: modo alternativo per accedere al contenuto della memoria. E' una variabile che ha come contenuto il riferimento (indirizzo) di memoria
E' come se fosse una freccia che punta alla cella di memoria relativa all'indirizzo
*/

#include <stdio.h>

int main(){
    int* p; //p è una variabile puntatore ad intero. Contiene, quindi, indirizzi di variabili intere. Se non viene assegnato è NULL, ma NON SI FA mai affidamento ai valori in memoria.
            //Se si deferenzia un puntatore con valore NULL, si ottiene un errore.
    int num=8;
    
    //come si inizializza un puntatore
    p = &num; //assegno a p l'indirizzo di num

    //come si stampa num?
    printf("%d\n", *p); //ciò a cui punta il contenuto della cella puntatore. L'asterisco si chiama operatore di dereferenziazione
    printf("%d\n", num); 

    
    
    //che succede in questo caso? j e i = 5
    int i=5;
    int j=9;
    int* p;
    p = &j;
    *p=i;
    i++;
    i=*p;


    //sono uguali?
    int *p1, *p2;
    p1=p2; 
    *p1= *p2;
    //No, il primo assegna indirizzi, invece il secondo interi.


}