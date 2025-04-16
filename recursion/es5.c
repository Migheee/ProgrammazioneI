/*
Definire la funzione ricorsiva int monotono(int) che restituisce 1 se il
numero passato in ingresso è monotono crescente (es. 137), 0 altrimenti.
*/

#include <stdio.h>

int monotono(int);

int main(){
    printf("%d", monotono(132));
}

int monotono(int num){
    if(num<10)
        return 1;
    if(num%10<(num/10%10))
        return 0;
    return monotono(num/10);
}   