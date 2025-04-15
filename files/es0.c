#include <stdio.h>

int almenountre(int);

int main(){
    int num,r;
    FILE *fo;

    fo=fopen("out.txt", "w");
    if(fo!=NULL){
        scanf("%d", &num);
        while(num>0){
            r=almenountre(num);
            if(r){
                fprintf(fo, "%d\n", num);
            }
            scanf("%d", &num);
        }   
    }
    else{
        printf("Errore apertura file");
        return 0;
    }
}

int almenountre(int num){
    if(num==0)
        return 0;
    if(num%3==0)
        return 1;
    return almenountre(num/10);
}