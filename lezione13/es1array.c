/*Dato un intero positivo, e  un array che contiene interi ad una sola cifra, dire se tutte le cifre sono nell'array*/


#include <stdio.h>
#define DIM 5

int main(){
    int cifra,n, cond=1;
    int cifre[DIM] = {3,3,0,7,4};
    do{
        scanf("%d", &n);
    }while(n<=0);
    while(n > 0 && cond){
        cifra=n%10;
        cond=0;
        for(int i=0; i<DIM && !cond; i++){
            if(cifra == cifre[i])
                cond=1;
        }
        n=n/10;
    }
    printf("%s\n", cond ? "tutte presenti" : "non presenti");
    return 0;
}
