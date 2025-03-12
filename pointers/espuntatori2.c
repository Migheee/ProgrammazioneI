/*
Dati due numeri, funzione che calcoli somma e prodotto.
*/

#include <stdio.h>

int f(int, int ,int*);
void f2(int, int, int*, int*);

int main(){
    int a,b,s,p;
    scanf("%d %d", &a, &b);
    s=f(a,b,&p);
    f2(a,b,&s,&p);
    printf("Somma: %d\nProdotto: %d\n", s, p);
    return 0;

}

int f(int n, int m, int* p){
    *p=n*m;
    return n+m;
}