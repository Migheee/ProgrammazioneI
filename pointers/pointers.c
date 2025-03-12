/*
Puntatori: modo alternativo per accedere al contenuto della memoria. E' una variabile che ha come contenuto il riferimento (indirizzo) di memoria
E' come se fosse una freccia che punta alla cella di memoria relativa all'indirizzo
*/

#include <stdio.h>

int main(){
    int* p; //p è una variabile puntatore ad intero. Contiene, quindi, indirizzi di variabili intere
    int num=8;
    
    //come si inizializza un puntatore
    p = &num; //assegno a p l'indirizzo di num
}