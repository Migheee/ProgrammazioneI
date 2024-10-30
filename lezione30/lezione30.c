#include <stdio.h>

/*
Data una sequenza di interi -1 per uscire trovare minimo e sua posizione
*/

int main(){
    int pos,i, n, min;
    scanf("%d", &n);
    pos=1;
    i=1;
    min = n;
    while(n!=-1){
        scanf("%d",&n);
        if(n!= -1 && n<=min){
            min=n;
            pos=i;

        }
        i++;
    }
    printf("numero: %d\n pos: %d\n", numero, pos);
    return 0;
}
