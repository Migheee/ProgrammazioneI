#include <stdio.h>

int pari(int);
void ppari(int); //"procedura", anche se nel c le procedure non esistono.


int main(int argc, char*argv[]){
    int n;
    scanf("%d", &n);
    printf("%s\n", argv[0]);
    printf("%s\n", pari(n) ? "pari" : "dispari");
    ppari(n);
    return 0;
}

int pari(int n){
    if(n%2==0)
        return 1;
    else return 0;
}

void ppari(int n){
    printf("%d\n", n%2==0 ? 1 : 0);
}
