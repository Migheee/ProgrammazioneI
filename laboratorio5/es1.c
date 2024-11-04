/*
Scrivere un programma che calcoli il massimo comun
divisore e il minimo comune multiplo di due numeri
inseriti dall’utente. Entrambi i numeri inseriti devono
essere maggiori di zero. 
*/

#include <stdio.h>

int main(){
    int a, b, maxdivisore, divisore, minmultiplo;
    do{
        printf("Inserire A e B: ");
        scanf("%d %d", &a, &b);
    }while(a<=0 || b<=0);
    divisore=1;
    maxdivisore=1;
    while(divisore<=a && divisore<=b){
        if(a % divisore == 0 && b % divisore == 0){
            maxdivisore = divisore;
        }
        divisore++;
    }
    printf("Massimo comune Divisore: %d\n", maxdivisore);

    minmultiplo = (a*b)/maxdivisore;
    printf("Minimo comune Multiplo: %d\n", minmultiplo);
    return 0;
}
