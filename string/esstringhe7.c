/******************************************************************************
Scrivere un programma in linguaggio C che legga una frase introdotta
da tastiera. La frase è terminata dall’introduzione del carattere di
invio. La frase contiene sia caratteri maiuscoli che caratteri minuscoli,
e complessivamente al più 100 caratteri. Il programma deve svolgere
le seguenti operazioni:
- visualizzare la frase inserita
- costruire una nuova frase in cui il primo carattere di ciascuna
parola nella frase di partenza è stato reso maiuscolo. Tutti gli altri
caratteri devono essere resi minuscoli. Il programma deve
memorizzare la nuova frase in una opportuna variabile
- visualizzare la nuova frase.
Ad esempio la frase cHe bElLA gIOrnaTa diviene Che Bella
Giornata 
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main() {
    char frase[N + 1];
    int i = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n' && i < N) {
        frase[i] = c;
        i++;
        scanf("%c", &c);
    }
    frase[i] = '\0';
    printf("Frase inserita: %s\n", frase);
    if (isalpha(frase[0])) 
        frase[0] = toupper(frase[0]);
    for(int a=0; a<i; a++){
        if(frase[a] == ' ' && isalpha(frase[a+1])){
            frase[a+1] = toupper(frase[a+1]);
        }
        else
            frase[a+1] = tolower(frase[a+1]);
    }
    printf("Frase modificata: %s\n", frase);
    return 0;
}