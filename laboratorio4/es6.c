#include <stdio.h>

int main(){
    int n, somma=0, cond=1, cont=0;
    scanf("%d", &n);
    while(somma < n){
        somma = somma + cont ;
        cont++;
    }
    printf("%s\n", somma==n ? "triangolare" : "non");
    return 0;
}
