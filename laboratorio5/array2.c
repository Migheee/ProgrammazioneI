/*
Scrivere un programma che dato un array di
caratteri lungo 10 (con i valori letti da standard
input) lo stampa, lo stampa invertito, sostituisce
ogni vocale minuscola con un ’*’.
*/

#include <stdio.h>
#define D 10

int main(){
    char c[D];
    for(int i=0; i<D; i++){
        scanf(" %c", &c[i]);
    }
    for(int i=D-1; i>=0; i--){
        if(c[i]=='a' || c[i]=='e' || c[i] == 'i' || c[i]=='o' || c[i]=='u')
            printf("%c ",'*');
        else
            printf("%c " , c[i]);
    }
    return 0;
}
