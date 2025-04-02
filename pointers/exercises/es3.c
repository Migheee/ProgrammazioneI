/*
Scrivere un sottoprogramma che calcola la radice
quadrata intera di un numero intero positivo. Il
sottoprogramma riceve come parametro il
numero intero ed un'altra variabile, passata per
indirizzo, in cui memorizzare la radice intera. Il
sottoprogramma restituisce 1 se la radice intera è
precisa (il numero è un quadrato perfetto), in
alternativa 0. Scrivere un programma che
utilizza tale sottoprogramma per calcolare la
radice quadrata intera di un numero chiesto
all'utente, e ne visualizza il risultato.
*/

#include <stdio.h>

int radice_quadrata(int, int*);

int main(){
    int num, res;
    scanf("%d", &num);
    int is_quadrato= radice_quadrata(num, &res);
    printf("Radice Quadrata: %d\nQuadrato perfetto: %d\n", res, is_quadrato);
    return 0;
}

int radice_quadrata(int num, int*res){
    int n=0;
    while(n*n<=num){
        n++;
    }
    *res=n-1;  
    if(*res*(*res)==num)
        return 1;
    return 0;

}