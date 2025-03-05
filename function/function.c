/*
Dato un numero, stampare la somma del numero e del suo inverso
*/
#include <stdio.h>
int somma(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", somma(num));
    return 0;
}

int somma(int num){
    int copia = num;
    int inverso = 0;
    while(copia>0){
        inverso = inverso*10 + copia%10;
        copia = copia/10;
    }
    return num+inverso;
}