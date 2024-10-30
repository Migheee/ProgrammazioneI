#include <stdio.h>

int main(){
    int n,a,b, cond=1;
    scanf("%d", &n);
    a = n%10;
    n=n/10;
    while(cond && n>0){
        b=n%10;
        if(b>a)
            a=b;
        else
            cond=0;
        n=n/10;
    }
    printf("cond %d\n", cond);
    return 0;
}

