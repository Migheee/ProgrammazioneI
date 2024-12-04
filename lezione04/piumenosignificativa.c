#include <stdio.h>

int right(int);
int left(int);

int main(){
    int n,l,f;
    scanf("%d", &n);
    while(n>0){
        printf("%d", right(n));
        printf("%d", left(n));
        scanf("%d", &n);
    }

    return 0;
}

int right(int n){
    return n%10;
}

int left(int a){
    while(a>=10){
        a=a/10;
    }
    return a;
}
