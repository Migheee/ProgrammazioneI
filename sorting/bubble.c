/*
Ordinamento di array 
BUBBLE SORTING: confronto due a due gli elementi e li scambio se non sono in ordine
ad esempio
[1,3,8,0]
[1,3,0,8]
[1,0,3,8]
[0,1,3,8]
*/

#include <stdio.h>
#define N 10
int main(){
    int array[N];
    int tmp;
    int i;

    for(int i=0; i<N; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-1-i; j++){
            if(array[j]>array[j+1]){
                tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(i=0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}