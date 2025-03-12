/*
Scrivere nel main un programma che trovi il più piccolo divisore maggiore di 1

*/
#include <stdio.h>

void divisione(int, int, int*, int*);

int main(){
    int a, resto, quoziente,d, flag=0;
    scanf("%d", &a);
    for(int i=2; i<=a && !flag; i++){
        divisione(a,i, &resto, &quoziente);
        if(resto==0){
            d=i;
            flag=1;
        }
    }
    printf("%d", d);
    return 0;
}

void divisione(int n, int m, int * r, int * q){
    *r=n%m;
    *q=n/m;

}