/*
Chiamiamo coppia di quadrati (CQ) una coppia
<a,b> di numeri interi che sono uno il quadrato
dell’altro. Esempio <9,3> oppure <-3,9> (infatti
9=3*3).
Si codifichi un programma C che legge da
tastiera una sequenza che termina con 99 (di
lunghezza a priori illimitata) di numeri interi e
stampa a video quante coppie di numeri
consecutivi all’interno della sequenza
rappresentano una CQ.
Ad esempio: 2 4 16 0 3 9 99 contiene 3 CQ: <2,4>
<4,16> e <3,9>
*/

#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d", &n1);
    while(n1 != 99){
        scanf("%d", &n2);
        if(n2==n1*n1)
            printf("sequenza cq\n");
        n1=n2;
    }
    return 0;
}
