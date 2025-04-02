/*
crivere un programma C composto da:
 Una funzione leggi che richiede all’utente di
inserire da standard input una matrice 4x5.
 Una funzione trasposta che riceve come
parametro una matrice a 4x5 e una matrice b
5x4. La funzione calcola la trasposta di a e la
memorizza in b.
 Una matrice a con i righe e j colonne può
essere trasposta in una matrice b con j righe
e i colonne, dove ogni elemento b(j,i) = a(i,j).
*/

#include <stdio.h>

#define N 20

void scambia(char s[]);

int main(){
    char s[N+1];
    scanf("%s", s);
    scambia(s);
    printf("%s\n", s);
}

void scambia(){
    
}