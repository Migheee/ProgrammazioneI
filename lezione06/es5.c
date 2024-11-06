/*
Dato un numero, dire se è  primo
*/

#include <stdio.h>

int main(){
    int n, is_primo=1;
    scanf("%d", &n);
    for(int i=2; i<n/2 && is_primo; i++){
        if(n%i==0)
            is_primo=0;
    }
    if(is_primo)
        printf("primo\n");
    else
        printf("non è primo\n");
    return 0;
}
