/*
Scrivere un programma C che classifica un
carattere immesso da tastiera come: alfabetico (az oppure A-Z), cifra (0-9),
speciale (tutti gli altri).
*/

#include <stdio.h>

int main(){
    char c;
    scanf(" %c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("Carattere alfabetico\n");
    }
    else{
        if(c>='0' && c<='9'){
            printf("Cifra\n");
        }
        else{
            printf("speciale\n");
        }
    }
    return 0;
}
