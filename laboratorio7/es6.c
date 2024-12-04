#include <stdio.h>
#define R 4
#define C 5


int main(){
    int m[R][C]={{1,2,3,4,5},{2,2,4,2,2},{6,4,2,3,1},{2,5,1,2,8}};
    int cg=0;
    int i,j,y,k;
    int cont;
    for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            cont=1;
            for(k=j+1; k<C; k++){
                //analizzo il resto della riga
                if(m[i][k]==m[i][j])
                    cont++;
                //analizzo il resto delle righe
                for(y=i+1; y<R; y++){
                    for(k=0; k<C; k++){
                        if(m[y][k]==m[i][j])
                            cont++;
                    }
                    
        if(cont==2)
            cg++;


