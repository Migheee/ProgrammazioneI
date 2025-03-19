//Passaggio di parametri ad una funzione di array e matrici

#include <stdio.h>
#define N 5

void input(int *);
//oppure void input(int a[]);
//oppure void input(int a[N]); includendo anche la dimensione dell'array
//se si usa la seconda o terza opzione, bisogna CONSERVARE il nome dato al parametro formale

void stampa(int *);
int conta(int *);

int main(){
    int a[N];    //a ---> &a[0]
    int r;
    input(a); // a è il nostro parametro attuale (&num[0]). E' un puntatore alla prima zona dell'array a.
    stampa(a);
    r = conta(a);
    printf("Il numero di elementi pari è: %d\n", r);
    return 0;
}

void input(int a[]){  //Non è obbligatorio mettere la dimensione. Se si scriveva N, nessun problema
    int i;
    for(int i=0; i<N; i++){ //il sottoprogramma conosce la costante N perchè è globale.
        scanf("%d", &a[i]);
    }
}

void stampa(int a[]){
    int i;
    for(i=0; i<N; i++){
        printf("%3d", a[i]);
    }
}

int conta(int a[]){
    int i, s=0;
    for(i=0; i<N; i++){
        if(a[i]%2==0){
            s++;
        }
    }
    return s;
}