/*
Scrivere un programma che dato un numero intero positivo num inserito
da tastiera (correggere eventuali errori in inserimento) e un array di 5 interi
di nome cifre contenente tutti numeri maggiori o uguali a zero composti da
una sola cifra, verificare se tutte le cifre di num sono presenti nell’array. Ad
esempio se num vale 353 e l’array è int cifre[]= {3, 3,0, 7, 4}, l’array non
contiene tutte le cifre di num.
*/


#include <stdio.h>
int main(){
    int resto, n, a[5],cond;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++){
        do{
            scanf("%d", &a[i]);
        }while(a[i] <= 0);
    }
    cond = 1;
    while(cond && n > 0){
        resto = n % 10;
        cond = 0;
        for(int i = 0; i <5 ; i++){
            if(a[i] == resto)
                cond=1;
        }
        n /= 10;
    }
    printf("%s\n", cond ? "contiene" : "non contiene");
    return 0;
}
