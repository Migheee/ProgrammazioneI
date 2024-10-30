#include<stdio.h>

int main(){
    int sott, num,cifra_corrente, is_bisottratto = 1;
    printf("Inserire numero: ");
    scanf("%d", &num);
    int cifra1 = num%10;
    num = num/10;
    int cifra2 = num%10;
    num=num/10;
    if(num==0)
        is_bisottratto = 0;
    else{
        while(is_bisottratto && num>0){
            cifra_corrente = num%10;
            sott= cifra2-cifra1;
            if(cifra_corrente != sott && cifra_corrente !=-sott)
                is_bisottratto = 0;
            num=num/10;
            cifra1= cifra2;
            cifra2 = cifra_corrente;
        }
    }

    printf("%s\n", is_bisottratto ? "SI": "NO");
    return 0;
}
