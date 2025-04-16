/* Dato un int n>0, somma i primi n pari maggiori >0 */

int somma(int n){
    if(n==1)
        return 2;
    return 2*n + somma(n-1);
}

/*Scrivere una funzione ricorsiva che trova il massimo di un array*/

int maxarray(int * a, int dim){
    if(a==1)
        return a[0];
    else
        return massimo(a[0], maxarray(a+1, dim-1));
}

int massimo(int a, int b){
    if(a>b)
        return a;
    return b;
}