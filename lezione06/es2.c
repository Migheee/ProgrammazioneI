/*
Dati due numeri positivi, calcolare Massimo comune divisore e Minimo comune multiplo
*/


#include <stdio.h>

int main(){
    int a,b, n=1,maxdivisore, minmultiplo;
    scanf("%d %d", &a, &b);
    maxdivisore = n;
    while(n<=a && n<=b){
        if(a%n==0 && b%n==0)
            maxdivisore=n;
        n++;
    }
    printf("Soluzione diversa dalla prof %d\n", maxdivisore);
    if(a>b)
        maxdivisore = b;
    else
        maxdivisore = a;
    while(!(a%maxdivisore == 0 && b%maxdivisore==0) ){
        maxdivisore--;
    }

    minmultiplo=a*b/maxdivisore;
    printf("Soluzìone della prof %d\n mcm %d\n", maxdivisore, minmultiplo);
    return 0;
}
