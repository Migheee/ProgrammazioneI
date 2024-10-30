#include <stdio.h>


int main(){
    int cifra, cifrasuc;
    scanf("%d", &cifra);
    while(cifra!=0){
        scanf("%d", &cifrasuc);
        if(cifrasuc == 2*cifra)
            printf("Cifra: %d, è il doppio della cifra precendente: %d\n", cifrasuc, cifra);
        cifra=cifrasuc;
    }
    return 0;
}
