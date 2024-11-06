/*
    Sequenza intera di numeri di lunghezza indeterminata [0,9] termine input primo numero  non appartenente a [0,9]
    visualizza istogramma a barre con sequenza 0,9
*/


#include <stdio.h>
#define D 10

int main(){
    int n;
    int i;
    int f[D]={0}; //azzera il contenuto dell'array
    scanf("%d", &n);
    while(n>=0 && n<=9){
        f[n]++;
        scanf("%d", &n);
    }
    for(i=0; i<D; i++){
        printf("%d ", i);
        for(int a=0; a<f[i]; a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
