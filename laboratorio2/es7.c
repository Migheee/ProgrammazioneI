/*Scrivere un programma che, acquisito un valore intero da
utente, stampi a video 0 se il valore è pari, 1 se è dispari (solo
con i costrutti visti a lezione).*/

#include <stdio.h>

int main(){
    int num,resto;
    printf("Inserisci numero: ");
    scanf("%d", &num);
    resto = num%2;
    printf("%d\n",resto);
    return 0;
}
