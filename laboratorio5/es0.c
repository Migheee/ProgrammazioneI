/*Esercizio svolto dalla docente:*/

#include <stdio.h>
#define D 10

int main(){
    int a[D];
    int i, sum=0;
    for(i=0; i<D; i++){
        scanf("%d", &a[i]); //input i-esimo elemento
    }
    
    printf("Array: ");
    for(i=0; i<D; i++){
        printf("%d\t", a[i]); //stampa i-esimo elemento
    }
    
    for(i=0; i<D; i++){
        sum=sum+a[i]; //somma l'i-esimo elemento
    }
    printf("somma : %d\n", sum);

    printf("sommo ogni elemento con il suo precedente: ");
    printf("%d\n", a[0]);
    for(i=1; i<D; i++){
        printf("somma con il precedente: %d\n", a[i]+a[i-1]);
    }
    return 0;
}
