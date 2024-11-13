/* ○ Scrivere un programma C che memorizza in un
array i primi 15 numeri di Fibonacci e li stampa a
video.
● I primi due numeri di Fibonacci, Fib(0) e
Fib(1), sono definiti come:
○ Fib(0) = 1
○ Fib(1) = 1
● Il numero di Fibonacci di un valore n >= 2 è:
○ Fib(n) = Fib(n-2) + Fib(n-1)*/
#include <stdio.h>
#define D 15
int main(){
    int array[D];
    array[0]=1;
    array[1]=1;
    for(int i=2; i<D; i++){
        array[i]=array[i-1]+array[i-2];

    }
    for(int i=0; i<D; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}























































