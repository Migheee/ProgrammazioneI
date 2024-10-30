/*
Scrivere un programma che ricevuto in ingresso un numero
intero positivo (correggere l’eventuale input sbagliato)
stampa a video tutti i suoi divisori.
*/

#include <stdio.h>

int main(){
    int a, numero;
    printf("Inserire numero: ");
    scanf("%d", &numero);
    a=numero;
    while(a > 0){
        if(numero % a == 0)
            printf("%d\n", a);
        a--;
    }
    return 0;
}
