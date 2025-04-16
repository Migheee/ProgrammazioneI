#include <stdio.h>

int main(){
    FILE *fp;
    int a,b;
    fp=fopen("test.txt", "r");
    if(fp){
        fscanf(fp, "%d", &a);
        while(!feof(fp)){
            fscanf(fp, "%d", &b);
            if(a*2==b){
                printf("%d %d\n", a,b);
            }
            a=b;
        }
    }
}