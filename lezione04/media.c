#include <stdio.h>

float media(int, int);

int main(){
    int a,b;
    float r;
    scanf("%d %d", &a, &b);
    r = media(a,b);
    printf("%2.f", r);
    return 0;
}

float media(int a, int b){
    return (float) (a+b)/2;
}
