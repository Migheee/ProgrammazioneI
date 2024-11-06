/*
Controllare se un numero è strettamente monotono decrescente
*/

#include <stdio.h>

int main(){
    int num,cond,cifra, resto;
    do{
        scanf("%d", &num);
    }while(num<=0);
    resto = num%10;
    num = num/10;
    cond=1;
    while(num > 0 && cond){
        cifra = num%10;
        if(resto >= cifra)
            cond=0;
        resto=cifra;
        num=num/10;
    }
    if(cond)
        printf("monotono decrescente\n");
    else
        printf("no\n");
    return 0;
}
