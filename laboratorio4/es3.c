/*
Scrivere un programma che ricevuto in ingresso due numeri
interi positivi a e b (se così non è, li richiede), visualizza un
rettangolo di dimensione a*b usando il carattere '*’.
*/

#include <stdio.h>

int main(){
    int a;
    int b, row;
    do{
        printf("Inserire a e b: ");
        scanf("%d %d", &a, &b);
    }while(a<=0 && b<=0);
    while(a>0){
        row=b;
        while(row > 0){
            printf("*");
            row--;
        }
        printf("\n");
        a--;
    }
    return 0;
}
