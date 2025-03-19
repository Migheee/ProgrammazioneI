/*
Switch-case:selezione multipla
Data una variabile intera (quindi int o char)

Esempio con char
char n;
scanf("%c", &n);
switch(n){
    case: '0': printf("zero");
    case '1': printf("uno");
    case '2': printf("due");
    .....
    default:  printf("carattere non numerico");
}

quindi se n='2', con lo switch eseugirei tutte le istruzioni  da case '2' in poi. nel caso vogliamo uscire subito usare la istruzione break.

char n;
scanf("%c", &n);
switch(n){
    case: '0': printf("zero"); break;
                
    case '1': printf("uno"); break;
    case '2': printf("due"); break;
    .....
    default:  printf("carattere non numerico");
}

*/