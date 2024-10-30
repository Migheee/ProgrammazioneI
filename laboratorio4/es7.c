#include <stdio.h>
#include <math.h>
int main(){
    int num, num2 = 0;
    printf("inserire numero: ");
    scanf("%d", &num);
    int a = num;
    while(num > 0){
        num2 = num2*10 +(num%10);
        num=num/10;
    }
    printf("%s\n", a==num2 ? "palindromo" : "nno");
    printf("%d\n", num2);
    return 0;
}
