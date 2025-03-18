/*
Scrivere una funzione sort che ordina 3 interi in
ordine crescente. La funzione non deve utilizzare
un array ma 3 puntatori.
*/

#include <stdio.h>

void sort(int *, int *, int *);

int main(){
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    sort(&n1, &n2, &n3);

    printf("Numeri ordinati: %d %d %d \n", n1,n2,n3);
    return 0;
}

void sort(int*n1, int*n2, int*n3){
    int temp;
    if(*n1>*n2){
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
    if(*n2>*n3){
        temp=*n2;
        *n2=*n3;
        *n3=temp;
    }
    if(*n1>*n2){
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
}