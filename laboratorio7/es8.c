//Data una matrice esiste una sottomatrice quadrata di dimensione n, con somma nulla?
 
#include <stdio.h>
#define R 3
#define C 4

int main(){
    int m[R][C];
    int n,trovato=0;
    scanf("%d", &n);
    for(int i=0; i<=R-n && !trovato; i++){
        for(int j=0; c<=C-n && !trovato; c++){
            somma=0;
            for(int y=0;y<n; y++ ){
                for(int c=0; c<n; c++){
                    somma+=m[i+y][j+c];
                }
            }
            if(somma==0)
                trovato=1;
                printf("OK");
            else{
                printf("KO");
        }
    }
    return 0;
}
