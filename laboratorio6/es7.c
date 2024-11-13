/*Chiedere all’utente una sequenza di numeri interi
che termina con l’inserimento dello 0 (e in ogni
caso lunga al massimo 100 elementi). Creare un
array che contenga tutti e soli valori distinti della
sequenza (ovvero omettendo i duplicati).
Visualizzare l’array e il numero di elementi unici
inseriti. */

#include <stdio.h>
#define D 100
int main(){
    int k=0;
    int v1[D];
    int v2[D];
    int n,i=0, cont;
    scanf("%d",&n);
    while(n!=0){
        v1[i]=n;
        i++;
        scanf("%d",&n);
    }
    for(int j=0; j<i; j++){
        cont=0;
        for(int a=0; a<=j; a++){
            if(v1[j]==v1[a])
                cont++;
        }
        if(cont==1){
            v2[k]=v1[j];
            k++;
        }
    }
    printf("elementi non duplicati: %d\n", k);
    for(int j=0; j<k; j++){
        printf("%d\n", v2[j]);
    }
    return 0;
}
