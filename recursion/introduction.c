/* 
RICORSIONE


            -> iterazione
           / 
induzione /
          \
           \
            -> ricorsione, ossia funzione che chiama se stessa
             e strutture dati ricorsive  

    N! è un esempio di una funzione ricorsiva

    n! ----> 1 se n=0
       ----> n(n-1)! 
*/

#include <stdio.h>

int fi(int);
int fr(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("\n %d", fi(n));
    printf("\n %d", fr(n));
    return 0;
}

int fi(int n){
    int prod=1;
    for(int i=1; i<=n; i++){

        prod=prod*i;
    }
    return prod;
}

int fr(int num){
    if(num==0)
        return 1;
    return num*(fr(num -1));
}