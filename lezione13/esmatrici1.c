
#include <stdio.h>
#define D 10

int main(){
    int m[D][D];
    int i,j;




    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            scanf("%d", &m[i][j]);
        }
    }

    

    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            printf("%3d", &m[i][j]);
        }
        printf("\n");
    }



    int min = m[0][0];
    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            if(v[i][j]<min)
                min = v[i][j]; 
        }
    }
    printf("Il più piccolo valore è: %d \n", min);



    int cont;
    for(i = 0; i < D; i++){
        cont=0;
        for(j = 0; j < D; j++){
            if(v[i][j]%2==0)
                cont++;
        }
        printf("numero di elementi pari in riga %d : %d\n ", i, cont);
    }
    printf("Il più piccolo valore è: %d \n", min);


    for(i=0; i<D; i++){
        printf("%d\n",a[i][D-i-1]);
    }


    int is_simmetrica=1;
    for(i=0; i<D && is_simmetrica; i++){
        for(j=0; j<D && is_simmetrica; i++){
            if(m[i][j]!=m[j][i])
                is_simmetrica=0;
        }
    }

    printf("%s\n", is_simmetrica ? "è simmetrica" : "non è simmetrica");
    return 0;
}
