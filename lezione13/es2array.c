/*Creare un array che contiene tutti gli elementi non duplicati*/

#include <stdio.h>
#define D 100

int main(){
    int i=0;    
    int v[D];
    int vm[D];
    int unico;
    int k=0;
    int n;
    scanf("%d", &n);
    while(n!=0){
        n=v[i];
        i++;
        scanf("%d", &n);
    }
    
    for (int i=0; i<D; i++){
        unico=1;
        for(int j=0; j<k; j++){
            if(v[i]==v[j])
                unico=0;
            if(unico){
                vm[k]=v[i];
                k++;
            }
        }
    }
    for(int i=0; i<k; i++){
        printf("%3d", vm[i]);
    }
    return 0;
}
