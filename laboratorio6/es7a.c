/*Creare un array che contiene tutti gli elementi non duplicati*/

#include <stdio.h>
#define D 100

int main(){
    int n, unico;
    int v1[D];
    int v2[D];
    int i=0,k=0;
    scanf("%d", &n);
    while(n!=0){    
        v1[i]=n;
        i++;
        scanf("%d", &n);
    }
    for(int j=0; j<i; j++){
        unico=1;
        for(int a=j+1; a<D && unico; a++){
            if(v1[j]==v1[a])
                unico=0;
        }
        if(unico){
            v2[k]=v1[j];
            k++;
        }
    }
    for(i=0; i<k; i++){
        printf("%3d", v2[i]);
    }
    return 0;
}
