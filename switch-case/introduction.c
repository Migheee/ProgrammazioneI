/*
Switch-case:selezione multipla
Data una variabile intera (quindi int o char)

Esempio con char
char n;
scanf("%c", &n);
switch(n){
    case '0': printf("zero");
    case '1': printf("uno");
    case '2': printf("due");
    .....
    default:  printf("carattere non numerico");
}

quindi se n='2', con lo switch eseugirei tutte le istruzioni  da case '2' in poi. nel caso vogliamo uscire subito usare la istruzione break.

char n;
scanf("%c", &n);
switch(n){
    case '0': printf("zero"); break;
                
    case '1': printf("uno"); break;
    case '2': printf("due"); break;
    .....
    default:  printf("carattere non numerico");
}

*/

//data una sequenza che termina con '\n' stampo frequenze caratteri numerici

#include <stdio.h>

#define DIM 10

int main(){
    char c,d;
    int a[DIM]={0};
    int i;
    scanf(" %c", &c);
    while(c!='\n'){
        switch (c)
        {
            case '0': a[0]++;break;
            case '1': a[1]++;break;
            case '2': a[2]++;break;
            case '3': a[3]++;break;
            case '4': a[4]++;break;
            case '5': a[5]++;break;
            case '6': a[6]++;break;
            case '7': a[7]++;break;
            case '8': a[8]++;break;
            case '9': a[9]++;break;
        }
        scanf("%c", &d); //Per evitare che c contenga 2 caratteri (carattere inserito e \n)
        scanf("%c", &c);
    }
    for(int i=0; i<DIM; i++){
        printf("%d ", a[i]);
    }
    return 0;
}