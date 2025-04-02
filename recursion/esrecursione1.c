#include <stdio.h>

int pot(int, int);

int main(){
    int base, exp;
    scanf("%d", &base); 
    scanf("%d", &exp);
    int r= pot(base, exp);
    printf("%d", r);
}

int pot(int base, int exp){
    if(exp==0)
        return 1;
    return base*pot(base, exp-1);
}