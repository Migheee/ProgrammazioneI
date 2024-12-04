#include <stdio.h>
#define R 3
#define C 4

int main(){
    int l, trovato=0;
    int somma;
    int m[R][C]={{1,2,3,4},{5,6,7,8}, {9,10,11,12}};
    scanf("%d", &l);
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            somma=0;
            for(int k=i-1; k<i+1; k++){
                for(int h=j-1; h<j+1; h++){
                    if(k>=0 && k<R && h>=0 && h<C)
                        somma=somma+m[k][h];
                }
            }
            somma=somma-m[i][j];
            if(somma>l)
                trovato=1;
            if(trovato)
                printf("OK %d %d %d\n", i,j, somma);
            else
                printf("KO");
        }
    }
    return 0;
}
