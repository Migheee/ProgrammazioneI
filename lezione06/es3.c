/*
ARRAY
*/

#include <stdio.h>
#define D 10

int main(){
    int temp,n[D]; //Alloco lo spazio per un array di 10 interi. 
    char c[D] = {'a','b','c','d'}; //Alloco lo spazio per un array di 10 char. L'array viene anche inizializzato
    int a[]={1,2,3,4,5}  //a avrà solo 5 posizioni
    for (int i=0; i<D; i++){
        scanf("%d", &a[i]); //input
    }
    for(int i=D-1; i>=0; i--){
        printf("%3d", n[i]); //stampa invertita
    }
    for(int i=0, i<D/2; i++){
        temp=n[i];
        n[i]=n[D-1-i]; //switcho il contenuto di un array
        n[D-1-]=n[i];
    }
    int is_palindromo =1;
    int pos=0;
    while(pos<D/2 && is_palindromo){
        if(n[pos] != n[D-1-pos]) //controllare se un array è palindromo
            is_palindromo = 0;
    }
    if(is_palindromo)
        printf("OK");
    else
        printf("KO");
    return 0;
}
