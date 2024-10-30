/*
Scrivere un programma che ricevuto in ingresso un numeri
interi positivi a (se così non è, lo richiede), visualizza un
quadrato di lato a usando il carattere ‘X’ sulla diagonale
principale e il carattere ’*’ altrove.
*/

#include <stdio.h>

int main(){
    int a;
    printf("Inserire a");
    scanf("%d", &a);
    int row=1;
    while(row <= a){
        int col=1;
        while(col <=a ){
            printf("%s", col==row ? "X" : "*");
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
