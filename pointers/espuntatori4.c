/*
Scrivere una funzione che preso un intero positivo, restituisce 0 o 1 a seconda se il numero è pari o dispari. E anche il numero di divisori
*/

#include <stdio.h>

int primo_div(int, int*);

int main(){
    int num, d,r;
    scanf("%d", &num);
    r=primo_div(num, &d);
    if(r)
        printf("%d è primo \n", num);
    else
        printf("%d è primo \n", num);
    printf("%d divisori \n", d);
    return 0;

}

int primo_div(int n, int*p){
    *p=0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            (*p)++; //Big Nota: usando le parentesi incremento ciò a cui punta p
    }
    if(*p==2)
        return 1;
    return 0;

}